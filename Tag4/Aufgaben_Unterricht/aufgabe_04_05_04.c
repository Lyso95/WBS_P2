#include <stdio.h>
#include <windows.h>

int main(void){
    system("chcp 65001");
    system("cls");

    int array[11];

    for(int i=0; i<11; i++){
        printf("Geben Sie bitte die %d. Ziffer zwischen 1 und 10 ein: ", i+1);
        scanf("%d", &array[i]);
        if(array[i]<0 || array[i]>9){
            i--;
        }
    }

    int hashwert = array[0];
    for(int i=1; i<10; i++){
        if(i%2==0) hashwert = hashwert + array[i];
        else hashwert = hashwert - array[i];
    }
    hashwert = hashwert % 10;

    if(hashwert == array[10]) printf("Alles O.K.!");
    else printf("Leider unzulässig!");

    printf("\n");
    system("pause");
    return 0;
}