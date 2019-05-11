#include <iostream>
#include <algorithm>
#include <vector>
#define MaxSize 1000

using namespace std;

struct mooncake {
    double store; //库存量
    double sell;  //总售价
    double price; //单价
};

bool cmp(mooncake a, mooncake b) {
    return a.price > b.price;
}

int main() {
    int kind;
    double needs;
    cin >> kind >> needs;
    vector<mooncake> cake(kind);
    for (int i = 0; i < kind; i++) {
        cin >> cake[i].store;
    }
    for (int i = 0; i < kind; i++) {
        cin >> cake[i].sell;
        cake[i].price = cake[i].sell / cake[i].store;
    }
    sort(cake.begin(), cake.end(), cmp);
    double result = 0;
    for (int i = 0; i < kind; i++) {
        if (cake[i].store < needs) {
            result += cake[i].sell;
            needs -= cake[i].store;
        }
        else {
            result += cake[i].price * needs;
            break;
        }
    }
    printf("%.2lf", result);
    return 0;
}