#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n;

    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n-i; k++ ){
            cout << "  ";
        }

        for(int j = 1; j<= n; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}