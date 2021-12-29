#include "Tubes.h"

void create_list(mll &list_penyanyi){

}

void newElm_penyanyi(string penyanyi, adr_penyanyi &P){
    P = new elm_penyanyi;
    info(P) = penyanyi;
    next(P) = NIL;
    prev(P) = NIL;
}

void newElm_lagu(string judul, string jmlPendengar, float rating, adr_lagu &L){

}

void insertNew_Penyanyi(mll &list_penyanyi, adr_penyanyi P){
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

}

void show_penyanyi(mll list_penyanyi){

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

void find_lagu(mll list_penyanyi, adr_penyanyi P){

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

adr_lagu max_pendengar(adr_penyanyi P) {
    adr_Lagu L, maxLagu;
    L = nextLagu(P);
    maxLagu = nextLagu(P);
    while (L != NIL) {
        if (info(L).jmlPendengar > info(maxLagu).jmlPendengar) {
            maxLagu = L;
        }
        L = next(L);
    }
    return maxLagu;
}

int rata_rating(adr_penyanyi P) {
    adr_Lagu L;
    L = nextLagu(P);
    int jumlah, i;
    jumlah = 0;
    i = 0;
    while (L != NIL) {
        jumlah = jumlah + info(L).rating;
        i = i + 1;
        L = next(L);
    }
    return jumlah / i;
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
