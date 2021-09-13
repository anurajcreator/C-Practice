#include<iostream>
using namespace std;

int function(int n, int pos){
    /* n = 5 , 0101 and pos = 2 , 0010
     1<<pos = 0100 , check = n & 1 << pos = 0100
     if check != 0 then the bit at pos is 1 else it is 0  */
    return ((n & (1<<pos))!=0);     
}

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n,i;

    cin >> n >> i;

    cout << function(n, i);
    
    return 0;
}

