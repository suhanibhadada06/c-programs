#include<stdio.h>

int main(){
    int n;
    int arr[n];
  
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array elemets\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]); 
    }
    printf("reverse of array elemets\n");
    for(int i=n-1;i>=0;i--){
    printf("%d ",arr[i]);
    }
    return 0;
}