//h
#include <string>
#include <vector>
#include <memory>

using std::string; using std::vector; using std::ostream; using std::istream;
using std::unique_ptr; using std::make_unique;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(){}
    TicTacToe(int s) : pegs(s*s, " "){}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int postition);
    string get_player() const;
    string get_winner();

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();    

private:
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player; //class member variable
    string winner;

friend ostream& operator<<(ostream& out, unique_ptr<TicTacToe(s)> game);
friend istream& operator>>(istream& in, unique_ptr<TicTacToe(s)> game);
};

#endif