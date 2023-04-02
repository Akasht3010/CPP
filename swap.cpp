#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
        int num1,num2;
        cout<<" Enter First Number : "<<endl;
        cin>>num1;
        cout<<" Enter Second Number : "<<endl;
        cin>>num2;
        cout<<" Before Swapping the Value : \n"<<" "<<num1<<"\t"<<num2<<"\n";
        swap(num1,num2);
        cout<<" Outside Function After Swapping the Value : \n"<<" "<<num1<<"\t"<<num2<<"\n"; 
}
void swap(int num1,int num2)
{
        int num3;
        num3=num1;
        num1=num2;
        num2=num3;
        cout<<"\n Inside Function After Swapping the Value : \n"<<" "<<num1<<"\t"<<num2<<"\n";
}