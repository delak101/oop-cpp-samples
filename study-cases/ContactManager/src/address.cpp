#include "address.h"
#include <iostream>

using namespace std;

address::address(){
}
address::address(string add_it, string add_type, string add_description){
    setAddress(add_it);
    setType(add_type);
    setDescription(add_description);
}
address::~address(){
}

void address::setAddress(string add_it){
   this->m_address = add_it;
}

void address::setType(string add_type){
    this->m_type = add_type;
}

void address::setDescription(string add_description){
    this->m_description = add_description;
}

bool address::isMatched(string key) const{
    return (m_address.compare(key)==0);
}

void address::print() const{
    cout<< "address: " << m_address << "\t |" << m_type << "\t |" << m_description << endl;
}
