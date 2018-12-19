//
// Created by macbook  on 2018-12-13.
//

#ifndef MEDIATORORNEK_MODERATOR_H
#define MEDIATORORNEK_MODERATOR_H
#pragma once

#include <string>
#include "Katilimci.h"

using namespace std;

class Moderator final : public Katilimci {

public:
    Moderator(const string &username);

    virtual void mesajAl(Katilimci *gonderen, const string &mesaj) override;


};


#endif //MEDIATORORNEK_MODERATOR_H
