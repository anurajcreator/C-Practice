#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n;
    
    cin>>n;

    // My Original Code
    // for(int i = 1; i<= n ; i++){
    //     for(int j = 1; j<= n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(int k = 1; k<= i; k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Updated

    for(int i = 1; i<= n ; i++){
        for(int j = 1; j<= n; j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }


    return 0;
}