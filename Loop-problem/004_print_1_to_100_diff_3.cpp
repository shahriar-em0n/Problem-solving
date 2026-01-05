#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;

    // for (int i = 0; i <= 10; i += 1)
    for (int i = 0; i <= 100; i += 6)
    {
        cout << n << "*" << i << "= " << n * i << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string w;

    for (int i = 0; i < n; i++)
    {
        cin >> w;
        if (w.length() > 10)
        {
            cout << w[0] << w.length() - 2 << w[w.length() - 1] << endl;
        }
        else
        {
            cout << w << endl;
        }
    }

    return 0;
}
