#include <iostream>
#include <string>

struct Card
{
    std::string group;
    std::string face;
    int value;
};

Card cardstack[52];
Card *cardstack_shuffled[52];
// std::string *playerhands[11];

std::string cardface[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
std::string cardgroup[4] = {
    "\u2663", // ♣
    "\u2666", // ♦
    "\u2665", // ♥
    "\u2660"  // ♠
};

// create the stacks
void create_stacks()
{
    int i = 0;
    int groupsize = std::end(cardgroup) - std::begin(cardgroup);
    int facesize = std::end(cardface) - std::begin(cardface);
    for (int group = 0; group < groupsize; group++)
    {
        for (int face = 0; face < facesize; face++)
        {
            cardstack[i].face = cardface[face];
            cardstack[i].group = cardgroup[group];

            //* This lines only so you know the card is there
            // if (cardface[face] == "A")
            // {
            //     std::cout << "As ";
            // }

            //* This lines only so you know the card is there
            // std::cout
            //     << &cardstack[i] << " : "                            // memory place
            //     << cardstack[i].face << " " << cardstack[i].group    // what it holds
            //     << std::endl;

            i++;
        }
    }
}

// randomize the stacks
void randomize_stacks()
{
    int length = sizeof(cardstack) / sizeof(cardstack[0]);
}

// main function
int main()
{
    create_stacks();

    std::cout << sizeof(cardstack) / sizeof(cardstack[0]) << std::endl;
    // std::string yeet = "abc";
    // int res;
    // try
    // {
    //     res = std::stoi(yeet);
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // std::cout << res << std::endl;
    return 0;
}