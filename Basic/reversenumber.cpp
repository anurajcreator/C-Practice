#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n;

    cin >> n;

    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n / 10;
    }

    cout<<reverse<<endl;
    
    return 0;
}