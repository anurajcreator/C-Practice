#include<iostream>
#include<math.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDE
        freopen("../input.txt","r", stdin);
        freopen("../output.txt","w",stdout);
    #endif
    
    int n;

    cin >> n;
    
    int temp = n, temp1 = n, power = 0;
    
    while(temp>0){
        power++;
        temp = temp/10;
    }

    int armstrong = 0;
    
    while(n>0){
        int lastdigit = n%10;
        int prev_armstrong = armstrong;
        int number =  pow(lastdigit, power);
        armstrong = prev_armstrong + number;
        n = n/10;
        cout<< prev_armstrong << " + " << pow(lastdigit, power) << " = " << armstrong << endl;
        
    }
    
    cout<<armstrong<< " == "<<temp1<< endl;

    if (temp1 == armstrong){
        cout<<"Armstrong Number"<< endl;
    }
    
    else{
        cout<<"Not Armstrong Number"<< endl;
    }

    
    return 0;
}