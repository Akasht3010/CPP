//Function Overloading
#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Taking 2 parameters: "<<endl;
    return a+b;
}
int sum(int a, int b,int c){
    cout<<"Taking 3 parameters: "<<endl;
    return a+b+c;
}

int main(int argc, char const *argv[])
{
    cout<<"The sum of a and b is : "<<sum(3,6)<<endl;
    cout<<"The sum of a and b and c  is : "<<sum(3,6,9)<<endl;
    return 0;
}
