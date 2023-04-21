#include<stdio.h>

int main(){
int choice,a,b,n=0;
do{
printf("1.Enter 1 for sum \n2. Enter 2 for subtracted \n3. Enter 3 for muntiply \n4.Enter 4 for divided\n");
scanf("%d",&choice);
printf("Enter two no: ");
scanf("%d %d",&a ,&b);
switch(choice){
    case 1:4
    printf("%d\n",a+b );
    break;
    case 2:
    printf("%d\n",a-b );
    break;
    case 3:
    printf("%d\n",a*b );
    break;
     case 4:
    printf("%d\n",a/b );
    break;
    default:
    printf("Invalid no entered");
}
printf("Enter  1 to continue and enter any random no to exit\n");
scanf("%d",&n);
}while(n==1);

return 0;
}
