#include<stdio.h>
#include<stdlib.h>

float somatorio(int m, float v[][3]){
    int i, j;
    float md =0.0F;
    for(i=0;i<m;i++)
        for(j=0;j<3;j++)
            md += v[i][j];
    return md;
}

int main (){
    float s;
    float m[2][3] = {{5.0,4.0,3.0},{1.0,2.0,5.0}};
    s = somatorio(2,m);
    printf("somatorio=%.1f,media=%.1f",s,s/2);
    return 0;
}
