#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int sum = 0;
    int max = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        sum += num;

        if (num > max)
        {
            max = num;
        }
    }

    if (sum == 2 * max)
    {
        cout << "Yes" << endl;
        cout << "Sum = " << max << endl;
    }
    else
    {
        cout << "No" << endl;
        cout << "Diff = " << abs(2 * max - sum) << endl;
    }



    return 0;
}
