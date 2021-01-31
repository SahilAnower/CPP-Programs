#include <iostream>
#include <list>
using namespace std;

int getMiddle(list<int> &li){
  list<int>::iterator it=li.begin();
  int count=1;
  for(it=li.begin();count<=((li.size())/2)+1;it++){
    if(count==((li.size())/2)+1){
      return *(it);
    }
    count++;
  }
}

int main(){
  list<int> list1;
  int exit;
  while(true){
    cout << "Enter the value for list, enter -1 if all values for lists are given" << endl;
    cin >> exit;
    if(exit==-1){
      break;
    }
    list1.push_back(exit);
  }
  cout << " The middle element of your list is: " << getMiddle(list1) << endl;
}
