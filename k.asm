bits 32 ;za NASM u 32 mod, Linux
section .text ;spremanje

global start 
extern main ;deklariranje funkcije izvana

start:
      cli ;prekidi
      call main
      hlt ;zaustavljanje procesora

