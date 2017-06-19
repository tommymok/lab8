#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.hpp"
using namespace std;
int main()
{
    Mino * mino_ptr;
     unsigned long long i = 0;
    try
    {
        while(true)
        {
    srandom(time(NULL));
     for(int i=0;i<3;++i)
         {
             mino_ptr = genMino();
             mino_ptr ->paint();
            delete mino_ptr;
             }
  
         }
}
    catch(bad_alloc ex) {
        cerr << sizeof(int) * i << " bytes: Out of memory!";
        cin.get();
        exit(1);}
    return 0;
}
