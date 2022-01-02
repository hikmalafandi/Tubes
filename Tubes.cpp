#include "Tubes.h"

void create_list(mll &list_penyanyi){
    first(list_penyanyi) = NIL;
}

void newElm_penyanyi(string penyanyi, adr_penyanyi &P){
    P = new elm_penyanyi;
    info(P) = penyanyi;
    next(P) = NIL;
    prev(P) = NIL;
}

void newElm_lagu(string judul, string jmlPendengar, float rating, adr_lagu &L){
    L = new elm_lagu;
    info(L).judul = judul;
    info(L).jmlPendengar = jmlPendengar;
    info(L).rating = rating;
    next(L) = nil;
    prev(L) = nil;
}

void insertNew_Penyanyi(mll &list_penyanyi, adr_penyanyi P){
    if (first(list_penyanyi) == nil) {
        first(list_penyanyi) = P;
    } else {
        adr_penyanyi J = first(list_penyanyi)
        while (next(J) != nil){
            J = next(J);
        }
        next(J) = P;
    }
}

void insertNew_Lagu(mll &list_penyanyi, adr_penyanyi P, adr_lagu L){
    if (nextLagu(P) == NIL) {
        nextLagu(P) = L;
        next(L) = NIL;
        prev(L) = P;
    } else {
        next(L) = nextLagu(P);
        prev(nextLagu(P)) = L;
        nextLagu(P) = L;
        prev(L) = P;
    }
}

void delete_penyanyi(mll &list_penyanyi, adr_penyanyi &P){
    if (first(list_penyanyi) == NIL) {
        P = NIL;
        cout <<"List Penyanyi Kosong"<<endl;
    } else if ((first(list_penyanyi)) == last(list_penyanyi)) {
        P = first(list_penyanyi);
        first(list_penyanyi) = NIL;
    } else {
        P = first(list_penyanyi);
        first(list_penyanyi) = next(first(list_penyanyi));
    }
    next(P) = NIL;
    prev(P) = NIL;
}

void delete_lagu(mll &list_penyanyi, adr_penyanyi P, adr_lagu &L){
    if (nextLagu(p) == nil){
        L = nil;
        cout<<"List Lagu kosong"<<endl;
    } else if (next(nextLagu(p))) == nil){
        L = nextLagu(p);
        nextLagu(p) = nil;
    } else {
        L = nextLagu(p);
        nextLagu(p) = next(nextLagu(p));
    }
    next(L) = nil;
    prev(L) = nil;
}

void show_penyanyi(mll list_penyanyi){
    int i = 1;
    adr_penyanyi p = first(list_penyanyi);
    if (p != nil){
        cout<<"Playlist kosong"<<endl;
    } else {
        while (p != nil){
            cout<<i<<". "<<info(p)<<endl;
        }
    }
    cout<<endl;
}

void show_lagu(mll list_penyanyi, adr_penyanyi P){
    adr_lagu L;
    L = nextLagu(P);
        while (L != NIL) {
            cout << info(L).judul<<endl;
            cout << info(L).jmlPendengar<<endl;
            cout <<info(L).rating<<endl;
            L = next(L);
        }
}

adr_penyanyi find_penyanyi(mll list_penyanyi, string penyanyi){
    adr_penyanyi P;
    P = first(list_penyanyi);
    while (P != NIL) {
        if (info(P) == penyanyi) {
            return P;
        }
        P = next(P);
    }
    return NIL;

}

adr_lagu find_lagu(mll list_penyanyi, string judul, string penyanyi){
    adr_penyanyi p = find_penyanyi(list_penyanyi, penyanyi);
    if (p == nil){
        cout<<"Penyanyi tidak ditemukan"<<endl;
    } else {
        adr_lagu L = nextLagu(p);
        while (L != nil){
            if (info(L).judul == judul){
                return L;
            }
            L = next(L);
        }
    }
    return nil;
}

/*adr_lagu max_pendengar(mll &list_penyanyi) {
    adr_penyanyi P, maxPenyanyi;
    adr_Lagu L, maxLagu;
    maxPenyanyi = first(list_penyanyi);
    P = first(list_penyanyi);
    while (P != NIL) {
        L = nextLagu(P);
        maxLagu = nextLagu(P);
        while (L != NIL) {
            if (info(L).jmlPendengar > info(maxLagu).jmlPendengar) {
                maxLagu = L;
            }
            L = next(L);
        }
        if () {

        }
    }

}*/

adr_lagu max_pendengar(mll &list_penyanyi) {
    adr_Lagu L, maxLagu;
    adr_penyanyi P = first(list_penyanyi);
    while (P != NIL ) {
        L = nextLagu(P);
        maxLagu = nextLagu(P);
        while (L != NIL) {
            if (info(L).jmlPendengar > info(maxLagu).jmlPendengar) {
                maxLagu = L;

            }
            L = next(L);
        }
        P = next(P);
    }
    return maxLagu;
}

int jumlahLagu(mll &list_penyanyi) {
    adr_penyanyi P = first(list_penyanyi);
    int i = 0;
    while (P != NIL) {
        adr_lagu L = nextLagu(P);
        while (L != NIL) {
            i = i + 1;
            L = next(L);
        }
        P = next(P);
    }
}

void buat_relasi(mll_lagu &listlagu, adr_penyanyi &P) {
    nextLagu(P) = first(listlagu);
    prev(first(listlagu)) = P;
}

void hapus_relasi(adr_penyanyi P) {
    adr_lagu L;
    L = nextLagu(P);
    prev(L) = NIL;
    nextLagu(P) = NIL;

}

void createlistLagu(mll_lagu &listlagu) {
    first(listlagu) = NIL;
}

void insertLagu(mll_lagu &listlagu, adr_lagu L) {
    if (first(listlagu) == NIL) {
        first(listlagu) = L;
        prev(L) = NIL;
    } else {
        next(L) = first(listlagu);
        prev(first(listlagu)) = L;
        first(listlagu)= L;
    }
}
