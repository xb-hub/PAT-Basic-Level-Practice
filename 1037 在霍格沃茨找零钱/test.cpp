#include <iostream>
using namespace std;

int main() {
    int g, s, k;
    int Galleon, Sickle, Knut;
    int rg, rs, rk;
    scanf("%d.%d.%d", &g, &s, &k);
    scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
    if (Galleon < g || (Galleon == g && Sickle < s) ||
        (Galleon == g && Sickle == s && Knut < k)) {
        swap(Galleon, g);
        swap(Sickle, s);
        swap(Knut, k);
        cout << "-";
    }
    if (Knut >= k)
        rk = Knut - k;
    else {
        rk = Knut + 29 - k;
        Sickle--;
    }
    if (Sickle >= s)
        rs = Sickle - s;
    else {
        rs = Sickle + 17 - s;
        Galleon--;
    }
    rg = Galleon - g;
    cout << rg << "." << rs << "." << rk;
}