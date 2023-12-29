#include<iostream>
#include <algorithm>
#include<map>
using namespace std;

// int main()
// {
//     unordered_map<string, int> m;
//     // string arr[2]={"shri","yo"};
//     for(int i=0;i<9;i++){
//         m[arr[i]]++;
//     }
    // m["shreya"] = 1;
    // // m["happie"] = 2;
    // m["bread"] = 3;

    // // cout<<m.find("shreya")<<endl;

    // if(m.find("happie") != m.end())
    // cout<<"Found"<<endl;

    // else
    // cout<<"Not Found"<<endl;

    // // for(auto it = m.begin(); it != m.end(); it++)
    // // cout<<(it->first)<<" "<<(it->second)<<endl;

    // for(auto e:m){
    //     cout<<e.first<<" "<<e.second<<endl;
    // }

//     return 0;
// }


// int main()
// {
//     unordered_map<string, int> m;
//     m["shreya"] = 1;
//     m["happie"] = 0;
//     m["bread"] = 3;

//     if(m.count("happie") > 0)
//     cout<<"Found"<<endl;

//     else
//     cout<<"Not Found"<<endl;

//     for(auto it = m.begin(); it != m.end(); it++)
//     cout<<(it->first)<<" "<<(it->second)<<endl;

//     return 0;
// }

// int main()
// {
//       unordered_map<int,int> m;
//         for(int i=0;i<nums.size();i++){
//             m[nums[i]]++;
//         }
        
//         multimap<int, int> newmap = invert(m);

//         multimap<int, int> :: iterator it;
//         for (it=newmap.begin(); it!=newmap.end(); it++) 
//         {
//             cout << it->second << ": " << it->first << endl;
//         }
// }



int main()
{
    map<string, int> m,n;
    m["shreya"] = 1;
    m["happie"] = 0;
    n["bread"] = 7;
    n["bro"] = 9;

    cout<<m.size()<<endl;

    // m.erase("shreya");
    // m.erase(m.begin(), m.end());
    // m["shreya"]--;

    for(auto it = m.begin(), e=n.begin(); it != m.end(), e !=n.end(); it++, e++)
    cout<<(it->second)<<" "<<(e->second)<<endl;

    // for(auto e:m , auto it:n){
    //     cout<<e.second<<" "<<it.second<<endl;
    // }
    return 0;
}