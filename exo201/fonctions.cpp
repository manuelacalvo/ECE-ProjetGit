#include <iostream>
#include "foncitons.h"
#include <string>


void input( std::string login, int motpass)
{
    std::string newlogin;
    int newmotpass;
    bool identique = false;

    do
    {

        std::cout << "Entrer login" << std::endl;
        std::cin >> newlogin;
        std::cout << std::endl;
        std::cout << "Entrer mot de passe" <<std::endl;
        std::cin >> newmotpass;
        std::cout << std::endl;

        if (newlogin == login && newmotpass == motpass)
        {
            identique = true;
            std::cout << std::endl;
            std::cout << "Acces autorise" << std::endl;
        }
        else std::cout << "Acces refuse" << std::endl;
        std::cout << std::endl;
    }
    while(!identique);

}

