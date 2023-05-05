/******************************************************************************

Array Operations - Deletion from Array in sorted array
Time complexity  = O(n-p);

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10] = {5 ,6, 1, 9, 2};
    int n = 5;
    int position = 4;
    
    int item = arr[position-1];
    for(int i = position-1; i <= n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    
    printf("\n%d deleted from position %d", item, position);
    printf("\n");
    printf("new array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    


    return 0;
}
/******************************************************************************

Array Operations - Deletion from Array in unsorted array
Time complexity  = O(1)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10] = {5 ,6, 1, 9, 2};
    int n = 5;
    int position = 4;
    
    arr[position-1] = arr[n-1];
    n--;
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
