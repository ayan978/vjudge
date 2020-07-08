#include<iostream>
using namespace std;

int main(){

int T;
cin >> T;

while(T--){
    int year,leapyrcount=0,x;
    cin>>year;

    for(int i=0;i<year;i++){
        if((i%4==0 && (i%100!=0)) || (i%400==0)){
            leapyrcount+=2;
        }
        else{
            leapyrcount++;
        }

    }
    x = ((leapyrcount-1)%7);

    switch(x){

  case 0 :
    cout<<"sunday"<<endl;
    break;
  case 1 :
    cout<<"monday"<<endl;
    break;
  case 2 :
    cout<<"tuesday"<<endl;
   break;
  case 3 :
    cout<<"wednesday"<<endl;
   break;
  case 4 :
    cout<<"thursday"<<endl;
   break;
  case 5 :
    cout<<"friday"<<endl;
   break;
  case 6 :
    cout<<"saturday"<<endl;
   break;
}

}
}
