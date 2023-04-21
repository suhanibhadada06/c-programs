// #include<stdio.h>
// #include<math.h>
// #include<libm.a>
// int main(){
// int arr[4];
// int j=0,result=0;
// for(int i=0;i<4;i++){
//     scanf("%d",&arr[i]);
// }
// for(int i=3;i>=0;i--){
//     result=result+((int)(pow(2,i))*arr[j]);
//     j++;
// }
// printf("%d",result);
// return 0;
// }

#include<stdio.h>
// #include<libm.a>
#include<math.h>
int main(){
int bits;
int bin[100];
int j=0;
int dec=0;
printf("enter the number of bit:");
scanf("%d",&bits);
printf("enter the binary number");
for(int i=0;i<bits;i++){
    scanf("%d",&bin[i]);
}
for(int i=bits-1;i>=0;i--){
    if(bin[i]==1||bin[i]==0){
        dec=dec+(bin[i]*pow(2,j));
        j++;
    }
    else{
        dec=-1;
        break;
    }
}
printf("the decimal number of given number is : %d \n",dec );
return 0;
}