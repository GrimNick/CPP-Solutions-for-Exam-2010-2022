// single,hierarchial, multiple, multilevel, hybrid inheritance

//single--
class A{

};

class B:public A{

};

//hierarchial inheritance --
class A{

};

class B:public A{

};

class C:public A{

};

//multiple inheritance --
class A{

};
class B{

};

class D:public A,public B{

};

//multilevel--
class A{

};

class B:public A{

};

class C:public B{

};

//hybrid inheritance --
class A{

};

class B:public A{

};

class C:public A{

};


class D:public B,public C{

};
