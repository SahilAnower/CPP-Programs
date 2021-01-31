#include <iostream>
#include <utility>
using namespace std;

pair<pair<int,int>,int> sub(int* arr,int n){
    int max=arr[0];
    pair<int,int> p;
    pair<pair<int,int>,int> q;
    for(int index=0;index<n;index++){
        if(arr[index]>=max){
            max=arr[index];
            p=make_pair(index+1,-1);
            q=make_pair(p,max);
        }
        int sum=arr[index];
        for(int j=index+1;j<n;j++){
            sum=sum+arr[j];
            if(sum>max){
                max=sum;
                p=make_pair(index+1,j+1);
                q=make_pair(p,max);
            }
        }
    }
    return q;
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
    pair<pair<int,int>,int> p=sub(arr1,n);
    if(p.first.second==-1){
        cout << "The only indx is : " << p.first.first << "and the sum is: " << p.second << endl;
    }else{
        cout << "The starting and ending index are: " << p.first.first << " " << p.first.second << "and the sum is: " << p.second << endl;
    }
    return 0;
}