#include <iostream>
#include <string>
#include <sstream>

std::string *cardstack_clean[52];
std::string *cardstack_play[52];
std::string *playerhands[11];

wchar_t cardgroup[4] = {L'♣', L'♦', L'♥', L'♠'};
int cardface[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15};

// create the stacks
std::string *createStack()
{
    for (int i = 0; i < sizeof(cardstack_clean); i++)
    {
        for (int group = 0; group < sizeof(cardgroup); group++)
        {
            for (int face = 0; face < sizeof(cardface); face++)
            {
                std::stringstream res;
                res << cardgroup[group] << cardface[face];
                cardstack_clean[i] = res.str();
            }
        }
    }
}

// randomize the stacks

// main function
int main()
{
    std::cout << *cardface << '\n';
    return 0;
}