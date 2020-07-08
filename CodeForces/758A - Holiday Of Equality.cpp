#include<iostream>
using namespace std;

int main(){

int N,count=0,sum=0;
cin>>N;
int A[N];
for(int i=0;i<N;i++){
    cin>>A[i];
}
int max=A[0];

for(int i=0;i<N;i++){
    if(A[i]>max){
        max=A[i];
    }
}
for(int i=0;i<N;i++){
    if(A[i]<max){
        count=max-A[i];
        sum+=count;
    }
}
cout<<sum;


}
