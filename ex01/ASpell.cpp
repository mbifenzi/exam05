#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects)
{
    std::cout <<_name << ": This looks like another boring day." << std::endl;
}

ASpell::~ASpell()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

ASpell::ASpell(ASpell const& rhs)
{
    *this = rhs;
}

ASpell& ASpell::operator=(ASpell const& rhs)
{
    this->_name = rhs._name;
    this->_effects = rhs._effects;
    return(*this);
}


ASpell::ASpell(ASpell const& rhs)
{
    *this = rhs;
}

ASpell& ASpell::operator=(ASpell const& rhs)
{
    this->_name = rhs._name;
    this->_effects = rhs._effects;
    return(*this);
}

std::string const& ASpell::getName() const
{
    return(_name);
}

std::string const& ASpell::getEffects() const
{
    return(_effects);
}

void ASpell::launch(ATarget const& target) const
{
    target.getHitBySpell(*this);
}
