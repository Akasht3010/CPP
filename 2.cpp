#include <iostream>
using namespace std;
void cyclicswap(int *a,int*b,int*c);
int main() {
    int a,b,c;
    cout<<"the three numbers before swapping are";
    cin>>a>>b>>c;
    cyclicswap(&a,&b,&c);
    cout<<"the numbers after swapping are";
    cout<<a<<b<<c;
    return 0;
}
void cyclicswap(int *a,int*b,int*c){
    int temp;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;
}