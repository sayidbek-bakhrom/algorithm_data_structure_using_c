#include <stdio.h>


void bubble_sort(int arr[], int length)
{
    // loop for accessing each element
    for (int x = 0; x < length - 1; x++)
    {
        // loop to compare elements of array
        for (int y = 0; y < length - x - 1; y++)
        {
            /* if element is higher
            than adjacent one swap their
            positions and repeat process */
            if (arr[y] > arr[y+1])
            {
                int z = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = z;
        
            }
        }
    }
}


int main()
{
    int nums[] = {20, 19, 16, 23, 12, 7, 10, 2, 5, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    bubble_sort(nums, size);
    
    for (int i=0; i < size; i++)
    {
        printf("%d, ", nums[i]);
    }

    return 0;
}