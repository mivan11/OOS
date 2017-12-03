
  nano 2.6.3                 Datoteka: kernel.asm                  Izmijenjena  

bits 32         ;nije instrukcija nego direktiva za (Linux) da se radi o 32 bitnom modu
section .text 
        align 3
        ;dd 0x1BADB002 ;nebitno za sada dok ne rezerviramo
        ;dd 0x00                ; također nebitno       
        ;dd - (0x1BADB002 + 0x00)       ;također nebitno jer je  naslijeđeno

global pocetak
global handler_tipk
global zapisi
global citaj 
global izvrsi 

extern main ;deklariranje funkcije izvana
extern handler_tipk_main 

citaj: 
        mov edx, [esp+4] ;odredi 
        in al, dx  
        ret 

zapisi:
        mov edx, [esp+4];definiraj i kopiraj
        mov al, [esp+4+4]
        out dx,al
        ret
izvrsi:
        mov edx,[esp+4];kopira i stvara 
        lidt[edx]
        sti; odobrava prekide
        ret

handler_tipk:
        call handler_tipk_main ;za promjenu svake pritisnute tipke definirane u c 
        iretd

pocetak:
        cli  ; prekidi 
        call main; poziva glavnu funckiju iz c gdje je se pozivaju ostale funkcije za daljnje  
        mov esp,stack_space
        hlt ; zadržava cpu

