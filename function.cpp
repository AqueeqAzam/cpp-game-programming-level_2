// fundamental of function
# include <iostream>
# include <string>
using namespace std;

void instructions();
# include <iostream>

using namespace std;

 int main(){
              instructions();
              return 0;
 }

 void instructions(){
              cout<<"Welcome to fun";
              cout<<"here know the play the game";
 };

// basic question-answer program
# include <iostream>
# include <string>
using namespace std;

 char askYesNo1();
 char askYesNo2(string questions);
  
int main(){
              char answer1= askYesNo1();
              cout<< "Thsnks for answering : "<< answer1;

              char answer2 = askYesNo2("Do you want to save your game");
              cout<<"Thsnks for answering : "<<answer2<<"\n";
              return 0;
}

char askYesNo1(){
               char response1;
              do{
              cout<<"Enter yes for y or no for n";
              cin>>response1;
              } while ( response1 != 'y' && response1 != 'n');
              return response1;
}

char askYesNo2(string questions){
              char response2;
              do{
                            cout<< questions << "(y/n)";
                            cin>>response2;
              } while ( response2 != 'y' && response2 != 'n');
              return response2;
};

// introduction to mad lib
string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main(){
               cout<<"Welcome to mad lib game \n";
               cout<<"Answer the following question to help create a new story";
               string name = askText(" Please enter a name");
               string noun = askText("Plese enter a pular noun");
               int number = askNumber("Please enter a number");
               string bodyPart = ("Please enter a body part");
               string verb = askText("please enter a verb");

               tellStory(name, noun, number, bodyPart, verb);
               return 0;
}

string askText(string prompt){
              string text;
              cout<<prompt;
              cin>>text;
              return text;
}

int askNumber(string prompt){
              int num;
              cout<<prompt;
              cin>>num;
              return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb){
              cout<<"\n Here's your story: \n";
              cout<<"The fomous explore";
              cout<<name;
              cout<<"had nearly give up";
              cout<<"the lost city of";
              cout<<noun;
              cout<<"When one day";
              cout<<noun;
              cout<<"Found the exporer";
              cout<<"surrounded by";
              cout<<number;
              cout<<" "<<noun;
              cout<<" , a tear come to";
              cout<<name;
              cout<<" , a tear came to";
              cout<<bodyPart<<".\n";

};

