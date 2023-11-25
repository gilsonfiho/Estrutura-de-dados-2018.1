#include<stdio.h>
#include<stdlib.h>

float somatorio(int m, int n, float *v){
    int i, j;
    float md =0.0F;
    for(i=0;i<m;i++)
        for(j=0;j<3;j++)
            md += v[i*n+j];
    return md;
}

int main (){
    int i;
    float s;
    float **m = (float**)malloc(m*sizeof(float*));
    for(i=0; i<m; i++)
        mat[i] = (float*)malloc(n*sizeof(float));
    s = somatorio(m,&m);
    printf("somatorio=%.1f,media=%.1f",s,s/2);
    return 0;
}

