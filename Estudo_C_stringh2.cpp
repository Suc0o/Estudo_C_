#include <stdio.h>
#include <string.h>


void limp(void){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void conta(char *nome[]){
	
	    int x = 0;
		char y;
		for(int i = 0; i < strlen(*nome) - 1; i++){
		
		if(nome[i] != '\0'){		
			printf(" %c ", y);
			x++;
		}
	
	}
	printf("Seu nome tem %d caracteres", x); 
}

int main(){
	
	
	char *nome[100];
	
	printf("Digite seu nome: ");
	fgets(*nome, 100, stdin);
	

	
	conta(nome);
	
	
	
	return 0;
}
