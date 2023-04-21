#include<stdio.h>

int main(){
    char arr[]={'s','u','h','a','n','i'};
    char rev[45];
    int j = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = n-1; i>=0; i--) {
        rev[j] = arr[i];
        j++; 
    }
    for (int i = 0; i<n; i++) {
        printf ("%c ", rev[i]);
    }
return 0;
}

#include<stdio.h>

int main(){
char s[45];
char temp;
int len=0;
printf("enter the string to be reversed\n");
gets(s);
while(s[len]!='\0'){
    len++;
}
printf("the length of this string is %d\n",len);
for(int i=0;i<(len-1)/2;i++){
    temp=s[i];
    s[i]=s[len-1-i];
    s[len-1-i]=temp;
}
printf("string now is %s",s);
return 0;
}