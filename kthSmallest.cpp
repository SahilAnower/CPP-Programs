#include <iostream>
using namespace std;

int swapp(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int partition(int *arr,int low,int high){
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swapp(arr[i],arr[j]);
        }
    }
    swapp(arr[i+1],arr[high]);
    return (i+1);
}

int quickSelect(int* arr,int low,int high,int k){
    int pi;
    pi=partition(arr,low,high);
    if(k==(pi+1)){
        return arr[pi];
    }else if((pi+1)>k){
        quickSelect(arr,low,pi-1,k);
    }else{
        quickSelect(arr,pi+1,high,k);
    }
}

int main(){
    int n,k;
    cout << "Input the size of the array!" << endl;
    cin >> n;
    int* arr=new int[n];
    cout << "Enter the values of the array!" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the value for k: " << endl;
    cin >> k;

    int val=quickSelect(arr,0,n-1,k);
    cout << "The value of " << k << "th smallest element is: " << val << endl;

    // vector<int> myVector(arr,arr+n-1);
    // sort(myVector.begin(),myVector.end());
    // vector<int>::iterator it;
    // int count=1;
    // for(it=myVector.begin();it!=myVector.end();it++){
    //     if(count==k){
    //         cout << "The number is: " << *(it) << endl;
    //         break; 
    //     }
    //     count++;
    // }
    return 0;
}