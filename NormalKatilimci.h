

#ifndef MEDIATORORNEK_NORMALKATILIMCI_H
#define MEDIATORORNEK_NORMALKATILIMCI_H

#pragma once

#include <string>
#include "Katilimci.h"

using namespace std;

class NormalKatilimci final : public Katilimci{

public:
    NormalKatilimci(const string &username);
    virtual void mesajAl(Katilimci *gonderen, const string &mesaj);

};


#endif //MEDIATORORNEK_NORMALKATILIMCI_H
