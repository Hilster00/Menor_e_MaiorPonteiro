#include <stdio.h>

void main(){
    
    int n[10];
    int *ponteiro_maior,*ponteiro_menor;
    //recebimento do primeiro valor
    printf("Digite um valor:");scanf("%d",&n[0]);
    
    //inicializacao do menor e maior valor
    ponteiro_maior=&n[0];
    ponteiro_menor=&n[0];
    
    for(int i=1;i<10;i++){
        printf("Digite um valor:");scanf("%d",&n[i]);
        //atualizar o menor valor
        if(*ponteiro_menor>n[i]){
            ponteiro_menor=&n[i];
        }
        //atualizar o maior valor
        if(*ponteiro_maior<n[i]){
            ponteiro_maior=&n[i];
        }
    }
    
    printf("\nO menor valor é %i e o maior é %i",*ponteiro_menor,*ponteiro_maior);

    
}
