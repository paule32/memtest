#include <TApplication.h>

// TApplication
TApplication::TApplication(void)
{
    ClassName = "TApplication";
    desktop = new TDesktop;
}

void TApplication::init(int argc, char **argv)
{
}

void TApplication::run(void)
{
}

// TApplication stream ... 
std::ostream & operator << (std::ostream &out, TApplication &obj)
{
    out << obj.ClassName;
    
    obj.ident += "  ";
    
    out << obj.ClassName;
    out << ":" << std::endl << obj.ident
        << "{" << std::endl ;
        
    return out;
}
std::istream & operator >> (std::istream &in, TApplication &obj)
{
    in >> obj.ClassName;    
    return in;
}
