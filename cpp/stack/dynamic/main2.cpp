#include <iostream>
#include "stack.cpp"
// #include <stack>
using namespace std;
bool isPrimary(int no);
int main(){
  stack stack1, stack2;
  for (int i = 0; i < 5; i++){
    cout << "Enter what do you want to enter: ";
    int in;
    cin >> in;
    if (isPrimary(in))
      stack1.push(in);
    else
      stack2.push(in);
  }
    stack1.PrintList();
    cout << "====" << endl;
    stack2.PrintList();
}
bool isPrimary(int no)
{
  if (no == 1)
    return false;
  if (no == 2)
    return true;
  for (int i = 2; i < no; i++)
    if (no % i==0)
      return false;
  return true;
}