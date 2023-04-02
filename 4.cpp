#include <iostream>
using namespace std;
int main() {
  int year;
  cout<<"enter the year to be checked for leap year";
  cin>>year;
  if(year%4==0){
      cout<<"the entered year is a leap year";
  }
  else{
      cout<<"the entered year is not a leap year";
  }
    return 0;
}