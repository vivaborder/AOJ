#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> stk;
  int t;
  
  while(cin >> t) {
    if(t == 0) {
      cout << stk.top() << endl;
      stk.pop();
    }
    else stk.push(t);
  }

  return 0;
}
