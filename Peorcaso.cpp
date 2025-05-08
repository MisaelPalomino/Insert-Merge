#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }

  int ndatos = atoi(argv[1]);

  for (int i = ndatos; i > 0; i--) {
    cout << i << " ";
  }
  cout << endl;
}
