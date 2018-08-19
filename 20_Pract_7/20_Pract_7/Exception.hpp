#ifndef Exception_hpp
#define Exception_hpp

class Exception{
private:
    string error;
public:
    Exception(string);
    ~Exception();
    string get_error();
};

#endif /* Exception_hpp */
