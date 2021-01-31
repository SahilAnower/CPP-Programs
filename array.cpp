#include <iostream>
using namespace std;

class MyArray{
    public:
        int max_size;
        int used_size;
        int *ptr;
        MyArray(int m,int u){
            max_size=m;
            used_size=u;
            ptr=new int[max_size];
        }
        void set(){
            cout<< "Enter the array elements!" << endl;
            for(int i=0;i<used_size;i++){
                cout << "Enter the element" << endl;
                cin >> ptr[i];
            }
        }
        void display(){
            for(int i=0;i<used_size;i++){
                cout<< *(ptr+i) << endl;
            }
        }
        void insert(int element,int index){
            // Overflow Situation
            if(used_size+1>max_size){
                cout << "Overflow situation. Array ends. Delete some to insert more!" << endl;
            }
            else{
            int temp;
            for(int i=0;i<=index-1;i++){
                if(i==index-1){
                    temp=*(ptr+i);
                    *(ptr+i)=element;
                }
            }
            int r;
            for(int i=index;i<used_size+1;i++){
                r=*(ptr+i);
                *(ptr+i)=temp;
                temp=r;
                }
            used_size=used_size+1;
            }
        }
        void deleteElement(int position){
            // Underflow Situation
            if(used_size-1==0){
                cout << "Underflow Situation. Array does not contain any element. Insert some to delete again!" << endl;
            }
            else{
                for(int i=0;i<=position-1;i++){
                    if(i==position-1){
                        *(ptr+i)=*(ptr+i+1);
                    }
                }
                for(int i=position;i<used_size-1;i++){
                    *(ptr+i)=*(ptr+i+1);
                }
                used_size=used_size-1;
            }
        }
};

int main(){
    int max,use;
    cout << "Enter the maximum size of the array" << endl;
    cin >> max;
    cout << "Enter the total size which u want to use!" << endl;
    cin >> use;
    MyArray arr(max, use);
    arr.set();
    arr.display();
    int element,index;
    cout<< "Enter the element you want to insert and the position with it !" << endl;
    cin >> element >> index;
    arr.insert(element, index);
    arr.display();
    int pos;
    cout << "Enter the position of element you want to delete!" << endl;
    cin >> pos;
    arr.deleteElement(pos);
    arr.display();
    return 0;
}