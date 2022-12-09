#include<stdio.h>
int linearSearch(int array[], int size, int data);
int main()
{
    int array[6]={1,4,3,5,2,6,7};
    int data;
    printf("Enter the data that would like to retrieve:\n");
    scanf("%d", &data);
  
    printf("%d", linearSearch(array, 6, data));
    return 0;
}

int linearSearch(int array[], int size, int data)
{
    int currentPosition, lastPosition;
    lastPosition = size - 1;
    for(currentPosition = 0; currentPosition <= lastPosition; currentPosition++)
    {
        if(array[currentPosition] == data)
        {
            return(currentPosition);
        }
        else
        	return(-1);
    }
  
}