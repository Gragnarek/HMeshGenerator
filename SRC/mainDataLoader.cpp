#include "../SRC/Generator/DataType/vector.h"
#include "../SRC/Generator/DataType/vector3d.h"

#include <stdexcept>
#include <boost/throw_exception.hpp>

int main (int , char** ) try
{
    std::cout << "qwerty;";
    //boost::throw_exception(std::runtime_error("qwerty"));
    throw std::runtime_error("qwerty");
    return 0;
}
catch( std::exception& e )
{
    std::cout << e.what();
    std::string s = e.what();
}
