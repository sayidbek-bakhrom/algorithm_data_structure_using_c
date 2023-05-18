#include <stdio.h>


int linear_search(int arr[], int n, int target)
{
    // traversing each element of array
    for (int i=0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    
    }
    
    return -1;
}

int main()
{
    int nums[10] = {14, 10, 43, 65, 86, 70, 90, 55, 79, 93};
    int length = sizeof(nums) / sizeof(nums[0]);
    int search = linear_search(nums, length, 90);
    printf("%d", search);

    return 0;
}