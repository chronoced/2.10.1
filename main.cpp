#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{  /*string r,t,v="";
    cin>>r>>t;
    v=r;
    r=t;
    t=v;
    cout<<r<<endl<<t;*/
    int a,b,c,a1,b1,c1,n;
    cin>>a>>b>>c>>a1>>b1>>c1;
    n=sqrt((a-a1)*(a-a1)+(b-b1)*(b-b1)+(c-c1)*(c-c1));
    cout << n << endl;
    return 0;
}
