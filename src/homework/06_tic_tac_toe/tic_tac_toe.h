//h
#include <string>
#include <vector>

using std::string; using std::vector; using std::ostream; using std::istream;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int postition);
    string get_player() const;
    string get_winner();

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player; //class member variable
    vector<string> pegs = vector<string>(9, " "); //initialize to 9 spaces
    string winner;

friend ostream& operator<<(ostream& out, const TicTacToe& game);
friend istream& operator>>(istream& in, TicTacToe& game);
};

#endif