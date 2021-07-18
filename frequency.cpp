#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b)
{
    return a.second > b.second;
}

void sortMap(map<string, int> &m)
{
    vector<pair<string, int>> v;
    for (auto& i : m) 
        v.push_back(i);
    
    sort(v.begin(), v.end(), compare);
    
    cout<<"{\n"; 
    for (auto& i : v)
        cout <<"  '"<<i.first<<"'" <<": "<< i.second<<"\n";
    
    cout<<"}";
    
    
}

void printFrequency(string str)
{
    map<string,int> M;
 
    string word = "";
 
    for (int i = 0; i < str.size(); i++) {
 
        if (str[i] == ' ') {
 
            if (M.find(word) == M.end()) {
                M.insert(make_pair(word, 1));
                word = "";
            }
            
            else {
                M[word]++;
                word = "";
            }
        }
 
        else
            word += str[i];
    }
 
    if (M.find(word) == M.end())
        M.insert(make_pair(word, 1));
 
    else
        M[word]++;
 
    sortMap(M);
    
}
 
int main()
{
    string str;
    getline(cin,str);
   
    printFrequency(str);
    return 0;
}