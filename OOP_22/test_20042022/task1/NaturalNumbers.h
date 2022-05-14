#ifndef NATURAL_NUMBERS_H
#define NATURAL_NUMBERS_H

class NaturalNumbers {
private:
    int sizeOfElements, capacityOfElements;
    int sizeOfName, capacityOfName; 

    int *elements;
    char *name;

public:
    NaturalNumbers();
    NaturalNumbers(int *elements, char *name, int numberOfElements);
    ~NaturalNumbers();

    NaturalNumbers &operator+(const NaturalNumbers &other);
    NaturalNumbers &operator+=(const NaturalNumbers &other);
    NaturalNumbers &operator>>(const NaturalNumbers &set);
    NaturalNumbers &operator<<(const NaturalNumbers &set) const;
    NaturalNumbers &operator[](int position);

    void setName(const char *str);
    const char *getName();

    void addElement();
    int *getAllElements();
    int at(int position);
};

#endif // DEBUG