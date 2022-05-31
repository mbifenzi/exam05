#ifndef X
#define X
#include <iostream>
#include <string>
#include <vector>

class Warlock
{
    protected:
        std::string _name;
        std::string _title;
        Warlock(Warlock const& rhs);
        Warlock& operator=(Warlock const& rhs);

    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        std::string const& getName() const;
        std::string const& getTitle() const;
        void setTitle(std::string const& name);
        void introduce() const;
        
};

#endif