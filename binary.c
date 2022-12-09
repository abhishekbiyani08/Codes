#include<stdio.h>
int binarySearch(int array[], int low, int high, int data);
void bubbleSort(int array[], int size);
int main()
{
    int array[9]={1,4,3,5,2,6,7,9,8};
    int data;
    bubbleSort(array, 9);
    printf("Enter the data that would like to retrieve:\n");
    scanf("%d", &data);
   
    printf("%d", binarySearch(array, 0, 8, data));
    return 0;
}

int binarySearch(int array[], int low, int high, int data)
{
    int mid;
    while(low<=high)
    {
    mid = (low + high)/2;
    if(array[mid] == data)
    {
        return(mid);
    }
    else if(array[mid] < data)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
    }
    return(-1);
        
}

void bubbleSort(int array[], int size)
{
    int startIndex, index, tmp;
    int last = size -1;
    for(startIndex=0; startIndex < last; startIndex++)
    {
        for(index=last; index > startIndex; index--)
        {
            if(array[index] < array[index-1])
            {
                tmp = array[index];
                array[index] = array[index-1];
                array[index-1] = tmp;
            }
        }
    }
 
}