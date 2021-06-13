#include <iostream>

using namespace std;
int prim(int x)
{
    int k=0;
    for(int i=1 ; i<=x ; i++)
        if(x%i==0)
        k++;
    if(k==2)
        return 1;
    else
        return 0;
}
int suma(int n)
{
    int s=0,d;
    for(d=2 ; d<=n ; d++)
        if(n%d==0 && prim(d)==0)
        s=s+d;
    return s;

}
int main()
{
    cout<<suma(12);
    return 0;
}
