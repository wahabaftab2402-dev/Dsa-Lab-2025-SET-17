#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, element, position;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to insert: ";
    cin >> element;

    cout << "Enter position: ";
    cin >> position;

    // Shift elements to the right
    for(int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[position - 1] = element;
    n++;

    // Display updated array
    cout << "Updated array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
