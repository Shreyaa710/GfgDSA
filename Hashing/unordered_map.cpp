#include<iostream>
#include<unordered_map>
using namespace std;

// int main()
// {
//     unordered_map<string, int> m;
//     m["shreya"] = 1;
//     m["happie"] = 2;
//     m["bread"] = 3;

//     if(m.find("happie") != m.end())
//     cout<<"Found"<<endl;

//     else
//     cout<<"Not Found"<<endl;

//     for(auto it = m.begin(); it != m.end(); it++)
//     cout<<(it->first)<<" "<<(it->second)<<endl;

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



int main()
{
    unordered_map<string, int> m;
    m["shreya"] = 1;
    m["happie"] = 0;
    m["bread"] = 3;

    cout<<m.size()<<endl;

    m.erase("shreya");
    m.erase(m.begin(), m.end());

    for(auto it = m.begin(); it != m.end(); it++)
    cout<<(it->first)<<" "<<(it->second)<<endl;

    return 0;
}