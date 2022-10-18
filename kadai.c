#include <stdio.h>

//10進数を２進数に変換するプログラム（自作）
// int TenToTwo(int n);
// {　 //謎のエラー発生「宣言されていません」→int nで宣言しているのに？
//     int a;
//     int b;
//     int z;
//     a = 0;
//     b = 0;
//     z = 0;

//     While(n > 1)
//     {
//         n = n / 2;
//         z = n % 2;
//         b = b + z * 10 ^ a++;
//     }

//     b = b + 10 ^ a;
//     return b;
// }


int main(void)
{
    int myid;
    int friendid;
    myid = 3;
    friendid = 5;
    unsigned int myclass;
    printf("myid = %d\n", myid);

    myclass = 1 << myid;
    printf("myclass = %u\n", myclass);
    printf("friendid = %d\n", friendid);

    // int x = TenToTwo(myclass);

    myclass = myclass + (1 << friendid);
    printf("updated myclass = %u\n", myclass);

    // int y = TenToTwo(myclass);
}
