#include<iostream>
using namespace std;
class cube{
    public:
    int side;
    cube(){
        side=10;
    }
};
int main(int argc, char const *argv[])
{
    cube c;
    cout<<c.side;
    
}
