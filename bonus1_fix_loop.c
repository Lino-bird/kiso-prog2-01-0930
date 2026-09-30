// 発展課題①（早く終わった人向け）
// 下のコードは無限ループになる。正しく10から0まで数え上げるように修正せよ。

#include <stdio.h>

int main(void) {
    // 0以上の整数を扱う変数
    unsigned int i;

    // 10から1ずつ減らしていく
    for (i = 10; ; i--) {
        // 現在のiの値を表示
        printf("%u\n", i);

        // unsigned intは負の数を扱えないため、
        // 0になった時点でループを終了する
        if (i == 0) {
            break;
        }
    }

    return 0;
}
