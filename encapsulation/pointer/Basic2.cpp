#include<iostream>
using namespace std;
int main()
{
    int a =20;
    int *p =&a;
    int **dp =&p;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl;
    cout<<**dp<<endl;
    return 0;
}
