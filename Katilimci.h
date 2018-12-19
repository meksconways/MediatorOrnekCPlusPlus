
#ifndef MEDIATORORNEK_KATILIMCI_H
#define MEDIATORORNEK_KATILIMCI_H
#pragma once

#include <string>

using namespace std;


class Katilimci {

private:
    string username;

protected:
    Katilimci(const string &username);

public:
    const string &getUsername() const;
    void setUsername(const string &value);
    virtual void mesajAl(Katilimci *gonderen, const string &mesaj) = 0;




};


#endif //MEDIATORORNEK_KATILIMCI_H
