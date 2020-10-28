#include <iostream>
#include <string>

int main()
{
    int numtry;
    int runs = 1;
    char answer;
    int high = 128;
    int low = 0;

    numtry = high / 2;
    while (runs <= 7)
    {
        std::cout << "Is your number above " << numtry << "? Answer with y/n" << std::endl;
        std::cin >> answer;

        if (answer == 'Y' || answer == 'y')
        {
            low = numtry + 1;
            numtry = (high + low) / 2;
            runs++;
        }
        else if (answer == 'N' || answer == 'n')
        {
            high = numtry;
            numtry = (high + low) / 2;
            runs++;
        }
    }
    std::cout << std::endl
              << "Your number was " << high << std::endl
              << std::endl;

    return 0;
}