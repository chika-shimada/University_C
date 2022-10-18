#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int z;
    int w;
    //int x, y, z, w;でも可
    double a;
    double b;
    double c;
    //double a, b, c;でも可,小数点以下も計算できる

    x = 9;
    y = 10;
    z = 11;
    w = 12;

    ++x; //x = x + 1;　++xが計算式中にあるとき、代入後のｘの値 = ++xである
    --y; //y = y - 1;　--yが計算式中にあるとき、代入後のyの値 = --yである
    z++; //x = x + 1;　z++が計算式中にあるとき、代入前のｘの値 = z++である
    w--; //y = y - 1;　w--が計算式中にあるとき、代入前のwの値 = w--である
    printf("%d %d %d %d\n", x, y, z, w);

    x = y = 20;
    z = ++x; //x + 1　をzに代入
    w = y++; //y をｗに代入後、yに１を足す
    printf("%d %d %d %d\n", x, y, z, w);

    x = sizeof(int);
    y = sizeof(char);
    z = sizeof(long);
    w = sizeof(double);
    printf("%d %d %d %d\n", x, y, z, w);

    x = y = z = w = 10;
    x += 3; // x = x + 3;
    y -= 3; // y = y - 3;
    z *= 3; // z = z * 3;
    w %= 3; // w = w % 3;
    printf("%d %d %d %d\n", x, y, z, w);

    x = 5;
    y = 3;
    a = x / y;
    b = (double)x / y;
    c = x / (double)y;
    printf("%f %f %f\n", a, b, c);

    z = 10; /* 2 進数表記では 1010 */
    w = 3; /* 2 進数表記では 0011 */
    x = z & w; /* ビット毎の and */
    y = z | w; /* ビット毎の or */
    printf("%d %d\n", x, y);
    x = z >> 1;
    y = w << 2;
    printf("%d %d\n", x, y);

    x = 2; y = 3; z = x == y ? 10 : 20;
    /* z = ((x == y) ? 10 : 20) と等価な式 */
    printf("%d\n", z);

    return 0;

//　[//]記号の消し方
//　command と /　で消える
//　command と z　で元に戻す
//
//　[//]記号の付け方
//　コメントアウトしたい行を選択
//　command と /　でつく

}