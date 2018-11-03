#include "mynum.h"

mynum::mynum(QString num)
    :QString(num)
{

}

mynum & mynum:: insert(int position, QChar ch)
{
    if(mynum[0]!="-")
    {
        mynum.insert(0,'-');
    }

}
