#include <iostream>
#include <algorithm>
using namespace std;

int to_num(int a[], int num) {
    num = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    return num;
}

void to_arr(int num, int a[]) {
    for (int i = 3; i >= 0; i--) {
        a[i] = num % 10;
        num /= 10;
    }
}

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int num,result=-1;
    int Min,Max;
    cin >> num;
    while(result!=6174&&result!=0){
        if(result==-1)
            result=num;
        int number[4];
        to_arr(result,number);
        sort(number,number+4);
        Min = to_num(number,num);
        sort(number,number+4,cmp);
        Max = to_num(number,num);
        result = Max - Min;
        printf("%04d - %04d = %04d\n",Max,Min,result);
    }
}