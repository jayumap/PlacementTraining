#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    char maxChar = '\0';
    int maxCount = 0;
    for(char ch = 'A'; ch<='Z'; ch++){
        int count = 0;
        for(char c:str){
            if(c==ch){
                count++;
            }
        }
        if(count>maxCount){
            maxChar = ch;
            maxCount = count;
        }
    }
    cout<<maxChar<<endl;
    cout<<maxCount<<endl;
    return 0;
}