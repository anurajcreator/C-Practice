#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n;

    cin >> n;

    int len = 2*n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= len; j++){
            if(j <= i){
                cout << "* ";
            }
            else if(j <= len-i){
                cout << "  ";
            }
            else{
                cout <<"* ";
            }
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= len; j++){
            if(j <= i){
                cout << "* ";
            }
            else if(j <= len-i){
                cout << "  ";
            }
            else{
                cout <<"* ";
            }
        }
        cout << endl;
    }

    return 0;
}