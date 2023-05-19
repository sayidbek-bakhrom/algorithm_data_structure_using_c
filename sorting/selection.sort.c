#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            
            // put min to right postion
            swap(&arr[min], &arr[i]);
        }
    }
}


int main() 
{
    int nums[] = {10, 4, 43, 18, 20, 43, 14,5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    selection_sort(nums, size);
    for (int i =0; i < size; i++)
    {
        printf("%d,", nums[i]);
    }

}