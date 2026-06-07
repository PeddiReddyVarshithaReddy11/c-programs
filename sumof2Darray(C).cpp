#include<stdio.h>
int main(){
    int a[2][3], sum=0;
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            scanf("%d", &a[i][j]);

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++)
            sum = sum + a[i][j];
        printf("\n");
    }
    printf("%d", sum);
}
