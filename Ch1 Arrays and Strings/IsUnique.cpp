//To Implement If a String Has All Unique Characters
//Example   Bihar True
//          America False  #a is Repeating Twice

#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){

    


    string s;
    cin>>s;

    for(int i=0;i<s.length();i++)
        s[i]=tolower(s[i]);  

  int flag=-1;
    // Method 1 Naive Implementation
    //O(n^2)  Solution to check if a character Is Repeated again
  
    // for(int i=0;i<s.length();i++){

    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i]==s[j])
    //             {
    //                 cout<<"False\n";
    //                 flag=1;
    //                 break;
    //             }
    //     }
    // }


    // if(flag==-1)
    //     cout<<"True\n";



    // Method 2  
    //Using sort and checking if consecutive same characters
    //O(nlogn)


    // sort(s.begin(),s.end());

    // for(int i=0;i<s.size()-1;i++){
    //     if(s[i]==s[i+1]){
    //          cout<<"False\n";
    //                 flag=1;
    //                 break;
    //     }
    // }

    
    // if(flag==-1)
    //     cout<<"True\n";



    // Method 3 
    // Using hash that is map in c++
    // O(n) Time and O(n)  Space


    unordered_map<char,int> mp;


    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;

        if(mp[s[i]]>1)
            { cout<<"False\n";
                    flag=1;
                    break;

            }
    }    


     if(flag==-1)
        cout<<"True\n";

    return 0;
}