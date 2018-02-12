#include <iostream>



int main()
{
    ///declaration  et initialisation des variables
    int nb1 = 0;
    float nb2 = 0;
    //demande a l'utilisateur de saisir un entier
    std::cout << "entrer un entier :" << std::endl;
    //on stocke la valeur saisie dans la variable nb1
    std::cin >> nb1;
    //demande a l'utilisateur de saisir un reel
    std::cout << "entrer un reel :" << std::endl;
    //on stocke la valeur saisie dans la variable
    std::cin >> nb2;
    //on affiche les deux valeurs saisies a l'ecran
    std::cout << "votre entier est:" << nb1 <<std::endl;
    std::cout << "votre reel est :" << nb2 <<std::endl;

    return 0;
}
