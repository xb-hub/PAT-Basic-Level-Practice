#include <iostream>
#include <algorithm>
#include <vector>
#define MaxSize 100000
using namespace std;

struct stu {
    int num, de, cai;
}stus[MaxSize];

bool cmp(stu a,stu b){
    if((a.cai+a.de) == (b.cai+b.de)){
        if(a.de == b.de)
            return a.num < b.num;
        else
            return a.de > b.de;
        
    }
    else
        return (a.cai+a.de) > (b.cai+b.de);
}

int main(){
    int n, l, h;
    vector<stu> grade[4];
    cin >> n >> l >> h;
    for (int i = 0; i < n; i++)
        cin >> stus[i].num >> stus[i].de >> stus[i].cai;
    for (int i = 0; i < n; i++){
        if(stus[i].de >= h && stus[i].cai >= h)
            grade[0].push_back(stus[i]);
        else if(stus[i].de >= h && stus[i].cai < h && stus[i].cai >= l)
            grade[1].push_back(stus[i]);
        else if(stus[i].de < h && stus[i].de >= stus[i].cai && stus[i].cai < h && stus[i].cai >= l)
            grade[2].push_back(stus[i]);
        else if(stus[i].cai > stus[i].de && stus[i].de < h && stus[i].de >= l)
            grade[3].push_back(stus[i]);
    }
    // sort(grade1.begin(),grade1.end(),cmp);
    // sort(grade2.begin(),grade2.end(),cmp);
    // sort(grade3.begin(),grade3.end(),cmp);
    // sort(grade4.begin(),grade4.end(),cmp);
    cout << grade[0].size()+grade[1].size()+grade[2].size()+grade[3].size() << endl;
    for(int i = 0; i < 4; i++){
        sort(grade[i].begin(),grade[i].end(),cmp);
        for(int j = 0; j < grade[i].size(); j++)
        // cout输出超时，使用printf
        // cout << grade[i][j].num << " " << grade[i][j].de << " " << grade[i][j].cai << endl;
        printf("%d %d %d\n",grade[i][j].num ,grade[i][j].de,grade[i][j].cai);
    }
    // for(vector<stu>::iterator iter=grade1.begin();iter!=grade1.end();iter++){
    //     cout << iter->num << " " << iter->de << " " << iter->cai << endl;
    // }
    // for(vector<stu>::iterator iter=grade2.begin();iter!=grade2.end();iter++){
    //     cout << iter->num << " " << iter->de << " " << iter->cai << endl;
    // }
    // for(vector<stu>::iterator iter=grade3.begin();iter!=grade3.end();iter++){
    //     cout << iter->num << " " << iter->de << " " << iter->cai << endl;
    // }
    // for(vector<stu>::iterator iter=grade4.begin();iter!=grade4.end();iter++){
    //     cout << iter->num << " " << iter->de << " " << iter->cai << endl;
    // }
}