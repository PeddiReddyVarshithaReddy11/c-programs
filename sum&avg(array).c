#include <stdio.h>
int main() {
   int a[3];
   float avg,sum=0;
   for(int i=0;i<3;i++){
       printf("Enter element %d:",i+1);
       scanf("%d",&a[i]);
   }
  for(int i=0;i<3;i++){
      sum=sum+a[i];
  }
  avg=sum/3;
  printf("Sum=%d",sum);
  printf("\nAvg=%f",avg);
    return 0;
}