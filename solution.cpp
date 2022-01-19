#include <iostream>
#include <string>
#include <map>
#include<set>

using namespace std;
class Data
{
public:
    Data(int new_year, int new_month, int new_day){
        year=new_year;
        month=new_month;
        day=new_day;
    }

    int Year()const{
        return year;
    }
    int Month() const{
        return month;
    }
    int Day() const{
        return day;
    }
private:
    int year;
    int month;
    int day;
};

class DataBase
{

private:
    map<Data,set<string>> database;
};
int main()
{
string event;
DataBase db;
while(getline(cin,event)){
    stringstream ss(event);
    string cmd;
    try{
        ss>>cmd;
    }
}
    return 0;
}