#include <stdio.h>
int main() {
    int a[2][3],b[2][3],c[2][3],i,j;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
         printf("Element b[%d][%d]: ", i,j);
		 scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<1;i++){
    	for(int j=0;j<3;j++){
		c[i][j]=a[i][j]+b[i][j];
		printf("%d ",c[i][j]);		
		}
	}
    return 0;
}
