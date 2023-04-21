#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    int arr[n];
    int largest = 0;
    int second_largest = 0;
    printf("enter the size of an array\n");
    scanf("%d", &n);
    printf("enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[n]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] > second_largest && arr[i] < largest)
            {
                second_largest = arr[i];
            }
        }
    }
    printf("the second largest value is %d", second_largest);
    return 0;
}