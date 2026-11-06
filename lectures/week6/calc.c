/*
 * calc.c - Linux stand-in for the "calc.exe" the original Windows shellcode
 * popped. It's deliberately harmless: it just does something random so you
 * can visibly confirm the exploit launched it.
 *
 * Build:
 *   gcc -m32 -o calc calc.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    printf("=== calc: a totally normal calculator ===\n");
    int a = rand() % 100;
    int b = rand() % 100;
    printf("Random sum: %d + %d = %d\n", a, b, a + b);
    return 0;
}
