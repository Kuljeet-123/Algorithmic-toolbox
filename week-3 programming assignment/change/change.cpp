#include <iostream>

int get_change(int m) {
  //write your code here
  int coins[] = {10, 5, 1};
    int n = 0;
    for (int i = 0; m > 0; i++) {
        n+= m / coins[i];
        m %= coins[i];
    }
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}