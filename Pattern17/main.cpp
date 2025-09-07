#include <bits/stdc++.h>
using namespace std;

void printPattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Left side stars
        for (int j = 0; j < (n - i) - 1; j++)
        {
            cout << " ";
        }

        // characters in the middle

        char printingCharacter = 'A';
        int breakPoint = (2 * i + 1) / 2;

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << printingCharacter;

            if (j >= breakPoint)
                printingCharacter--;
            else
                printingCharacter++;
        }

        // Right side stars
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{
    cout << "Number of test cases:\n";
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Rows:";
        int n;
        cin >> n;
        printPattern17(n);
    }
    return 0;
}