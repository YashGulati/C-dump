#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() { bool flag[26]; memset(flag,0,26);  string str;

    getline(cin,str);
    for(int i=0; str[i] != '\0' ;i++){
        if(str[i] >= 'a' && str[i] <='z')
            flag[ (int)str[i] - 'a' ] = 1;
        if(str[i] >= 'A' && str[i] <='Z')
            flag[ (int)str[i] - 'A' ] = 1;
    }

    for(int i=0;i<=25;i++){
//        cout<<(char)(i+'a')<<flag[i];
        if(flag[i] == 0){ cout<<"not pangram"; return 0; }
    }

    cout<<"pangram";

    return 0;
}
