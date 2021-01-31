#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string* s=new string[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        int len=s[i].size();
        if(len<=10){
            cout << s[i] << endl;
        }else{
            cout << s[i][0] << len-2 << s[i][len-1] << endl;
        }
    }
    return 0;
}