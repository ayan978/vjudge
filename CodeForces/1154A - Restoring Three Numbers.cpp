#include<iostream>
using namespace std;

int main(){

int First;
int Second;
int Third;
int Fourth;
int Large;
cin>>First>>Second>>Third>>Fourth;

if(First>Second && First>Third && First>Fourth){
    Large = First;
    cout<<Large-Second<<" "<<Large-Third<<" "<<Large-Fourth;
}
else if(Second>Third && Second>Fourth){
    Large = Second;
    cout<<Large-First<<" "<<Large-Third<<" "<<Large-Fourth;
}
else if(Third>Fourth){
    Large = Third;
    cout<<Large-First<<" "<<Large-Second<<" "<<Large-Fourth;
}
else{
    Large = Fourth;
    cout<<Large-First<<" "<<Large-Second<<" "<<Large-Third;
}

}
