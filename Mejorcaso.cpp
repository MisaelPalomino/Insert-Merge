#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ofstream salida("Mejorcaso");
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    salida << i << " ";
  }
  salida << endl;
}
