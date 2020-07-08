#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n,k,l,c,d,p,nl,np,toast;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;

  int totalSlice = c*d;
  int totalDrink = (k*l)/nl;
  int totalSalt = p/np;

  if(totalDrink<totalSlice && totalDrink<totalSalt){

    toast = totalDrink/n;
  }
  else if(totalSlice<totalSalt){

     toast = totalSlice/n;
}
else
{
    toast = totalSalt/n;
}

cout<<toast<<endl;
}
