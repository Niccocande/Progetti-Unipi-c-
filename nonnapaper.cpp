#include "compito.h"

Monitor::Monitor(int mexmax){
    if(mexmax>0)
        messaggimax=mexmax;
    else
        messaggimax=3;
}
Monitor::Monitor(Monitor &m) {
    messaggimax = m.messaggimax;
    elem *r;
    for (r = m.testa; r != nullptr; r = r->pun) {
        elem *p;
        elem *q;
        for (q = testa; q != nullptr; q = p->pun)
            p = q;
        q = new elem;
        //q->msg = new char[strlen(r->msg)];
        strncpy(q->msg, r->msg, maxlen);
        //q->msg[strlen(r->msg)] = '\0';
        q->pun = nullptr;
        if (testa == nullptr)
            testa = q;
        else
            p->pun = q;
    }
}

    /*elem*p=0;
    elem *q=0;
    if(m.testa== nullptr)
        testa=nullptr;
    else {
        testa=new elem;
        testa->msg=new char;
        strcpy(testa->msg,m.testa->msg);
        testa->pun=m.testa->pun;
        p->pun=testa;

    }
    for (q=testa->pun; q!=0  ;q=q->pun) {

        p=new elem;
        strcpy(p->msg, q->msg);
    }
    p->pun=0;*/



void Monitor::inserisci(char messaggio[]) {
if(messaggio== nullptr)
    return ;
    if(messaggipresenti >= messaggimax){
        elem*p; elem*q;
        if(testa == nullptr)
            return;
        for (p=testa; p->pun!= nullptr; p=p->pun) {
            q=p;
        }
        if(p==testa)
            testa=0;
        else
            q->pun= nullptr;
        delete p;
        messaggipresenti--;


    }
if(messaggipresenti<messaggimax) {
    elem *p = new elem;
    //p->msg = new char[strlen(messaggio)];
    strncpy(p->msg, messaggio, maxlen);
   // p->msg[strlen(messaggio)] = '\0';
    p->pun = testa;
    testa = p;
    messaggipresenti++;
    cout<<testa->msg;
}
}
ostream& operator<<(ostream& os, Monitor &m){
    os<<'['<< m.messaggimax<<']'<<endl;
    elem*p;
    for (p=m.testa; p!= nullptr ; p=p->pun) {
        os<<p->msg<<endl;
    }
    return os;
}







////////////////////////////////////////////qui trovi il .h
#include <cstring>
#include <iostream>
using namespace std;

const int maxlen = 10;
struct elem {
    char msg[maxlen];
    elem *pun;
};
class Monitor {
private:

    int messaggimax = 0;
    int messaggipresenti=0;


    elem *testa = nullptr;
public:
    Monitor(int mexmax);
    Monitor(Monitor &m);
    void inserisci(char messaggio[]);
    friend ostream& operator<<(ostream& os, Monitor &m);
};

