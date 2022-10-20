#include<iostream>
using namespace std;

int main(){

    cout<<"Welcome to RYZN's Cleaning Services!"<<endl;
    cout<<"\nEnter the no. of small rooms: ";
    int small_room;
    cin>>small_room;
    cout<<"\nEnter the no. of large rooms: ";
    int large_room;
    cin>>large_room;

    const int per_small_room {25};
    const int per_large_room {35};
    const double sales_tax {0.06};

    cout<<"\nEstimate for cleaning service: "<<endl;
    cout<<"Number of small room: "<<small_room<<endl;
    cout<<"Number of large room: "<<large_room<<endl;
    cout<<"Price per small room: $"<<per_small_room<<endl;
    cout<<"Price per large room: $"<<per_large_room<<endl;

    double cost = (small_room*per_small_room)+(large_room*per_large_room);
    cout<<"Cost: $"<<cost<<endl;

    double tax = cost*sales_tax;
    cout<<"Tax: $"<<tax<<endl;

    cout<<"Total estimate: $"<<cost+tax<<endl;
    return 0;
}
