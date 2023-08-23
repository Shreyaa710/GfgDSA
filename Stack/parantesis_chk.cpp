#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string x)
{
    stack<char> st;
    for(char c: x)
    {
        if(c=='(' || c=='{' || c=='[')
        {
            st.push(c);
        }

        else
        {
            if(st.empty()) return false;

            if(c==')' && st.top()!='(') return false;

            if(c=='}' && st.top()!='{') return false;

            if(c==']' && st.top()!='[') return false;

            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string s;
    cout << "Enter a string with parentheses: "<<endl;
    cin >> s;
    if (isBalanced(s)) {
        cout << "The parentheses in the string are balanced." << endl;
    } else {
        cout << "The parentheses in the string are not balanced." << endl;
    }
    return 0;
}