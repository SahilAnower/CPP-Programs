#include <iostream>
#include <vector>
using namespace std;
void sum(vector<int> &v){
  int sum=0;
  for(int i=0;i<v.size();i++){
    sum+=v[i];
  }
  cout<< sum << endl;
}

void display(vector<int> &v){
  for(int i=0;i<v.size();i++){
    cout<< v[i] << endl;
  }
}

int main(){
  vector<int> myVec;
  int element;
  for(int i=0;i<5;i++){
    cout << "Enter element to add to vector";
    cin >> element;
    myVec.push_back(element);
  }
  sum(myVec);
  vector<int>::iterator it=myVec.begin();
  myVec.insert(it, 200);
  display(myVec);
  myVec.erase(it,it+2);
  display(myVec);

  // vector<int>::reverse_iterator rit=myVec.rbegin();
  // cout<< "Last element" << *(rit) << endl;
  // for(rit=myVec.rbegin();rit!=myVec.rend();rit++){
  //   cout<< *rit <<endl;
  // }
  return 0;
}
