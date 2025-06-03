#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int evenCount = 0;
    int oddCount = 0;
    int x;
    cout << "enter the size of array you want to create : ";
    cin >> x;
    int arr[x];
    if (x == 0)
        cout << "the array is empty...";
    else
    {
        for (int i = 0; i < x; i++)
        {
            cout << "enter array element " << i + 1 << " : ";
            cin >> arr[i];
        }

        for (int i = 0; i < x; i++)
        {
            if (arr[i] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
        cout << "The number of even numbers in array are : " << evenCount;
        cout << endl
             << "The number of odd numbers in array are : " << oddCount;
    }
    return 0;
}