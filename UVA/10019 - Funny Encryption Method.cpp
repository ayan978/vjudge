#include<iostream>
#include<cmath>
using namespace std;

int main(){

int n,a,temp,sum,k;
cin>>n;
while(n--){
    cin>>a;
    k=0,sum=0,temp=a;
    while(temp){
        sum+=temp%2;
        temp/=2;
    }
    cout<<sum<<" ";
    while(a){
        temp+=(a%10)*pow(16,k++);
        a/=10;
    }
    while(temp){
        a+=temp%2;
        temp/=2;
    }
    cout<<a<<endl;
}

}
