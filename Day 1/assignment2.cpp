#include <iostream>

int main()
{
    unsigned char encryptedmsg[20]; // Char array for user input
    char z;
    int i;
    int keylength;

    std::cout << "Enter message: ";
    std::cin >> encryptedmsg;
    std::cout << "Key length (0-26): ";
    std::cin >> keylength;

    if (keylength >= 0 && keylength <= 26)
    {
        for (i = 0; encryptedmsg[i] != '\0'; ++i)
        {

            z = encryptedmsg[i];

            z = z - keylength;

            if (z < 'A')
            {
                z = z + 'Z' - 'A' + 1;

                encryptedmsg[i] = z;
            }
            else
            {
                encryptedmsg[i] = z;
            }
        }
        std::cout << encryptedmsg << std::endl;
    }
    else
    {

        std::cout << "Failed to input a value inside range 0-26";
    }

    return 0;
}