#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ofstream salida("Peorcaso");
  int ndatos;
  cin >> ndatos;
  for (int i = ndatos; i > 0; i--) {
    salida << i << " ";
  }
  salida << endl;
}
