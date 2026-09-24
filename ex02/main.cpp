#include "FragTrap.hpp"

int main(void)
{
    FragTrap ft("Bombardeiro");

    ft.attack("Inimigo");
    ft.takeDamage(20);
    ft.beRepaired(6);
    ft.highFivesGuys();
    FragTrap ft2(ft);
    ft2.attack("Inimigo2");
    FragTrap ft3("Reserva");
    ft3 = ft;
    ft3.attack("Inimigo3");
    return(0);
}