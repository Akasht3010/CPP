#include <iostream>
using namespace std;
int main()
{
    int A[3][3], B[3][3], C[3][3], sum = 0, i, j, k;
    cout << "Enter First Matrix Elements : \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << " ";
            cin >> A[i][j];
        }
    }
    cout << "Enter Second Matrix Elements : \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << " ";
            cin >> B[i][j];
        }
    }
    cout << "Multiplication of Two Matrices : \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << " ";
            cout << C[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}