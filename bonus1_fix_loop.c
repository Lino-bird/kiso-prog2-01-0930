// 発展課題①（早く終わった人向け）
// 下のコードは無限ループになる。正しく10から0まで数え上げるように修正せよ。
#include <stdio.h>

int main(void) {
    unsigned int i;

    for (i = 10; ; i--) {
        printf("%u\n", i);

        if (i == 0) {
            break;
        }
    }
}
