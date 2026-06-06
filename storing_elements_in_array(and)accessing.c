#include <stdio.h>
int main() {
   int a[5];
   for(int i=0;i<5;i++){
       printf("Enter element %d:",i+1);
       scanf("%d",&a[i]);
   }
   printf("%d",a[2]);
    return 0;
}