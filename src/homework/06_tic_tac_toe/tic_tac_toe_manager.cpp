//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(unique_ptr<TicTacToe>&)
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe>;
    TicTacToeManager::update_winner_count(unique_ptr<TicTacToe>->get_winner());
    games.push_back(move(make_unique<TicTacToe>));
}

void TicTacToeManager::get_winner_totals(int& x, int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_wins++;
    }
    else if(winner == "O")
    {
        o_wins++;
    }
    else 
    {
        ties++;
    }
}

ostream& operator<<(ostream& out, const TicTacToeManager& manager)
{
    out<< "\n--------------------\n";
    out<< "\nSummary Of All Games\n";
    out<< "\n--------------------\n\n";
    
    for(auto game: manager.games)
    {
        out<<game<<"\n";
    }

    out<<"Total X Wins: " << manager.x_wins << "\n";
    out<<"Total O Wins: " << manager.o_wins << "\n";
    out<<"Total Ties: " << manager.ties << "\n\n";

    return out;

}