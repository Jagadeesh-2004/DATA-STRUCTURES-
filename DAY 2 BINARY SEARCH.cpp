#include<stdio.h>
int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while(low <= high)
	{
        int mid = low + (high - low) / 2;
        if(arr[mid] == key)
		{
            return mid;
        }
        else if(arr[mid] < key)
		{
            low = mid + 1;
        }
        else
		{
            high = mid - 1; 
        }
    }
    return -1; 
}
int main()
{
	printf("GK JAGADEESH - 192324006\n");
    int n, key;    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array in sorted order:\n");
    for(int i = 0; i < n; i++)
	{
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    int result = binarySearch(arr, n, key);
    if(result != -1)
	{
        printf("Element %d found at index %d.\n", key, result);
    }
	else
	{
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}
