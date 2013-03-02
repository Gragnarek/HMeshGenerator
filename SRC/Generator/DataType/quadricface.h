#ifndef QUADRICFACE_H
#define QUADRICFACE_H

class QuadricFace
{
protected:
    int x;
    int y;
    int z;
    int n;
    int nface;

public:
    QuadricFace();
    QuadricFace(int nface_);
    QuadricFace(int x_, int y_, int z_, int n_, int nface_);
    QuadricFace(const QuadricFace& qface);

    ~QuadricFace();
};

#endif // QUADRICFACE_H
