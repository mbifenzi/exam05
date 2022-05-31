#ifndef Y
#define Y
#include "Warlock.hpp"
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;
        ASpell(ASpell const& rhs);
        ASpell& operator=(ASpell const& rhs);

    public:
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();
        std::string const& getName() const;
        std::string const& getEffects() const;
        void setTitle(std::string const& name);
        void introduce() const;
        virtual ASpell* clone() const = 0;
        void launch(ATarget const& target) const ;
};

#endif 