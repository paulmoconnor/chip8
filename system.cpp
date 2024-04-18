#include <stdio.h>
// 35 opcodes, 2 bytes long (store current opcode)
unsigned short opcode;

// 4k memory in total
unsigned char memory[4096];

// 15 8-bit general purpose registers V0 to VE
unsigned V[16];


// have value from 0x000 to 0xFFF
unsigned short I;
unsigned short pc;

 
// 0x000-0x1FF - Chip 8 interpreter (contains font set in emu)
// 0x050-0x0A0 - Used for the built in 4x5 pixel font set (0-F)
// 0x200-0xFFF - Program ROM and work RAM

// Graphics = b/w 2048 pixels, can easily be represented via 0 or 1
unsigned char gfx[64 * 32];

// Two timer registers that count to 60hz, when set above zero they will count down to zero
unsigned char delay_timer;
unsigned char sound_timer; // System's buzzer sounds whenever the sound time reaches zero

// Stack setup
unsigned short stack[16];
unsigned short sp;

// HEX based keypad (0x0 - 0xF)
unsigned char key[16];


int main() {
    for (int i = 0; i < 20; i++) {
        printf("Hello, wolrd");
   }
}
