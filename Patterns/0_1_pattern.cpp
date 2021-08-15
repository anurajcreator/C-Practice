#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n;

    cin >> n;

    // MY LOGIC
    // int count = 1;
    
    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<= i; j++){
    //         if(count % 2 == 0 ){
    //             cout << 0 << " ";
    //         }
    //         else{
    //             cout << 1 << " ";
    //         }
    //         count++;
    //     }
    //     cout << endl;
    // }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= i; j++){
            if(((i+j)%2) == 0 ){
                cout << 1 << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }



    return 0;
}