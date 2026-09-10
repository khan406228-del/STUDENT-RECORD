#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter  the  value of n:";
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}