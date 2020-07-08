#include<iostream>
#include<string>
using namespace std;

int main(){

 string s;
 cin>>s;
 int found = 0;

 for(int i=0;i<s.length();i++){

    if(s[i]=='4' || s[i]=='7')
        found++;
 }

 if(found==4 || found==7){

    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }

}
