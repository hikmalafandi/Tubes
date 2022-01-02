#include <iostream>
#include "Tubes.h"

using namespace std;

int main()
{
    mll list_penyanyi;
    adr_penyanyi P;
    adr_lagu L;
    create_list(list_penyanyi);
    newElm_penyanyi(pamungkas, P);
    insertNew_Penyanyi(list_penyanyi, P);

    newElm_lagu(Kenangan Manis, 80550, 4.0, L);
    insertNew_Lagu(list_penyanyi, P, L);

    newElm_lagu(One Only, 80550, 4.5, L);
    insertNew_Lagu(list_penyanyi, P, L);

    newElm_lagu(To The Bone, 90589, 5.0, L);
    insertNew_Lagu(list_penyanyi, P, L);

    newElm_lagu(Monolog, 50798, 3.5, L);
    insertNew_Lagu(list_penyanyi, P, L);

    newElm_lagu(Be Okay Again Today, 95598, 4.5, L);
    insertNew_Lagu(list_penyanyi, P, L);

    show_penyanyi(list_penyanyi);
    show_lagu(list_penyanyi, P);





    return 0;
}

