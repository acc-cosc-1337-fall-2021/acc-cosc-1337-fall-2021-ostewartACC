//cpp
#include "tic_tac_toe_data.h"

using std::ifstream; using std::ofstream; using std::cout;

void TicTacToeData::save_games(const vector<unique_ptr<TicTacToe>>& games)
{
 
    ofstream out_file;
    cout<<"Open file...\n";
    out_file.open("games.txt");
    cout<<"Write to file...\n";

    for (auto& game : games)
    {
        vector<string> pegs = game->get_pegs();
        for (auto ch : pegs)
        {
            out_file<<ch;       
        }

        out_file<<game->get_winner();

        out_file<<"\n";       
    }

    cout<<"Close file...\n";
    out_file.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{

    vector<unique_ptr<TicTacToe>> games;
    ifstream in_file;

    cout<<"Open file...\n";
    in_file.open("games.txt");

    string line;

    cout<<"Read file...\n";
    while(getline(in_file, line))
    {
        vector<string> p;

        int s = line.size();
        for(int i = 0; i < s-1; i++)
        {
            string pos = string(1, line[i]);
            p.push_back(pos);
        }

        string w = string(1,line[s-1]);

        unique_ptr<TicTacToe> game;

        if (p.size() == 9)
        {
            game = make_unique<TicTacToe3>(p, w);
        }
        else if(p.size() == 16)
        {
            game = make_unique<TicTacToe4>(p, w);
        }
        else
        {
            cout << "Size Error - Please Check\n";
        }

        games.push_back(move(game));
    }

    cout<<"Close file...\n";
    in_file.close();  

    return games;
}