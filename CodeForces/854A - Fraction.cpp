#include<iostream>
using namespace std;
int gcd(int a,int b) {
    return b==0?a:gcd(b,a%b);
    }
int main()
{
    int n;
    cin>>n;
    for(int i=n/2;;i--)
        if(gcd(i,n-i)==1) {
            cout<<i<<" "<<n-i;break;}
    return 0;
}
