#include <stdio.h>

// Funktion "tausche"
int tausche(int* p1, int* p2){ 
/* Ohne Pointer

    c = a;
    a = b;
    b = c;
*/

//Übergabewerte 2integer-Pointer p1 p2
    int c;
    c = *p1;
    *p1 = *p2;
    *p2 = c;
}

void main(){

    int a, b;

    printf("Bitte gib die Integer 'a' und 'b' nacheinander ein!\n");
    scanf("%d", &a);
    scanf("%d", &b);

    tausche(&a, &b);

    printf("Wert a: %d\n Wert b: %d", a, b);
}