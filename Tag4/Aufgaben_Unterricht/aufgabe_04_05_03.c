#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x;

void zufall(){
    x = rand() %10 + 1;
}

void main(){
    srand(time(NULL));
    rand();
    
    for(int i=0; i<5; i++){
        zufall();
        printf("%d\n", x);
    }
    system("pause");
}

