#include "../include/name.hpp"

std::string get_name() {
    std::cout<<"whats your name? ";
    std::string name ;
    std::cin>>name;
    return name;
}