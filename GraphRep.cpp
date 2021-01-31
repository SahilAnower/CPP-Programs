#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> v[],int a,int b){
    v[a].push_back(b);
    v[b].push_back(a);
}

void printFunc(vector<int> v[],int n){
    for(int i=0;i<n;i++){
        cout << "vertex- " << i << "connected to- ";
        for(auto it=v[i].begin();it!=v[i].end();it++){
            cout << *(it) << " " ;
        }
    }
}

int main(){
    int n;
    cout << "Enter the Number of vertices- " << endl;
    cin >> n;
    vector<int> v[n];
    int a,b,e;
    cout << "enter the number of edges you want!" << endl;
    cin >> e;
    for(int i=0;i<e;i++){
        cout << "Enter the vertices between which you want to provide edge!" << endl;
        cin >> a >> b;
        addEdge(v,a,b);
    }
    printFunc(v,n);
    return 0;
}