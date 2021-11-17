//cpp
#include "tic_tac_toe_data.h"

using std::ifstream; using std::ofstream; using std::cout;

void TicTacToeData::save_games(const vector<unique_ptr<TicTacToe>>& games)
{
// Open file for writing
// For each vector of TicTacToe
// For each char in string
// Write char to file
// end char in string loop
// Write get winner of game to file
// Write a new line
// end vector of TicTacToe loop    
    ofstream games_file;
    cout<<"Open games_file...\n";
    games_file.open("games.txt");
    cout<<"Write to file...\n";

    for (auto& game : games)
    {
        vector<string> pegs = game->get_pegs();
        for (auto ch : pegs)
        {
            games_file<<ch;       
        }

        games_file<<game->get_winner();

        games_file<<"\n";       
    }

    games_file.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
// Create vector unique ptr of TicTacToe boards
// Open File
// Create a string line
// while getline(read_file, line)// get a line from file
// Create vector<string> pegs 
//     for each ch in line - 1 (read only first 9 or 16 characters)

// Create a string with ch. Example string(1, ch)
// Add the string to vector of string

// Create a string to get the winner(last item in the vector of string)
// Create unique ptr of TicTacToe board
// if vector of string size 9
//       create board of TicTacToe3 using make_unique with vector of pegs and winner as parameter
// else if size 16
//       create board of TicTacToe4 using make_unique with vector of pegs and winner as parameter

// add the board to the boards vector

// close the file

// return the boards 

    return get_games();
}