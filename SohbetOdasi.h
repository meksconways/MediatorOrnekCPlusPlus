

#ifndef MEDIATORORNEK_SOHBETODASI_H
#define MEDIATORORNEK_SOHBETODASI_H
#pragma once

#include <string>
#include "Oda.h"


class SohbetOdasi final: public Oda{


public:

    SohbetOdasi() : Oda(){}

    virtual void broadcastMesajGonder(Katilimci *gonderen, const string &mesaj);

    virtual void mesajGonder(Katilimci *gonderen, Katilimci *alan, const string &mesaj);







};


#endif //MEDIATORORNEK_SOHBETODASI_H
