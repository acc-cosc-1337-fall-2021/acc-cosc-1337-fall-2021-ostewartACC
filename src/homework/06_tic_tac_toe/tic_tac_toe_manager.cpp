//cpp
#include "tic_tac_toe_manager.h"

TicTacToeManager::TicTacToeManager(TicTacToeData& data)
{
    games = data.get_games();
    for(auto& game: games)
    {
        update_winner_count(game->get_winner());
    }
}

TicTacToeManager::~TicTacToeManager()
{
    data.save_games(games);
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(move(game));
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
    out<< "--------------------\n";
    out<< "Summary Of All Games\n";
    out<< "--------------------\n\n";
    
    for(auto& game: manager.games)
    {
        out<<*game<<"\n";
    }

    out<<"Total X Wins: " << manager.x_wins << "\n";
    out<<"Total O Wins: " << manager.o_wins << "\n";
    out<<"Total Ties: " << manager.ties << "\n\n";

    return out;
}