#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n:";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter finding element:";
    int target;
    cin >> target;
    bool found = false;

    for (int i = 0; i < n; i++)

    {

        if (arr[i] == target)
        {

            found = true;
            break;
        }
    }

    if (found)

        cout << "element found:";
    else
        cout << "element not found";
    return 0;
}