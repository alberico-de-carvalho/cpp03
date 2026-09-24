#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name1): name(name1), Hitpoints(10), Energypoints(10), Attackdamage(0)
{
    std::cout<<"ClapTrap"<<this->name<<"was created"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{   
    std::cout<<"copy construtor called"<<std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
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

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap "<<this->name<<" was destroyed"<<std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->Hitpoints == 0)
        return;
    else if(this->Energypoints == 0)
    {
        std::cout<<"ClapTrap "<<this->name<<" does not have  energy to attack"<<std::endl;
        return;   
    }
    this->Energypoints--;
    std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<" causing "<<this->Attackdamage<<" points of damage!"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hitpoints == 0)
        return;
    if(amount >= this->Hitpoints)
        this->Hitpoints = 0;
    else
        this->Hitpoints -= amount;
    std::cout<<"ClapTrap "<<this->name<<" takes "<<amount<<" points of damage"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hitpoints == 0)
        return;
    else if(this->Energypoints == 0)
    {
        std::cout<<"ClapTrap "<<this->name<<" does not have energy to repair itself"<<std::endl;
        return;
    }
    this->Energypoints--;
    this->Hitpoints += amount;
    std::cout<<"ClapTrap "<<this->name<<" repairs itself for "<<amount<<" hit points!"<<std::endl;
}