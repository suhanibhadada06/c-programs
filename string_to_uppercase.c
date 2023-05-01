#include<stdio.h>

int main(){
char str[20];
int i;
printf("enter the string\n");
gets(str);
for(i=0;str[i];i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
    }
}
printf("%s",str);
return 0;
}