#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, key;
    int low, high, mid;
    int found = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Binary Search
    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = mid;
            break;
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

    // Display result
    if(found != -1)
    {
        cout << "Element found at position: " << found + 1;
    }
    else
    {
        cout << "Element not found in the array.";
    }

    return 0;
}
