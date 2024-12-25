// Références.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    int a = 10;
    int b = 45; 

    std::cout << "a : " << a << std::endl;

    int& ref = a;

    // réasigner plusieurs facons (par la référence)
    ref = 2; // modifier la référence, modifie l'objet référencé
    std::cout << "a : " << a << std::endl;

    ref = b;// modifier la référence, modifie l'objet référencé
    std::cout << "a : " << a << std::endl;


    std::cout << "Adresse memoire a : " << &a << std::endl;
    std::cout << "Adresse memoire ref : " << &ref << std::endl;

}

// une référence doit être initialiser, c'est un alias
// pointeur peut pointer sur rien, c un pointeur null
// int *ptr = nullptr; ou NULL ou = 0