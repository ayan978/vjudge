#include<iostream>
using namespace std;

int main(){

 int T;
 cin>>T;
 int A[T],B[T],C[T];

 for(int i=0;i<T;i++){

    cin>>A[i];
    cin>>B[i];
    cin>>C[i];
 }

 for(int i=0;i<T;i++){

    if((A[i]+B[i]+C[i])==180)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 }

}
