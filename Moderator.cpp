//
// Created by macbook  on 2018-12-13.
//

#include "Moderator.h"

#include <iostream>

using namespace std;


Moderator::Moderator(const string &username) : Katilimci(username) {

}

void Moderator::mesajAl(Katilimci *gonderen, const string &mesaj) {

    cout<< gonderen -> getUsername() << " --> " << this->getUsername()<<" : "<<mesaj<<endl;

};