#include <iostream>
using namespace std;

int* rotate(int *a, int n){
    int i=0;
    int j=n-1;
    int temp,r;
    while(i<n){
        if(j==n-1){
            temp=a[i];
            a[i]=a[j];
            a[j]=0;
            j=0;
            i++;
        }
        r=a[i];
        a[i]=temp;
        temp=r;
        i++;
    }
    return a;
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
    arr1=rotate(arr1,n);
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }
    return 0;
}