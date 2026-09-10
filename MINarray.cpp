#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n:=";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minimum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minimum)
            minimum = arr[1];
    }
    cout << "minimum:" << minimum << endl;
    return 0;
}