#include<iostream>
#include<algorithm>
using namespace std;

int main(){


int a,b,c,d,e,f,cost,minimum,minimum1;

cin>>a>>b>>c>>d>>e>>f;

if(e>f){

    minimum = min(a,d);
    cost = minimum * e + min(b,min(c,d - minimum)) * f;

}

else{
    minimum = min(b,min(c,d));
    minimum1 = d-minimum;
    cost = minimum*f+min(a,minimum1)*e;

}

cout<<cost;

}
