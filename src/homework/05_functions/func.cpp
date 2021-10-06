//add include statements
#include "func.h"
//add function code here
double get_gc_content(const string& dna)
{
    double dna_length = 0;
    double gc_count = 0;
    double gc_content = 0;

    dna_length = dna.length();

    for(auto i: dna)
    {
        if (i == 'G' || i == 'C')
        {
            gc_count += 1;
        }
    }

    gc_content = gc_count / dna_length;
    return gc_content;

}

string get_dna_complement(string dna)
{
    string dna_comp;
    string reverse;

    reverse = reverse_string(dna);

    for(auto i: reverse)
    {
        if (i == 'A')
        {
            dna_comp.push_back('T');
        }
        else if (i == 'T')
        {
            dna_comp.push_back('A');
        }
        else if (i == 'C')
        {
            dna_comp.push_back('G');
        }
        else if (i == 'G')
        {
            dna_comp.push_back('C');
        }
    }
    return dna_comp;
}

string reverse_string(string dna)
{
    string reverse_string;
    for (auto i: dna)
    {
        reverse_string = i + reverse_string;
    }

    return reverse_string;
}