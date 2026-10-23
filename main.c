#include <stdio.h>

int main() {
    long long k;
    scanf("%lld", &k);

    long long tong = 0;

    if (k <= 50) {
        tong = k * 1678;
    } else if (k <= 100) {
        tong = 83900 + (k - 50) * 1734;
    } else if (k <= 200) {
        tong = 170600 + (k - 100) * 2014;
    }else if (k <= 300)
        tong = 372000 + (k - 200) * 2536;}
      return 0;
}
  