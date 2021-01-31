#include <iostream>
using namespace std;

void swapp(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int* reverse(int* arr,int size){
    for(int i=0;i<(size/2);i++){
        swapp(arr[i],arr[size-i-1]);
    }
    return arr;
}

void display(int* arr,int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int n;
    cout << "Input the size of the array which you want to reverse!" << endl;
    cin >> n;
    int* arr=new int[n];
    cout << "Enter the values of the array!" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    display(arr,n);
    arr=reverse(arr, n);
    cout << "The Reversed array is :" << endl;
    display(arr,n);
    return 0;
}