#include <stdio.h>
#include <string.h>

char* reverse(char *s) {
    int length = strlen(s) ;
    int c, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    return s;
}

void spin_words(char frutas[], char resultado[]) {
    int tamanhoFrutas = strlen(frutas);
    char result[tamanhoFrutas+1];
    
    char *token = strtok(frutas, " ");
    while(token != NULL) {
        int tamanho = strlen(token);
        if(tamanho >= 5) {
            token = reverse(token);
        }
        
        printf("\n%s", token);
        
        strcat(result, token);
        strcat(result, " ");
        
        token = strtok(NULL, " ");
    }
    
    printf("\n%s", result);
    resultado = result;
    printf("\n%s", resultado);
}

int main(){
    char frutas[] = "This is another test";
    
    spin_words(frutas, "");
}
