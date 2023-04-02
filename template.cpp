#include <iostream>
using namespace std;

class vectorr
{
public:
    int *arr;
    int size;
    vectorr(int m)
    {
        size = m;
        arr = new int[size];
    }
    int dotproduct(vectorr &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(int argc, char const *argv[])
{
    vectorr v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vectorr v2(3);
    v1.arr[0] = 1;
    v1.arr[1] = 0;
    v1.arr[2] = 1;
    int a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}
