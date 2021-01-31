#include <iostream>
using namespace std;

int swapp(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void ssort(int* arr,int n){
    int high=n-1;
    int low=0;
    int mid=low;
    while(mid<=high){
        switch (arr[mid])
        {
        case 0:
            swapp(arr[low],arr[mid]);
            low++;
            mid++;
            /* code */
            break;
        case 1:
            mid++;
            break;
        case 2:
            swapp(arr[mid],arr[high]);
            high--;
            break;
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