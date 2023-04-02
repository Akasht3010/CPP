#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[5] = {20, 30, 40, 50, 60};
    int c[5] = {30, 40, 50, 60, 70};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (a[i] == b[j] && a[i] == c[k])
                {
                    cout << a[i] << ",";
                }
            }
        }
    }
    return 0;
}
