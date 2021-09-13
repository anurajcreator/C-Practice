#include<iostream>
using namespace std;

int function(int n, int pos){
    /* n = 5, 0101 pos = 1 = 0001
        1<<pos = 0010 , now 0101 or 0010 = 0111 bit set at pos 1 */
    return (n | (1<<pos));     
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
