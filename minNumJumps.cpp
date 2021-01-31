#include <iostream>
using namespace std;

int dpJump(int* arr,int n){
    
}

int minNumJumps(int* arr,int n){
    int count=0;
    int i=0;
    int index=arr[0];
    while((i+index)<(n-1)){
        i+=index;
        index=arr[i];
        count++;
    }
    return (count+1);
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
    int count=0;
    for(int i=0;i<n;i++){
        if(arr1[i]==0){
            count++;
        }
    }
    if(count>0){

    }else{
        count=minNumJumps(arr1,n);
        cout << "The min no of count is: " << count;
    }
    return 0;
}