// simple fail-pass program of class exam
#include <iostream>
using namespace std;

int main(){
              int student, pass, fail;
              int yrs = 2020;
              string course;

              cout<<"Welcome to qualification score game"<<endl;
              cout<<"Enter the total number of the student";
              cin>>student;

              cout<<"Enter the marks of the student who score good in exam";
              cin>>pass;

              cout<<"Enter the number of student who score bad in exam";
              cin>>fail;

              cout<<"enter the name of couse";
              cin>>course;

              cout<<"Total number of "<<student<<"who pass this year in"<<course;
              cout<<"is only"<<student - fail;
              cout<<"and rest of the student is fail in"<<course;
              cout<<"with low score and the number of student is "<<student-pass;

              return 0;
}

// simple banking or company program
#include <iostream>
using namespace std;

int main(){
              int balance = 10000;
              int loan = 500;
              int bonas = 1000;

              cout<<"Balance :"<<balance<<endl;
              cout<<"Loan :"<< loan<<endl;
              cout<<"Bonas :"<<bonas<<endl;

             

              cout<<"If you work hard you wil get :"<<bonas<< "Every year"<<endl;
              cout<<"and that wil be :"<< balance + bonas;

              cout<<"If you work less you will reduce :"<<loan<< "Every year"<<endl;
              cout<<"and that wil be :"<< balance - loan;

              return 0;
}

// Introduction of lost fortune
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
              const int GOLD_PIECES = 900;
              int adventures, killed, survivors;
              string leader;

              // get the informations
              cout<<"welcome to lost forturn \n\n";
              cout<<"Please enter the following for your personlized adventure\n";

              cout<<"Enter a number";
              cin>>adventures;

              cout<<"Enter a number smaller than the first:";
              cin>>killed;

              survivors = adventures - killed;

              cout<<"Enter your last name";
              cin>>leader;

              cout<<"\n A brave group of "<<adventures<<"set out a quest";
              cout<<"-- in search of the lost treasure of the Ancient Awarves";
              cout<<"The groupo was led by that legendary roiugh "<<leader<<".\n";
              cout<<"Along the way, a band of mudering orge AMbused the part.";
              cout<<"and the orges were defeated. but ata cost";
              cout<<"Of the adventures "<<killed<<"were vanquised";
              cout<<"leaving just"<<survivors<<"in the group.\n";
              cout<<"\n The party was about to give up all hope";
              cout << "But while laying the deceased to rest, ";
              cout << "they stumbled upon the buried fortune. ";
              cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
              cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
              cout << " pieces to keep things fair of course.\n";


              return 0;
}
