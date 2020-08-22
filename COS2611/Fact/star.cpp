#include <iostream>
#include <algorithm>
using namespace std;

int func(int par);

int main(){
    int par;
    cout<<"Enter the number of stars: "<<flush;
    cin>>par;
    func(par);
}

int func(int par){
    int i;
    if (par == 0)
        return 1;
    else{
        for (i=0,i<par,i++)
            cout<<"*";
        cout<<"\n"<<endl;
        par--;
        return func(par);
    }
}