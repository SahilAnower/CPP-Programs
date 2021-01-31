#include <iostream>
using namespace std;

int swapp(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void ssort(int* arr,int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        if(arr[low]<0){
            low++;
        }else{
            swapp(arr[low],arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    int* arr;
    cout << "Enter the size of the array?" << endl;
    cin >> n;
    arr=new int[n];
    cout << "enter the array elements" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    ssort(arr,n);
    cout << "sorted array is : " ;
    for(int i=0;i<n;i++){
        cout << " " << arr[i];
    }
    return 0;
}