#include <iostream>
#include <vector>
using namespace std;

bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}

int main() {
    int m, n, count = 0, start = 2;
    vector<int> v;
    cin >> m >> n;
    while (count < n) {
        if (isprime(start)) {
            count++;
            if (count >= m) 
                v.push_back(start);
        }
        start++;
    }
    int flag=0;
    for(vector<int>::iterator iter=v.begin();iter!=v.end()-1;iter++){
        cout << *iter;
        flag++;
        if(flag != 10){
            cout << " ";
        }
        else{
            cout << endl;
            flag = 0;
        }
    }
    cout << v.back();
}