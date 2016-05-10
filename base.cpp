
class Base{
    int priv;
protected:
    int prot;
public:
    int publ;
};
//what can derived1 access from Base? it can access the publ and prot
//What are the access specifiers of members inherited from Base? private and protected

class derived1:Base {
    int priv1;
protected:
    int prot1;
public:
    int publ1;
};
//what can derived2 access drom derived1? it can inherit publ1 and prot1
//what are the access specifiers of members inherited from derived1? public and protected
//what about the inherited members of Base in derived1? it cannot inherit any members from Base, but can inherit priv1,prot1 and publ1 from derived1

class derived2:public derived1{
    int priv2;
protected:
    int prot2;
public:
    int publ2;
};
//what can derived3 access from derived2? prot2, publ2 
//what are the access specifiers of members inherited from derived2? public and protected
//what about the inherited members of Base & derived1 in derived2? it cannot inherit from Base but can inherit priv1,prot1,publ1, and publ2 and prot2

class derived3:protected derived2{
    int priv3;
protected:
    int prot3;
public:
    int publ3;
};

class derived4: public Base{
    int priv4;
protected:
    int prot4;
public:
    int publ4;
};

class derived5: protected Base{
    int priv5;
protected:
    int prot5;
public:
    int publ5;
};
class derived6; private derived4{
    int priv6;
protected:
    int prot6:
public:
    int publ6;
};

