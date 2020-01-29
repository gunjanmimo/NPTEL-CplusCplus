#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b;
}
void subtract(int a, int b) {
    cout << a - b;
}
void multiply(int a, int b) {
    cout << a * b;
}
void caller(int ch, int a, int b) {

      if(ch==0){
          return add(a,b);
      }
      else if(ch==1)
      {
           return subtract(a,b);
      }
      else
      {
          return multiply(a,b);
      }     
}
int main() {
    int ch, a, b;
    cin >> ch >> a >> b;
    caller(ch, a, b);
    return 0;
}