#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->Hitpoints = 100;
    this->Energypoints = 100;
    this->Attackdamage = 30;
    std::cout<<"FragTrap "<<this->name<<" was created"<<std::endl;
}

FragTrap::FragTrap(FragTrap const &other): ClapTrap(other)
{
    std::cout<<"Copy construtor called"<<std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
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

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap "<<this->name<<" was destroyed"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<this->name<<" Ask for a high five!"<<std::endl;
}