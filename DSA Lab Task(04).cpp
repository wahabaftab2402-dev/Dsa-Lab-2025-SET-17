#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, position;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position to delete: ";
    cin >> position;

    // Shift elements to the left
    for(int i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Decrease array size
    n--;

    // Display updated array
    cout << "Updated array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
