
#include "SohbetOdasi.h"
 //#include "stdafx.h"

 void SohbetOdasi::broadcastMesajGonder(Katilimci *gonderen, const string &mesaj) {

     for (auto item : this ->katilimcilar) {

         item -> mesajAl(gonderen,mesaj);

     }

}

void SohbetOdasi::mesajGonder(Katilimci *gonderen, Katilimci *alan, const string &mesaj) {

    alan -> mesajAl(gonderen,mesaj);

}


