#include <iostream>
using namespace std;

pair<int,int> findMinMax(pair<int,int> &minmax,int* arr,int size){
    if(size==1){
        minmax.first=arr[0];
        minmax.second=arr[0];
        return minmax;
    }else{
        if(arr[0]>arr[1]){
            minmax.first=arr[0];
            minmax.second=arr[1];
        }else{
            minmax.first=arr[1];
            minmax.second=arr[0];
        }
        for(int i=2;i<size;i++){
            if(arr[i]>minmax.first){
                minmax.first=arr[i];
            }else if(arr[i]<minmax.second){
                minmax.second=arr[i];
            }
        }
        return minmax;
    }
} 

int main(){
    int n;
    cout << "Input the size of the array!" << endl;
    cin >> n;
    int* arr=new int[n];
    cout << "Enter the values of the array!" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    pair<int, int> minmax;
    minmax=findMinMax(minmax,arr,n);
    cout << "The maximum is: " << minmax.first << "and the minimum is: " << minmax.second << endl;
    return 0;
}