#include <stdio.h>
#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 5454, 656, 22, 778, 21, 88, 21};
    int size = sizeof(arr) / sizeof(int);
    int element;
    cout << "Enter element to be searched: " << endl;
    cin >> element;
    int searchIndex = linearsearch(arr, size, element);
    printf("The element %d was found at index %d", element, searchIndex);
    return 0;
}