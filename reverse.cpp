#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}
