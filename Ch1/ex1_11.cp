//  Created by frankzhougq on 2016/11/6.

#include <iostream>
using namespace std;

int main(){
    
    int m,n,i;
    
    cout<<"please enter two numbers:"<<endl;
    cin>>m>>n;
    
    if(m==n){
        cout<<"two numbers are the same :"<<m<<endl;
    }
    else if(m>n){
        for(i=n;i<=m;i++){
            cout<<i<<endl;
        }
    }
    else{
        for(i=m;i<=n;i++){
            cout<<i<<endl;
        }
    }
    
    return 0;
}
