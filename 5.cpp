#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter a number";
    cin>>num;
    if(num>0){
        cout<<"the entered number is a positive number";
    }
    else if(num==0){
        cout<<"the entered number is zero";
    }
    else{
        cout<<"the entered number is a negative number";
    }
    return 0;
}