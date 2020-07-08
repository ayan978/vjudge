#include<iostream>
#include<cmath>
using namespace std;

int main(){

 int x1,x2,y1,y2;
 cin>>x1>>y1>>x2>>y2;

 int d1 = abs(x1-x2);
 int d2 = abs(y1-y2);

 if(d1>d2)
    cout<<d1;
 else
    cout<<d2;

}
