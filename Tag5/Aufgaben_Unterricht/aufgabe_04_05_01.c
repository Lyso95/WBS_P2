#include <stdio.h>
#include <windows.h>

// Definition und Initialisierung von globaler Variable.
int global = 1;

// Funktion um x zu globaler Variable hinzuzufügen.
void erhoeheUmX(int x){
    global=global+x;    
}

//Funktion um Wert der globalen Variable auszugeben.
void output(){
    printf("Ausgabe: %d\n", global);
}
/*
Main:
1. User soll Wert eingeben.
2. Die Funktion "erhoeheUmX" soll mit der Usereingabe aufgerufen werden.
3. Das Ergebnis soll ausgegeben werden.
*/
int main(){
    int x;

    //Eingabe des Wertes durch User.
    printf("Bitte gib einen Integer ein: ");
    scanf("%d", &x);

    erhoeheUmX(x);
    output();

    //Pause um Programm nicht gleich wieder zu schließen.
    system("pause");
    return 0;
}

