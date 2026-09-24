#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ct("Robo1");

    ct.attack("Inimigo");
    ct.takeDamage(3);
    ct.beRepaired(2);
    //Esgotar os pontos de Energia
    for(int i = 0; i < 15; i++)
        ct.attack("Inimigo2");
    //Esgotar os pontos de vida
        ClapTrap ct2("Robo2");
    //Depois de morto não deve funcionar
        ct2.takeDamage(50);
    ct2.attack("Inimigo2");
    ct2.beRepaired(5);
    return(0);
}