#include <iostream>
#include <string>

std::string cardstack_clean[52];
std::string *cardstack_play[52];
std::string *playerhands[11];

int cardface[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15};
std::string cardgroup[4] = {
    "\u2663",  // ♣
    "\u2666",  // ♦
    "\u2665",  // ♥
    "\u2660"}; // ♠

// create the stacks
void createStack()
{
    for (int i = 0; i < std::end(cardstack_clean) - std::begin(cardstack_clean); i++)
    {
    }
}

// randomize the stacks

// main function
int main()
{
    std::cout << "Ukuran cardstack_clean " << sizeof(cardstack_clean) / sizeof(cardstack_clean[0]) << std::endl;
    std::cout << "Ukuran cardface " << std::end(cardface) - std::begin(cardface) << std::endl;

    for (int i = 0; i < std::end(cardstack_clean) - std::begin(cardstack_clean); i++) // Perulangan sampe 52x
    {

        if (i < std::end(cardface) - std::begin(cardface)) // Cuma lakukan kalo i nda lewat panjang cardface
        {
            std::cout << cardface[i] << std::endl;
        }
    }

    return 0;
}