#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap st("Guardião")ç

    st.attack("Intruso");
    st.takeDamage(30);
    st.beRepaired(10);
    st.guardGate();

    {
        ScavTrap temp("Temporário");
    }
    return(0);
}