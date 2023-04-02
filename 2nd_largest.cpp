#include<iostream>
using namespace std;
int main() {
int arr[]={111, 13, 25, 9, 34, 1};
int n=sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+n);

cout<<"smallest element is "<<arr[0]<<endl;
cout<<"second smallest element is "<<arr[1];
return 0;
}