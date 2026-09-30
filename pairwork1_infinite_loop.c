// ペアワーク①: このコードを動かして、なぜ無限ループになるか2人で議論しよう
// ヒント: unsigned int は 0 未満になれない

#include <stdio.h>

int main(void) {
    unsigned int i;
    for (i = 10; i >= 1; i--) {
        printf("%u\n", i);
    }
}
