#include <iostream>
#include <string>

/* This program was made using Coding Homework's video as a base.
* I modified it a little bit to avoid the compiler warnings
* and some alterations to make the program less error prone.
*/

int main()
{
    //We need text from the user
    std::cout << "Enter the text to be converted: ";
    std::string pText{};
    std::getline(std::cin >> std::ws, pText);

    //We need a number of steps to jump in this cypher
    std::cout << "Enter the key: ";
    int key{};
    std::cin >> key;

    for (size_t i = 0, n = pText.length(); i < n; i++)
    {
        if (isalpha(pText[i]))
        {
            //If character is a letter, assume it is upper case
            //ASCI 65 = 'A'
            int offset {65};

            //If character is a lower case, offset it by 97
            //ASCI 97 = 'a'
            if (islower(pText[i]))
                offset = 97;

            //Formula to encrypt the letter by the key
            //MOD 26 is used as there are 26 characters in U.S. alphabet
            //This ensures that after 'z' we loop back to 'a'
            int ciphLetter = ((static_cast<int>(pText[i]) - offset + key) % 26) + offset;

            //Print out the encrypted letter
            std::cout << static_cast<char>(ciphLetter);
        }
        else
            std::cout << pText [i];
    }
    std::cout << std::endl;

    return 0;
}
