#ifndef D
#define D
#include "Warlock.hpp"
#include "ATarget.hpp"

class ATarget;

class Fwoosh : public ASpell
{
    public:
        Fwoosh(void): ASpell("Fwoosh", "fwooshed"){};
        virtual ~Fwoosh();
        ASpell* clone(void) const
        {
            return( new Fwoosh());
        }
};

#endif 