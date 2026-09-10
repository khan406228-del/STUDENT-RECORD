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
    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout << "maximum =" << maximum << endl;

    return 0;
}