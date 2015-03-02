#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  while(n > 0) {
    double x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double px, py ,r;

    double a1, a2, b1,b2,c1,c2;
    
    a1 = 2*(x2-x1);
    a2 = 2*(x3-x1);
    b1 = 2*(y2-y1);
    b2 = 2*(y3-y1);
    c1 = x1*x1 - x2*x2 + y1*y1 - y2*y2;
    c2 = x1*x1 - x3*x3 + y1*y1 - y3*y3;
    px = (b1*c2-b2*c1)/(a1*b2-a2*b1);
    py = (c1*a2-c2*a1)/(a1*b2-a2*b1);
    r = sqrt((px-x1)*(px-x1)+(py-y1)*(py-y1));
    
    cout << fixed << setprecision(3) << px << " " << py << " " << r << endl;
    n--;
  }
  
  return 0;
}
