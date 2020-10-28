#include <iostream>

int main()
{

    int e1 = 8;
    int e2 = 9;
    int e3 = 11;

    int usermaxnumber;

    int array[e1][e2][e3];

    std::cout << "Write a positive number" << std::endl;
    std::cin >> usermaxnumber;

    for (int i = 0; i < e1; ++i)
    { //populate the array
        for (int j = 0; j < e2; ++j)
        {
            for (int k = 0; k < e3; ++k)
            {

                array[i][j][k] = rand() % usermaxnumber + 1;
            }
        }
    }

    for (int i = 0; i < e1; ++i)
    { // print the array

        for (int j = 0; j < e2; ++j)
        {

            std::cout << '{' << array[i][j][0];

            for (int k = 1; k < e3; ++k)
            {

                array[i][j][k] = rand() % usermaxnumber + 1;

                std::cout << ", " << array[i][j][k];
            }

            std::cout << '}' << std::endl;
        }
        std::cout << std::endl
                  << std::endl;
    }
    return 0;
}
