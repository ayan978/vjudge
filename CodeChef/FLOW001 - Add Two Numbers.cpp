#include<iostream>
using namespace std;

int main(){

int T;
cin>>T;
int A[T],B[T],sum[T];

for(int i=0;i<T;i++){
    cin>>A[i]>>B[i];
}
for(int i=0;i<T;i++){
    sum[i]=A[i]+B[i];
    cout<<sum[i]<<endl;
}
}

