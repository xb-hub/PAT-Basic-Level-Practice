#include <iostream>
using namespace std;

int main() {
    int c1, c2, temp;
    cin >> c1 >> c2;
    // if (((c2 - c1) % 100) < 50)
    //     temp = (c2 - c1) / 100;
    // else
    //     temp = (c2 - c1) / 100 + 1;
    //四舍五入简易处理
    temp = ((c2 - c1) + 50) / 100;
    int hour = temp / 3600;
    temp %= 3600;
    int minute = temp / 60;
    temp %= 60;
    int second = temp;
    printf("%02d:%02d:%02d", hour, minute, second);
}