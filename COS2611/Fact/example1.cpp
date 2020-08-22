#include <iostream>
using namespace std

int main(){
    std::string reply = yes;
    do{
           
        num1=cout<<"Please enter first number: "<<flush;
        num2=cout<<"Please enter second number: "<<flush;
        double num1, num2;
        cin>>num1>>num2;
        if (num1 > num2){
            cout<<"\nFirst number is bigger."<<endl;
        }
        else if (num1 < num2){
            cout<<"\nSecond number is bigger."<<endl;
        }
        else{
            cout<<"\nBoth number are equal."<<endl;
        }
        reply = cout<<"Do you want to play again? (Y/N): "<<flush;
        cin>>reply;
        }while (reply==Y)
        return EXIT_SUCCESS;

}