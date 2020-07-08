#include<iostream>
using namespace std;

int main(){

int T;
cin>>T;
int temp;
while(T--){

   long long int num;
    cin>>num;
    temp=num;
    int score1=0,score2=0,score3=0;

    while(num%2==0){

        num = num/2;
        score1++;
    }
    while(num%3==0){

        num = (num/3);
        score2++;
    }
    while(num%5==0){

        num = (num/5);
        score3++;
    }

    if(num!=1){
        cout<<"-1"<<endl;
    }
    else{

        int result = score1 + 2*score2 + 3*score3;
        cout<<result<<endl;
    }

}
}
