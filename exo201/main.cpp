#include <iostream>
#include "foncitons.h"
#include <string>



int main()
{
    ///déclaration des variables
    //on initialise un login
    std::string login = "ece";
    //on initialise un mot de passe
    int motpass = 1234;

    //On appelle la fonction login
    input(login, motpass);

    //fin du programme
    return 0;
}
