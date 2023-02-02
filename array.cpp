// Introducing the Tic-Tac-Toe Board Program

int main(){
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = {{'0', 'X', '0'},
                                   {' ', 'X', 'X'},
                                   {'X', '0', '0'}};
    cout<<"There is tic tac toe board"<<endl;
    for(int i =0; i < ROWS; ++i){
        for(int j = 0; j < COLUMNS; ++j){
            cout<<board[i][j];
        }
        cout<<endl;
    }
    cout<<"MOves to empty location : "<<endl;
    board[1][0] = 'X';
    for(int i =0; i < ROWS; ++i){
        for(int j = 0; j < COLUMNS; ++j){
            cout<<board[i][j];
        }
        cout<<endl;
    }
    cout<<"\n 'X wins!";
    return 0;
}     // Your task is to program a chess board

// understand to basic of killing program of commander
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

    // creating array
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];

    // indexing array
    int numItem = 0;
    inventory[numItem++] = "sword";
    inventory[numItem++] = "knife";
    inventory[numItem++] = "sword";
    
    // accessing array object
    cout<<"your items:\n";
    for(int i = 0; i < numItem; ++i){
        cout<<inventory[i]<<endl;
    }
    cout<<"You trade your sword for battle axe.";

    // charing array object
    inventory[0] = "battle.axe";
    cout<<"Your items :"<<endl;
    for(int i = 0; i<numItem; ++i){
        cout<<inventory[i]<<endl;
    }

    // accesing particular word
    cout<<"The item name "<< inventory[0] << "has";

    // claculating size of particular word
    cout<<inventory[0].size() << "letter in it"<<endl;

    cout<<"You find a healing position :";
    if(numItem < MAX_ITEMS){

        // add item in array
        inventory[numItem++] = "Gun";
    }
    else{
        cout<<"You have too many items ans can't carry toughter.";
    }
    cout<<"Your new items :"<<endl;
    for(int i = 0; i < numItem; i++){
        cout<<inventory[i]<<endl;
    }
    return 0;
}
