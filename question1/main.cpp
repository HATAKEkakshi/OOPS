/*Question:Write a program to take the marks of 5 subjects from the user
and to tell him what grade the user recieved */ 

#include <iostream>
#include <typeinfo>
using namespace std ;
int main(){
    int marks;
    float sum=0;
    for(int i=1;i<6;i++){
        cout << "Enter the marks of the 5 Subject :";
        cin >> marks;
        sum=sum+marks;
    }
    float grade=(sum/500)*100;

    if(grade >=90.00){
          cout << "Your Grade is A+";
    }else if (grade >=80.00 && grade < 90.00){
        cout << "Your Grade is A";
    }else if (grade >=70.00 && grade <80.00){
        cout << "Your Grade is B";
    }else if (grade >=60.00 && grade <70.00){
        cout << "Your Grade is C";
    }else if(grade >=50.00 && grade <60.00){
        cout <<"Your Grade is D";
    }
    else{
        cout<<"Your grade is E you are failed ";
    }
}