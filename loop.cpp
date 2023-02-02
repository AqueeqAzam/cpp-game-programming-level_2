// square board drawing program
#include <iostream>
#include <string>
using namespace std;

int main(){
   const int row = 4;
   const int column = 4;
   char matrix[row][column] = {
    {'4', '6', '3', '9'},
    {'1', '4', '5', '1'},
    {'2', '8', '2', '3'},
    {'1', '7', '5', '0'}};
    cout<<"The board is :"<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j<column; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}

// tic-tac-toe board with one moves
#include <iostream>
#include <string>
using namespace std;

int main(){
    const int ROWS = 3;
    const int COLUMN = 3;
    char board[ROWS][COLUMN] = {
        {'0', 'X', '0'},
        {' ', 'X', 'X'},
        {'X', '0', '0'}};

        cout<<"Here's the tic-tac-toe board: \n";
        for(int i = 0; i< ROWS; i++){
            for(int j =0; j<COLUMN; j++){
                cout<<board[i][j];
            }
            cout<<endl;
        }
        cout<<"\n 'X' moves to the empty location.\n\n";
        board[1][0];
        cout<<"Now the tic-tac-toe board is :\n";
        for(int i = 0; i<ROWS; i++){
            for(int j = 0; j<COLUMN; j++){
                    cout<<board[i][j];
            }
            cout<<endl;
        }
        cout<<"\n 'X' wins!";

        return 0;
}

// Introduction to jumble word
#include <iostream>
#include <string>
using namespace std;

int main(){
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"well", "Do you feel you're banging your head against somethings?"},
        {"glasses", "These might help you see the answer"},
        {"labored", "Going slowly is it ?"},
        {"persistent", "Keep at it."},
        {"jumble", "It's what the game is all about"}
    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];

    //jumbling the word
    string jumble = theWord;
    int length = jumble.size();
    for(int i = 0; i<length; ++i){
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index1];
        jumble[index2] = temp;    
        }
    
    // Welcome to player
        cout<<"\t\t\t Welcome to jumbkw word!\n\n";
        cout<<"Unscramed the letter to make the jumbe word";
        cout<<"Enter 'h' for hint";
        cout<<"Enter 'q' for quit";
        cout<<" The jumble is :"<<jumble;
        string guess;
        cout<<"\n\n Your guess";
        cin>>guess;
    
    // Entering the game loop
    while((guess != theWord) && (guess != "h")){
        if(guess == "h"){
            cout<<theHint;
        }
        else{
            cout<<"Sorry, that's not it";
        }
        cout<<"\n\n Your guess";
        cin>>guess;
    }
    while((guess != theWord) && (guess != "q")){
        if(guess == "q"){
            cout<<theHint;
        }
        else{
            cout<<"Sorry, that's not it";
        }
        cout<<"\n\n Your guess";
        cin>>guess;
    }

    // Saying good buy
    if(guess == theWord){
        cout<<"\n That's it! You guessed it!";
    }
    cout<<"\n Thanks for playing .\n";
    return 0;
}
