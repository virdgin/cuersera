#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

class Mix
{
public:
  static std::string mix(const std::string &s1, const std::string &s2){
   //vector<vector <string>> _s1;
   //vector<vector<string>> _s2;
   map <char,int> _s1;
   map <char,int> _s2;
   for(auto &i : s1 ){
       if( i != ' '){
           _s1[i]++;
       }
   }
   for(auto & i: s2){
       if(i != ' '){
           _s2[i]++;
       }
   }
   string result;
   int i=0;
   while (true)
   { 
       char temp = _s1[i].first;
      
   }
   
   
  }
};