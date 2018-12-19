
#include "NormalKatilimci.h"

#include <iostream>

using namespace std;

NormalKatilimci::NormalKatilimci(const string &username) : Katilimci(username) {

}

void NormalKatilimci::mesajAl(Katilimci *gonderen, const string &mesaj) {

    cout<<gonderen -> getUsername()<< " -->" << this -> getUsername() << " : " << mesaj<<endl;

}

