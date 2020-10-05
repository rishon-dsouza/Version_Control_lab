#include <iostream>

using namespace std;
int main(){
  double x,y=0;
  double av=0;
  cout << "Enter 2 numbers"<< endl;
  cin >> x>>y;
  cout <<"your numbers are " <<x <<" and " <<y <<endl;
  cout <<"Sum: " <<x+y <<endl;
  cout <<"Difference: " <<x-y <<endl;
  cout <<"Product: " <<x*y <<endl;
  cout <<"Distance: "<<abs(x-y)<<endl;
  av=(x+y)/2.0;
  cout <<"Average: "<<av;
}
