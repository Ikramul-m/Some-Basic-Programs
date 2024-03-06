#include <iostream>
using namespace std;

void swapAlternative(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
            swap(arr[i], arr[i + 1]);
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    swapAlternative(even, 8);
    printArray(even, 8);

    cout << endl;

    swapAlternative(odd, 5);
    printArray(odd, 5);

    return 0;
}