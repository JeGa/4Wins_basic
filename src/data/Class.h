#ifndef CLASS_H
#define CLASS_H


class Class
{
    public:
        Class();
        virtual ~Class();
        char Getcolor() { return color; }
        void Setcolor(char val) { color = val; }
    protected:
    private:
        char color;
};

#endif // CLASS_H
