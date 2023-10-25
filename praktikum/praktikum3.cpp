#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    // n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = i; k < n; k++)
        {
            cout << " ";
        }
        for (int l = i; l <= n; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}