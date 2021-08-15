#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int row, col;
    
    cin>>row>>col;

    for(int i = 0; i< row; i++){
        for(int j = 0; j< col; j++){
            if(i==0 || i==row-1 || j==0 || j==col-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}