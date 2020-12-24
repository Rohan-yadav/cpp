#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
        
    // key=int, value=float
    map<int, float> mp;
    mp.insert({2,3});
    mp.insert({1,2});
    mp.insert({3,4.5});

//looping methode
   
    for(auto it=mp.begin(); it != mp.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;

return 0;
}
              
