#include<stdio.h>

void somaprod(int x, int y, int *s, int *p){

    *s = x + y;
    *p = x * y;

}

int main(){

    int x,y;
    while(scanf("%d %d",&x,&y) != EOF){
        int s,p;
        somaprod(x,y,&s,&p);
        printf("Soma = %d e Multiplicacao = %d\n",s,p);
    }

    return 0;
}
