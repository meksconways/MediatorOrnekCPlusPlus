

#include "Katilimci.h"

const string &Katilimci::getUsername() const {

    return username;
}

void Katilimci::setUsername(const string &value) {

    username = value;

}

Katilimci::Katilimci(const string &username) {
    this -> username = username;
}


