#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{   
    this->Hitpoints = 100;
    this->Energypoints = 50;
    this->Attackdamage = 20;
    std::cout<<"ScavTrap "<<this->name<<" was created"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other)
{
    std::cout<<"Copy construtor called"<<std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    std::cout<<"Copy assigment operator called"<<std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->Hitpoints = other.Hitpoints;
        this->Energypoints = other.Energypoints;
        this->Attackdamage = other.Attackdamage;
    }
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap "<<this->name<<" was destroyed"<<std::endl;
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap "<<this->name<<" is now in doorman mode"<<std::endl;
}