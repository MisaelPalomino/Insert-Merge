#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }

  int n = atoi(argv[1]);

  for (int i = 0; i < n; i++) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
