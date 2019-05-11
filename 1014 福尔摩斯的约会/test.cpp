#include <iostream>
#include <cctype>
#include <vector>
using namespace std;

int main() {
    int i = 0;
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    vector<char> v;
    for (; i < min(s1.length(), s2.length()); i++) {
        if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <='G') {
            v.push_back(s1[i]);
            break;
        }
    }
    i += 1;
    for (; i < min(s1.length(), s2.length()); i++) {
        if (s1[i] == s2[i] && ((s1[i] >= 'A' && s1[i] <= 'N') || isdigit(s1[i]))) {
            v.push_back(s1[i]);
            break;
        }
    }
    // for(vector<char>::iterator iter = v.begin();iter<v.end();iter++)
    //     cout << *iter << " ";
    switch (v[0]-'A')
    {
    case 0: cout << "MON" << " ";    break;
    case 1: cout << "TUE" << " ";    break;
    case 2: cout << "WED" << " ";    break;
    case 3: cout << "THU" << " ";    break;
    case 4: cout << "FRI" << " ";    break;
    case 5: cout << "SAT" << " ";    break;
    case 6: cout << "SUN" << " ";    break;
    default:    break;
    }
    if(v[1] >= '0' && v[1] <= '9'){
        printf("%02d:",v[1]-'0');
    }
    else {
        switch (v[1])
        {
            case 'A': cout << "10" << ":";    break;
            case 'B': cout << "11" << ":";    break;
            case 'C': cout << "12" << ":";    break;
            case 'D': cout << "13" << ":";    break;
            case 'E': cout << "14" << ":";    break;
            case 'F': cout << "15" << ":";    break;
            case 'G': cout << "16" << ":";    break;
            case 'H': cout << "17" << ":";    break;
            case 'I': cout << "18" << ":";    break;
            case 'J': cout << "19" << ":";    break;
            case 'K': cout << "20" << ":";    break;
            case 'L': cout << "21" << ":";    break;
            case 'M': cout << "22" << ":";    break;
            case 'N': cout << "23" << ":";    break;
            default:    break;
        }
    }
    for (int i = 0; i < min(s3.length(), s4.length()); i++) {
        if(s3[i] == s4[i] && isalpha(s3[i])){
            printf("%02d",i);
        }
    }
}
