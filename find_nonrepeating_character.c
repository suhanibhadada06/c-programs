#include<stdio.h>
#include<string.h>
int main(){
int len,flag;
char str[20];
printf("enter the string\n");
gets(str);
len=strlen(str);
for(int i=0;i<len-1;i++){
    flag=2;
    for(int j=0;j<len;j++){
        if(str[i]==str[j]&& i!=j){
            flag=0;
            break;
        }
    }
    if(flag!=0){
        printf("%c",str[i]);
        break;
    }
}
return 0;
}