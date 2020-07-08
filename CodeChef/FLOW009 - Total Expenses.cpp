#include<iostream>
using namespace std;

int main(){

int T;
cin>>T;
double a[T],b[T];

for(int i=0;i<T;i++){

    cin>>a[i]>>b[i];
}

for(int i=0;i<T;i++){

    if(a[i]>1000){
        cout<<std::fixed<<((a[i]*b[i])-(a[i]*b[i]*10/100))<<std::endl;
    }
    else{
    cout<<std::fixed<<a[i]*b[i]<<std::endl;
    }
}
}
