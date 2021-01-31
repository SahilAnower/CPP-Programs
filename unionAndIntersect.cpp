#include <iostream>
#include <set>
using namespace std;

void arrUnion(int* A,int n,int* B,int m){
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(A[i]);
    }
    for(int j=0;j<m;j++){
        s.insert(B[j]);
    }
    cout << "The union array is :" ;
    for(auto it=s.begin();it!=s.end();it++){
        cout << *(it);
    }
}

int main(){
    int n;
    int* arr1;
    cout << "Enter the size of the first array?" << endl;
    cin >> n;
    arr1=new int[n];
    cout << "enter the array elements" << endl;
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int m;
    int* arr2;
    cout << "Enter the size of the second array?" << endl;
    cin >> m;
    arr2=new int[m];
    cout << "enter the array elements" << endl;
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }
    arrUnion(arr1,n,arr2,m);
    return 0;
}