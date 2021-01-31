#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){
        return 1;
    }
    return 0;
}

int main(){
    string str;
    cin >> str;
    int len=str.size();
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string s="";
    for(int i=0;i<len;i++){
        if(!(isVowel(str[i]))){
            s=s+"."+str[i];
        }
    }
    cout << s << endl;
    return 0;
}