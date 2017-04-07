#ifndef TSTRING_H_
#define TSTRING_H_

#include "TObject.h"

class TString: public TObject
{
    friend std::ostream& operator << (std::ostream &out, TString obj);
    friend std::istream& operator >> (std::istream &out, TString obj);
    
    friend std::ostream& operator << (std::ostream &out, TString &obj);
    friend std::istream& operator >> (std::istream &out, TString &obj);
public:
    explicit TString(char*);
    explicit TString(void);

    TString const getText();
    void setText(TString &text);
};

#endif
