#include <stdio.h>
int main() {
   int a[10];
   int even=0,odd=0;
    printf("Enter elements:");
   for(int i=0;i<10;i++){
       scanf("%d",&a[i]);
       if(a[i]%2==0){
           even=even+1;
        }else{
          odd=odd+1;
  }
   }
   printf("total even nums are:%d",even);
   printf("\ntotal odd nums are:%d",odd);
    return 0;
}