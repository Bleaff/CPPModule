#include <Bureaucrat.hpp>

int main()
{
    try
    {
        Bureaucrat *check = new Bureaucrat("Goga", 241);
        std::cout << check << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Bureaucrat *gesha = new Bureaucrat("Gesha", 1);
    std::cout << "_______\n";
    std::cout << *gesha << std::endl;
    try
    {
        gesha->increase();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << *gesha << std::endl;
    gesha->decrease();
    delete gesha;

    return (0);
}