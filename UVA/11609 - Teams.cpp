#include <iostream>
using namespace std;
const long mod=1000000007;
long quickmod(long a,long b)
{
    long ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%mod;
            b--;
        }
        b/=2;
        a=a*a%mod;
    }
    return ans;
}
int main()
{

    long n,t,k=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long ans=(n%mod)*(quickmod(2,n-1)%mod)%mod;
        cout<<"Case #"<<k++<<": "<<ans<<endl;
    }
    return 0;
}
