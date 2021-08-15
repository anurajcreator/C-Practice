#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n;

    cin >> n;
    
    for(int i = 1; i<=n; i++){
        for(int j = n; j>= 1 ;j--){
            if(j > i ){
                cout << "  ";
            }
            else{
                cout <<"* ";
            }
        }
        for(int k = 2; k <= i; k++){
            cout <<"* ";
        }
        cout << endl;
    }
    for(int i = n; i>=1; i--){
        for(int j = n; j>= 1 ;j--){
            if(j > i ){
                cout << "  ";
            }
            else{
                cout <<"* ";
            }
        }
        for(int k = 2; k <= i; k++){
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}