#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n;
    
    cin>>n;

    for(int i = n; i>0 ; i--){
        for(int j = i; j>0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}