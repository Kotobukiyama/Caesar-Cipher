#include <iostream>
#include <string>

int main()
{
    //We need text from the user
    std::string pText{};
    std::getline(std::cin >> std::ws, pText);

    //We need a number of steps to jump in this cypher
    int key{};
    std::cin >> key;

    for (size_t i = 0, n = pText.length(); i < n; i++)
    {
            if (isalpha(pText[i]))
        {

        }
    }


    return 0;
}
