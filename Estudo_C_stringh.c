#include <stdio.h>
#include <string.h>

void limp(void){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char nomec[100];
    char renome[100] = "";
    int i = 1;
  
    printf("Digite seu nome completo: ");
    fgets(nomec, 100, stdin);
    limp();

    char nomec2[100];
    strcpy(nomec2, nomec); 

    char *t = strtok(nomec2, " ");
    while (t != NULL) {
    	  
        printf("Seu %d nome e %s\n", i, t);
        strcat(renome, t);
        strcat(renome, " "); 
        t = strtok(NULL, " ");
        i++;
    }

    printf("%s\n", renome);

    return 0;
}