#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len=s.size();
    string s1="";
    for(int i=0;i<len;i++){
        if(s[i]!='+'){
            s1=s1+s[i];
        }
    }
    sort(s1.begin(),s1.end());
    len=s1.size();
    for(int i=0;i<len;i++){
        if(i==len-1){
            cout << s1[i];
        }else{
            cout << s1[i] << "+";
        }
    }
    return 0;
}