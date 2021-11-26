#include "iscrizione.h"
#include <iostream>
#include <cstring>
using namespace std;
void init(elem*& atleta){
    atleta= nullptr;
}
void visualizza(elem* atleta){
    elem*p= atleta;
    cout<<"Atleti iscritti: "<<endl;
    while (p!=nullptr){
        cout<<p->nome<<", "<<p->pettorale<<endl;
        p=p->pun;
    }
    cout<<endl;
}


bool aggiungi(elem*& atleta, const char *nome, const int pettorale) {
    if(strlen(nome)>30)
        return 0;
    for(elem* p= atleta; p !=nullptr ; p= p->pun) {
        if (strcmp(p->nome,nome)==0||p->pettorale==pettorale)
            return 0;
    }
    elem *p;
    elem *q;
    for(q=atleta;q !=0 ; q = q->pun)
        p=q;
    q= new elem;
    strcpy(q->nome, nome);
    q->pettorale=pettorale;
    q->pun = 0;
    if(atleta == 0)
    atleta = q;
    else
        p->pun=q;
    return 1;
}
