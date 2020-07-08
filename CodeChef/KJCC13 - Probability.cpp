#include <iostream>
using namespace std;
bool zero(int n) {
      if(n == 0)
         return true;
   while(n) {
      if(n % 10 == 0)
         return true;
      n /= 10;
   }
   return false;
}
int main() {
   int a, b;
   int t;
   cin>>t;
   while(t--) {
      int c = 0, i;
      cin>>a>>b;
      for(i = a ; i <= b ; i++)
         if(zero(i))
            c++;
      cout<<c<<"/"<<b-a+1<<endl;
   }
   }
