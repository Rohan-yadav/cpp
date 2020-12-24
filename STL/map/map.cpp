#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
        
    // key=int, value=float
    map<int, float> mp;
    mp[3] = 4.5;
    mp[4] = 3.0;
    mp[9] = 6.7;
    
    unordered_map<int, int> ump;
    ump[4]=2;
    ump[6]=3;
    ump[2]=1;
    
    //find key value algorithem
    
    if(ump.find(2) == ump.end()) {       //ump.find is iteratorit is iterated untill key is found; if not it will point to last.
            cout<<"Key not found in map"<<endl;
    }else { 
            cout<<"Key is found in map"<<endl;
    }       
    
    return 0;
}             
