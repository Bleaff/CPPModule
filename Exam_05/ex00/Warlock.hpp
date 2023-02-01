#include <iostream>
#include <string>

class Warlock
{
private:
    std::string title;
    std::string name;
    Warlock(const Warlock &other);
    Warlock &operator=(const Warlock &other);
public:
    Warlock(std::string w_name, std::string w_title);
    ~Warlock();

    std::string getTitle(void) const;
    std::string getName(void)  const;

    void setTitle(std::string new_title);

    void introduce(void) const;
};
