#include<stdio.h>

int main(){
int arr[100];
int i,j,k,n;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            for(k=j;k<n;k++){
                arr[k]=arr[k+1];
            }
            n--;
            j--;
        }
    }
}
printf("the elements removed are\n");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}