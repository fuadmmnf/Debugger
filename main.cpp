#include <iostream>

using namespace std;

int main()
{
    int a=1,b=1;
    for(int i=-1;i<=2;i++)
    {
        double z=50.0/((i*i)-1);
        cout<<z<<endl;
        a+=2;
        b*=2;
    }

    return 0;
}
