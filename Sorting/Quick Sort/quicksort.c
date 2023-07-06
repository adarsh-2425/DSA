
//Function to sort an array using quick sort algorithm.
void quickSort(int arr[], int low, int high)
{
    // code here
    if(low < high) {
        int loc = partition(arr, low, high);
        quickSort(arr, low, loc-1);
        quickSort(arr, loc+1, high);
    }
}
    
int partition (int arr[], int low, int high)
{
   // Your code here
   int pivot = arr[low];
   int start = low;
   int end = high;
   
   while(start < end) {
       while(arr[start] <= pivot) {
           start++;
       }
       while(arr[end] > pivot) {
           end--;
       }
       if(start < end) {
           int temp = arr[start];
           arr[start] = arr[end];
           arr[end] = temp;
       }
   }
   int temp2 = arr[low];
   arr[low] = arr[end];
   arr[end] = temp2;
   return end;
}

    return 0;
}
// } Driver Code Ends
