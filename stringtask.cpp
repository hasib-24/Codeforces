#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> v;
//VOWEL REMOVE
    for (int i = 0; i < s.size(); i++)
    {
        char ch= s[i];
         if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' && ch != 'Y') {
            v.push_back(ch);
        }

       
    }
//CONVERT TO LOWERCASE
for (int i = 0; i < v.size(); i++)
    {
        char ele=v[i];
        if (ele>='A' && ele<='Z')
        {
            v[i]=ele+32;
        }
        
    }

    for(char ele:v){
        cout<<"."<<ele;
    }
   

    return 0;
}
