#ifndef A
#define A
#include "Warlock.hpp"
#include "ASpell.hpp"

class ASpell;
class ATarget
{
    protected:
        std::string _type;
        ATarget(ATarget const& rhs);
        ATarget& operator=(ATarget const& rhs);
    public:
        ATarget(std::string type);
        virtual ~ATarget();
        std::string const& getType() const;
        virtual ATarget* clone() const = 0;
        void getHitBySpell(ASpell const& spell) const;
};

#endif