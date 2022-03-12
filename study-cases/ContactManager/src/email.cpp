#include "email.h"
#include <iostream>

using namespace std;

email::email(){
}
email::email(string email_it, string email_type, string email_desc){
    setEmail(email_it);
    setType(email_type);
    setDescription(email_desc);
}
email::~email(){
}

void email::setEmail(string email_it){
   this->m_email = email_it;
}

void email::setType(string email_type){
    this->m_type = email_type;
}

void email::setDescription(string email_desc){
    this->m_description = email_desc;
}

bool email::isMatched(string key) const{
    return (m_email.compare(key)==0);
}

void email::print() const{
    cout<< "email: " << m_email << "\t |" << m_type << "\t |" << m_description << endl;
}
