#include <stdio.h>

int linearSearch(int arr[], int size, int valueToFind)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == valueToFind)
        {
            return i; 
        }
    }
    return -1;
}

int main()
{
    int data[] = {3, 45, 1, 2, 9, 7};          
    int size = sizeof(data) / sizeof(data[0]); 
    int valueToFind = 9;                      

   
    int resultIndex = linearSearch(data, size, valueToFind);

    
    if (resultIndex == -1)
    {
        printf("Elemento não encontrado no array.\n");
    }
    else
    {
        printf("Elemento encontrado no índice: %d\n", resultIndex);
    }

    return 0;
}
