#include<iostream>
using namespace std;

int main(){

int T;
cin>>T;
int A[T],sum[T],r[T];

for(int i=0;i<T;i++){
    cin>>A[i];
}

for(int i=0;i<T;i++){
    sum[i]=0;
    while(A[i]!=0){
        r[i]=A[i]%10;
        sum[i]+=r[i];
        A[i]=A[i]/10;
    }
}

for(int i=0;i<T;i++){
    cout<<sum[i]<<endl;
}


}
