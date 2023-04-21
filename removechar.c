#include<stdio.h>
#include<stdlib.h>
int main(){
char str[100];
char remove;
printf("enter the string:\n");
gets(str);
printf("enter the char to remove\n");
remove=getchar();
for(int i=0;i<strlen(str);i++){
    if(str[i]==remove){
        for(int j=i;j<strlen(str);j++){
            str[j]=str[j+1];
        }
    }
}
printf("%s",str);
return 0;
}