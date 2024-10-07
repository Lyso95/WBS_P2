#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x;
    srand(time(NULL));
    rand();
    
    // Würfeln
    x = rand()%6+1;

    if(x>3)
    {
        printf("Überdurchschnittlich");
    }
    else
    {
        switch(x)
        {
            case 1: printf("Oh Mann!"); break;
            case 2: printf("Naja"); break;
            case 3: printf("O. K."); break;
            default: printf("Häh??");
        }
    }
    printf("\n");
    return 0;
    
}
