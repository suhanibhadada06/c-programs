// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr1[50];
//     char arr2[25];
//     printf("Enter first stirng: \n");
//     gets(arr1);
//     printf("Enter 2nd string: \n");
//     gets(arr2);
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);
//     int i = 0; 
//     int flag=0;
//         if(arr1[i]=='\0'){
//         printf("True");
//         return;
//         while (arr1[i] != '\0')
//         {
//             flag=0;
//         if (arr1[i] == arr2[i])
//         {
//          flag =1;
//         }
//         else
//         {
//             printf("False");
//             // return;
//             break;
//         }
//         }
    
//         if(flag ==1){
//             printf("both string match");
//         }else{
//             printf("not match");
//         }
// return 0;
// }
// }

#include<stdio.h>
int comp(char[],char[]);
int main(){
int flag;
char a[15],b[25];
printf("enter 1st string\n");
gets(a);
printf("enter 2nd string\n");
gets(b);
flag=comp(a,b);
if(flag==0){
    printf("both string are equal\n");
}
else{
    printf("string are not equal");
}
return 0;
}
int comp(char a[],char b[]){
    int i=0;
    while(a[i]==b[i]){
        if(a[i]=='\0'|| b[i]=='\0')
        break;
        i++;
    }
    if(a[i]=='\0' && b[i]=='\0'){
        return 0;
    }
    else{
        return 1;
    }
}
