#include <stdio.h>


int binary_search(int arr[], int lowest, int highest, int target)
{
    while (lowest <= highest)
    {
        int middle;
        middle = (lowest + highest) / 2;
        
        if (arr[middle] > target)
        {
            highest = middle - 1;
        } 
        else if (arr[middle] < target)
        {
            lowest = middle + 1;
        }
        else
        {
            return middle;
        }
    }
    return -1;
    
}

int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int search = binary_search(nums, 0, 9, 5);
    printf("%d", search);

    return 0;
}