#include <iostream>
#include <fstream>

//The useful classes for working with files in c++ are:-
//1. fstreambase
//2. ifstream --> derived from fstreambase
//3. ofstream --> derived from fstreambase

//In order to work with files in C++ , you will have to open it.Primarily there are 2 ways to open a file.
//1. Using the constructor
//2. using the member function open() of the class

using namespace std;

int main(int argc, char const *argv[])
{
    // string st = "shashank is great";
    string st2;
    // //Opening files using constructor and writing it 
    // ofstream out("sample.txt");  //Write operation
    // out<<st;

    //Opening files using constructor and reading it 
    ifstream in("sample1.txt");  //Read operation
    in>>st2;
    // getline(in, st2);
    cout<<st2;
    
    return 0;
}
