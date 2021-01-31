#include <iostream>
using namespace std;

int subArray(int* arr,int n){
    int max=arr[0];
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return max;
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
    int sum=subArray(arr1,n);
    cout << "The largest contigous sum in the array is: " << sum << endl;
    return 0;
}