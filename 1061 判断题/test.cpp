#include <iostream>
#define MaxSize 100
using namespace std;

int main() {
    int n, m, score[MaxSize], answer[MaxSize], stuanswer[MaxSize][MaxSize];
    cin >> n >> m;
    for (int i = 0; i < m; i++) 
        cin >> score[i];
    for (int i = 0; i < m; i++) 
        cin >> answer[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) 
            cin >> stuanswer[i][j];
    for (int i = 0; i < n; i++) {
        int sco = 0;
        for (int j = 0; j < m; j++) 
            if (stuanswer[i][j] == answer[j]) 
                sco += score[j];
        cout << sco << endl;
    }
}