#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BIBLIOTECA DAS CHAMADAS DE SISTEMA
#include <unistd.h>

#define True 0
#define Falso 1

int main(){
	system("clear");
	char entrada[25];
	char *word[2];
	char aux[100];	

	while(1){
		printf("ubuntu@ubuntu:~$ ");
		fgets(entrada,25,stdin);
        	word[0] = strtok(entrada, " ");//RECEBE 1 PALAVRA
        	word[1] = strtok(NULL,"\n");//RECEBE 2 PALAVRA

                if(strcmp(word[0],"cd") == True){	
                    if((chdir(word[1]))){
			printf("%s : No such file or directory\n",word[1]);
		    }
		}
		else if(strcmp(word[0],"pwd\n") == True){
                    printf ( "%s\n" , getcwd(aux, 100));
               	}
		else if((strcmp(word[0], "ls\n") == True)){
                    system("ls");
                }
		else if((strcmp(word[0],"more") == True)){
			char more[] = "more ";
  			strcat(more,word[1]);
  			system(more);
                }
		else if(strcmp(word[0],"exit\n") == True){
                    break;
               	}
                else{
                    printf("Comando Invalido\n");
                }
	}
}
