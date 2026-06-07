#include <stdio.h>
int main() {
    int a[2][3],i,j;
    int sum_r1,sum_r2;
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe resulting matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
         printf("%d\t", a[i][j]); 
        }
        printf("\n");
    }
    sum_r1=a[0][0]+a[0][1]+a[0][2];
    sum_r2=a[1][0]+a[1][1]+a[1][2];
	printf("Sum_r1=%d\n",sum_r1);
	printf("Sum_r2=%d",sum_r2);
    return 0;
}
