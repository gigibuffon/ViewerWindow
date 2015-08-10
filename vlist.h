#ifndef VLIST
#define VLIST

#include <QStringList>
#include <QDebug>

class VList : public QStringList
{

public:
    explicit VList(QStringList *parent = 0);
    ~VList();

    //Define operator [] to get directly integer value
    int operator [](int index){
        return this->value(index).toInt();

    }

private:

};



#endif // VLIST

