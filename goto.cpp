#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    cout<<"enter number: ";
    cin>>x;

    if(x%2==0){
        goto even;
    }
    else{
        goto odd;
    }
    even:
    cout<<"Number is even";
    return 0;

    odd:
    cout<<"Number is odd";
    return 0;
}
