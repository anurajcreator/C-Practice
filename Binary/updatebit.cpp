#include<iostream>
using namespace std;

int function(int n, int pos, int value){
    /* n = 5 , 0101 and pos = 2 , 0010
     1<<pos = 0100 , check = n & 1 << pos = 0100
     if check != 0 then the bit at pos is 1 else it is 0  */
    int mask = ~(1<<pos);
    n = n & mask;
    
    if ((value != 0) and (value != 1)){
        cout << "Value Shoud be 0 or 1";
    }

    return (n | (value<<pos));     
}

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n,i,v;

    cin >> n >> i >> v;

    cout << function(n, i, v);
    
    return 0;
}

