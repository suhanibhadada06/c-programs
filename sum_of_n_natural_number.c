#include<stdio.h>

int main(){
int n;
printf("enter the number :\n");
scanf("%d",&n);
int sum=(n*(n+1)/2);
printf("the sum of %d natural number is : %d",n,sum);
return 0;
}

//using for loop
#include<stdio.h>

int main(){
int n;
printf("enter the number :\n");
scanf("%d",&n);
int sum=0;
for(int i=0;i<=n;i++){
    sum=sum+i;
}
printf("the sum of %d natural number is : %d",n,sum);
return 0;
}
