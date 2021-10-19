//h
#include <string>
#include <vector>

using std::string; using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int postition);
    string get_player() const;
    void display_board() const;

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player; //class member variable
    vector<string> pegs = vector<string>(9, " "); //initialize to 9 spaces
};

#endif