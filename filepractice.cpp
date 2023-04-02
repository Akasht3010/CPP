#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream out;
    out.open("sample.txt");
    out<<"This is me\n";
    out<<"This is me also\n";
    out<<"Me aalsi hu";
    out.close();

    ifstream in;
    string st,st2;
    in.open("sample.txt");
    // in>>st>>st2;
    // // getline(in,st,st2);
    // cout<<st<<st2;

    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}
 