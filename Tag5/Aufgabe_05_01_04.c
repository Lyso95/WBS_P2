#include <stdio.h>
#include <string.h>

void codieren(char text[], char string1[], char string2[]) {
    int i=0;
    while(text[i]!='\0' && text[i+1]!='\0'){

        string1[i/2]=text[i];
        string2[i/2]=text[i+1];
        i=i+2;
    }
    if(text[i] != '\0'){
        string1[i/2]=text[i];
        string1[i/2+1]='\0';
    } else {
        string1[i/2]='\0';
    }
    string2[i/2]='\0';
    /* Aus Versehen zwischendurch oben eingegeben.
    if(string1[i]!='\0'){
        text[2*i]=string1[i];
        text[2*i+1]='\0';
    } else {
        text[2*i]='\0';
    }*/
}

void decodieren(char text[], char string1[], char string2[]){
    int i=0;
    while(string1[i] != '\0' && string2[i] != '\0'){
        text[2*i]=string1[i];
        text[2*i+1]=string2[i];
        i++;
    }
}

int main(void){
    char text[100], strA[50], strB[50];
    printf("Geheimtext eingeben:\n");
    scanf(" %s", text);
    
    codieren(text, strA, strB);
    printf("String 1 : \"%s\"\nString 2 : \"$s\" \n", strA, strB);

    char geheimtext[100];
    decodieren(geheimtext, strA, strB);
    printf("Geheimtext: \"%s\"", geheimtext);
    
    return 0;
}