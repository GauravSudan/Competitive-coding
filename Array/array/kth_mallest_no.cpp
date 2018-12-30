#include <iostream>
using namespace std;

class p
{
private:
    int a=10;
};
class c : public p
{
public:
    void print()
    {
        cout<<a;
    }
};
int main()
{
    c ob;
    ob.print();
    return 0;
}
