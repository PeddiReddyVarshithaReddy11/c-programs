#include<stdio.h>
int main(){
    float p;
    int t;
    float r;
    float SimpleInterest;
    printf("Enter amt:");
    scanf("%f",&p);
    printf("Enter time in months:");
    scanf("%d",&t);
    printf("Enter rate:");
    scanf("%f",&r);
    SimpleInterest=p*t*r/100;
    printf("SimpleInterest=%f\n", SimpleInterest);
    return 0;
}