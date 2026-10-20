#include <iostream>

//std::vector<char> allCharacters;

int main()
{
    char userInput;

    std::cout << "Enter character (q to quit):" << std::endl;
    std::cin >> userInput;

    int numberOfCharacters = 0;

    while (userInput != 'q') // anybody?
    {
        //"body" of the loop:
        numberOfCharacters++;

        std::cout << "Enter ANOTHER character (q to quit):" << std::endl;
        std::cin >> userInput;

        //allCharacters.push_back(userInput);
    }

    std::cout << "Counter value is: " << numberOfCharacters << std::endl;
    std::cout << "Character value is: " << userInput << std::endl;


    //part2:
    //std::cout << "abcdefghi"

    int counter = 97;

    for (char currentLetter = 'a'; currentLetter <= 'z'; currentLetter++)
    {
        std::cout << "Decimal value: " << counter
            << "    ASCII char: " << currentLetter << std::endl;

        counter++;
    }

    //SetConsoleOutputCP(CP_UTF8);

    ////SetConsoleOutputCP();//
    //for (int i = 0

    //std::cout << "a" << std::endl;
    //std::cout << "b" << std::endl;
    //std::cout << "c" << std::endl;

    //(piece1; piece2; piece3)

    //end main
    return 0;
}