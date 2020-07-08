#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
 }

long long lcm(long long a, long long b)
 {
    return (a*b)/gcd(a, b);
 }

int main()
{
   long long t, a, b;
   cin >> t;
   while(t--){
    cin >> a >> b;
    long long g = gcd(a,b);
    long long l = lcm(a,b);
    cout << g << " " << l << endl;
   }
    return 0;
}
