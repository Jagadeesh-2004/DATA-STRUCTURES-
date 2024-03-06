#include<stdio.h>
int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
	{
        if(arr[i] == key)
		{
            return i; 
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
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++)
	{
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    int result = linearSearch(arr, n, key);
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
