#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

#define info(p) (p)->info
#define next(p) (p)->next
#define nextLagu(p) (p)->nextLagu
#define first(list_penyanyi) ((list_penyanyi).first)
#define nil NULL

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
    adr_lagu nextLagu;
};

struct elm_lagu{
    lagu info;
    adr_lagu next;
};

struct mll{
    adr_penyanyi first;
    adr_penyanyi last;
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

void find_penyanyi(mll list_penyanyi);
void find_lagu(mll list_penyanyi, adr_penyanyi P);



#endif // TUBES_H_INCLUDED
