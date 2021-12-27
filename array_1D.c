#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n , mulTable;

    printf("Enter the number of which you need a multipication table: ");
    scanf("%d",&n);

    for (int i = 0; i < 10; i++)
    { 
        mulTable = (arr[i])*n;
        printf("%d x %d = %d\n",n , arr[i], mulTable);
    }

    return 0;
}