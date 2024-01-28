#include <iostream>
using namespace std;

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
        cout << "Elemento não encontrado." << endl;
    }
    else
    {
        cout << "Elemento encontrado - índice:" << resultIndex << endl;
    }

    return 0;
}
