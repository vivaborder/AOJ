#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int loop;
  
  cin >> loop;

  for(int i = 0; i < loop; i++) {
    string num1, num2;  
    cin >> num1 >> num2;
    if(num1.length() > 80 || num2.length() > 80) {
      cout << "overflow" << endl;
    }
    else {
      string s = num1.substr();
    }
    
  }
  
  return 0;
}
