#include <iostream>
#include "Katilimci.h"
#include "NormalKatilimci.h"
#include "SohbetOdasi.h"
#include "Moderator.h"
#include <chrono>
#include <thread>

int main() {

    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds

    Katilimci *k1 = new NormalKatilimci("emin kisi");
    Katilimci *k2 = new NormalKatilimci("haydar dumen");
    Katilimci *k3 = new NormalKatilimci("sebnem keskin");
    Katilimci *k4 = new NormalKatilimci("sebnem ferah");
    Katilimci *k5 = new Moderator("Dayum Bro");

    SohbetOdasi *oda1 = new SohbetOdasi();
    oda1 -> katilimciEkle(k1);
    oda1 -> katilimciEkle(k2);
    oda1 -> katilimciEkle(k3);
    oda1 -> katilimciEkle(k4);
    oda1 -> katilimciEkle(k5);

    oda1 -> broadcastMesajGonder(k5, "Gunaydın arkadaslar!");


    sleep_until(system_clock::now() + seconds(1));

    oda1 -> mesajGonder(k1,k3,"Naber guzelim :))");
    sleep_until(system_clock::now() + seconds(2));
    oda1 -> mesajGonder(k3,k1,"Snane be slk.s.s.s :))");
    sleep_until(system_clock::now() + seconds(2));
    oda1 -> mesajGonder(k1,k3,"Defol!");
    sleep_until(system_clock::now() + seconds(2));
    oda1 -> mesajGonder(k3,k1,"tmm.s :(");

    sleep_until(system_clock::now() + seconds(2));
    oda1 -> broadcastMesajGonder(k5, "Kavga Etmeyin Arkadaşlar!");

    sleep_until(system_clock::now() + seconds(2));
    oda1 -> mesajGonder(k4,k5,"Bize niye diyon amk!");







    return 0;
}