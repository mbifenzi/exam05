#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
{
    std::cout <<_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(Warlock const& rhs)
{
    *this = rhs;
}

Warlock& Warlock::operator=(Warlock const& rhs)
{
    this->_name = rhs._name;
    this->_title = rhs._title;
    return(*this);
}


std::string const& Warlock::getName() const
{
    return(_name);
}

std::string const& Warlock::getTitle() const
{
    return(_title);
}

void Warlock::setTitle(std::string const& name)
{
    _name = name;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " + _name + ", " + _title +  "!" << std::endl;
}

int main()
{
    Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);

}