#include<iostream>
using namespace std;

int function(int n, int pos){
    /* n = 5 , 0101 and pos = 0 , 0000
     1<<pos = 0001 ,  mask = 1110
     n & mask =  0100  */
    int mask = ~(1<<pos); 
    return (n & mask);     
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

