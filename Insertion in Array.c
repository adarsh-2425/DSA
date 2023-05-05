/******************************************************************************

Array Operations - Traversal, Insertion in sorted array

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 5, 6};
    int n = 5;
    int position = 4, value = 4;
    
    for(int i = n-1; i >= position-1; i--) {
        arr[i+1] = arr[i];
    }
    arr[position-1] = value;
    n++;
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
