#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define nextLagu(P) (P)->nextLagu
#define first(list_penyanyi) ((list_penyanyi).first)
#define last(list_penyanyi) ((list_penyanyi).last)
#define first(list_lagu) ((list_lagu).first)
#define NIL NULL

typedef struct elm_penyanyi *adr_penyanyi;
typedef struct elm_lagu *adr_lagu;

struct lagu{
    string judul;
    int jmlPendengar;
    float rating;
};

struct elm_penyanyi{
    string info;
    adr_penyanyi next;
    adr_penyanyi prev;
    adr_lagu nextLagu;
};

struct elm_lagu{
    lagu info;
    adr_lagu next;
    adr_lagu prev;
};

struct mll{
    adr_penyanyi first;
    adr_penyanyi last;
};

struct mll_lagu {
    adr_lagu first;
};

void create_list(mll &list_penyanyi);
void newElm_penyanyi(string penyanyi, adr_penyanyi &P);
void newElm_lagu(string judul, string jmlPendengar, float rating, adr_lagu &L);

void insertNew_Penyanyi(mll &list_penyanyi, adr_penyanyi P);
void insertNew_Lagu(mll &list_penyanyi, adr_penyanyi P, adr_lagu L);

void delete_penyanyi(mll &list_penyanyi, adr_penyanyi &P);
void delete_lagu(mll &list_penyanyi, adr_penyanyi P, adr_lagu &L);

void show_penyanyi(mll list_penyanyi);
void show_lagu(mll list_penyanyi, adr_penyanyi P);

adr_penyanyi find_penyanyi(mll list_penyanyi);
adr_lagu find_lagu(mll list_penyanyi, string judul, string penyanyi);

adr_lagu max_pendengar(mll &list_penyanyi);
int rata_rating(mll &list_penyanyi, adr_penyanyi P);

void buat_relasi(mll_lagu &listlagu, adr_penyanyi &P, adr_lagu temp)
void hapus_relasi(adr_penyanyi P);
void createlistLagu(mll_lagu &listlagu);
void insertLagu(mll_lagu &listlagu, adr_lagu L);




#endif // TUBES_H_INCLUDED
