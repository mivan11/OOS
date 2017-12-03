//zasad ostavljeno ovako dok se ne nađu nove kombinacije tipki, u doradi
//neki neinicijalizirani, neke sam deklarirao, moram poredati i napraviti raspored
unsigned char tipkovnica[128] =  
{
    0,//0000
    27, //0001
    '1',//0010
    '2',//0011
    '3',//0100
    '4',//0101
    '5',//0110
    '6',// 111
    '7',//1000
    '8', //1001
    /* 9 */'9',//0x0A 
    '0',//0x0B
    '-', //0x0C
    '=',//0x0D
    '\b',  /* Backspace 0x0E*/
  '\t',/* Tab  je 0x0F* stavio umjesto clear zasad/
  'q',
  'w',
  'e',
  'r',/* 19 */
  't',
  'z',
  'u',
  'i',
  'o',
  'p',
  '[', ']',//0x1E
  '\n', /* Enter 0x1F */
    0,       /* 29   - Control */
  'a',
  's',
  'd',
  'f',
  'g',
  'h', 
  'j', 
  'k', 
  'l', 
  ';',  /* 39 */
  '\'',
  '`', 
  0, /* Left shift */
 '\\',
 'y',
 'x',
 'c', 
 'v',
 'b',
 'n',/* 49 */
  'm',
  ','
  , '.',
  '/', 
  0,/* Right shift */
  '*',
    0,  /* Alt */
  ' ', /* space */  
  0,   /* Caps lock */
    0,  /* 59 - F1  ... > */ 0,   0,   0,   0,   0,   0,   0,   0,
    0,  /* < ... F10 */
    0,  /* 69 - Num lock*/ 
    0,   /* Scroll Lock */
    0,  /* Home key */
    0,  /* Up Arrow */
    0,  /* Page Up */
  '-',
    0,  /* Left Arrow */
    0,
    0,  /* Right Arrow */
  '+',
    0,  /* 79 - End */   
    0, /* Down Arrow */
    0,  /* Page Down */  
    0,   /* Insert */
    0,  /* Delete  */    0,   0,   0,
    0,  /* F11 */    0,     /* F12  */
    0,  /* za ostale tipke */
};

