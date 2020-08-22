#include <algorithm>
#include <iostream>
using namespace std;

int fact(int num);

int main(){
    //cout<<"#################<<"<<endl;
    int num;
    cout<<"Enter factorial: "<<flush;
    cin>>num;
    //fact();
    cout<<num<<"!: "<<fact(num)<<endl;
    return 0;
}

int fact(int num){
    if (num==0)
        return 1;
    else
        return num * fact(num-1);
}