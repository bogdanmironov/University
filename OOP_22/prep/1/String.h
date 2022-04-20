#ifndef STRING_H
#define STRING_H

#include <cstddef>

class String {
private:
    size_t mSize, mCapacity;
    char *mString;

    void resize(size_t);

public: 
    String(const char *str="");
    String(const String &other);
    String &operator=(const String &other);
    ~String();

    size_t capacity() const;
    size_t size() const;
    size_t length() const;
    char at(size_t) const;

    char &back();
    const char &back() const;

    char &front();
    const char &front() const;

    String &operator+=(const String &str);
    String &operator+=(const char *s);
    String &operator+=(char c);

    void pushBack(char);

    const char *cStr() const;
    operator const char *();

};

#endif