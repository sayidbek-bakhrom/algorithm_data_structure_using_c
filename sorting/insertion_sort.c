#include <stdio.h>


void insertion_sort(int arr[], int n)
{
    // iterate over each element of array
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        
        int j = i - 1;
        // replace elements that are higher than key, to one position ahead of their current position as long as condition met
        while (i >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = temp;
    }
}

int main()
{
    int nums[] = {10, 8, 5, 3, 2, 7, 4, 9, 6, 1};
    
    insertion_sort(nums, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d", nums[i]);
    }
    

    return 0;
}