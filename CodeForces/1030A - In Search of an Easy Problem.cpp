#include<iostream>
using namespace std;

int main(){

int N,input,flag=0;
cin>>N;

for(int i=0;i<N;i++){
    cin>>input;

    if(input==1){
        cout<<"HARD";
        flag = 1;
        break;
    }
}

if(flag==0){
    cout<<"EASY";
}

}
