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
    cout << "enter the element:";
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "even =" << even << endl;
    cout << "odd =" << odd << endl;

    return 0;
}
