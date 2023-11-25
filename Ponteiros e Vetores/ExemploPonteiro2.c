#include<stdio.h>

void troca(int *p, int * s){

    int aux = *p;
    *p = *s;
    *s = aux;

}

int main(){

    int x,y,i,b;
    scanf("%d",&b);
    for(i=0;i<b;i++){
        scanf("%d %d",&x,&y);
        troca(&x,&y);
        printf("Valores trocados = %d %d\n",x,y);
    }

    return 0;
}
