#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdlib.h>
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
    
    static int pars = par;
    /*if (par == 0){
        return pars -=1;
    }*/
    if (par<0 && par!=pars){
        for (i=1;i >= par;i--)
            cout<<"*";
        cout<<par<<endl;
        par-=1;
        //if (abs(par-2)==pars)
            //return par = 100;
        return func(par);
    }
    else if (par!=100){
        for (i=0;i<par;i++)
            cout<<"*";
        cout<<par<<endl;
        par-=1;
        return func(par);
    }
    return 0;
}