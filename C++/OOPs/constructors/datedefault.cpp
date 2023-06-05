#include<bits/stdc++.h>
using namespace std;

class date{

    public:
    int day,month,year;

    //public:
    date(){
        
    }
};

int main()
{
    date d1;
    cin>>d1.day;
    cin>>d1.month;
    cin>>d1.year;
    cout<<d1.day<<" - "<<d1.month<<" - "<<d1.year<<"\n";
    return 0;
}