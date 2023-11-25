#include<stdio.h>

float somatorio(int m, float v[]){
    int i;
    float s = 0.0F;
    for(i=0;i<m;i++)
        s += v[i];
    return s;
}

int main(){
    int x,i;
    scanf("%d",&x);
    float v[x];
    for(i=0;i<x;i++){
        scanf("%f",&v[i]);
    }
    float s = somatorio(x,v);
    printf("Somatorio = %.1f\n",s);
    return 0;
}
