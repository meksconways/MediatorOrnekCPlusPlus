

#ifndef MEDIATORORNEK_ODA_H
#define MEDIATORORNEK_ODA_H

#pragma once

#include <string>
#include <vector>
#include "Katilimci.h"

using namespace std;

class Oda {

protected:
    vector<Katilimci*> katilimcilar;

    Oda(){
        katilimcilar = vector<Katilimci *>();
    }

public:

    void katilimciEkle(Katilimci *katilimci){
        katilimcilar.push_back(katilimci);
    }
    virtual void mesajGonder(Katilimci *gonderen,Katilimci *alan, const string &mesaj) = 0;

    virtual void broadcastMesajGonder(Katilimci *gonderen, const string &mesaj) = 0;

};


#endif //MEDIATORORNEK_ODA_H
