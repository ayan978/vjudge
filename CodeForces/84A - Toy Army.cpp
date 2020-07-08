#include<iostream>
using namespace std;
int main()
{
    int num_of_soldiers, total_killed;
    cin>>num_of_soldiers;

    total_killed = 3*((num_of_soldiers + 1)/2);
    cout<<total_killed;
}
