#ifndef CPP_PROJECTS_GEOM_H_H
#define CPP_PROJECTS_GEOM_H_H

class CPoint {
    void set (int x, int y);
    void list ();
private:
    float x,y;
};

class CLine {
public:
    void set(CPoint start, CPoint end);
    void list();
private:
    CPoint start, end;
};

class CRectangle {
public:
    void set(CPoint A, CPoint B, CPoint C);
    void list();
private:
    CPoint A,B,C;
};

class CCircle {
public:
    void set(CPoint center, float radius);
    void list();
private:
    CPoint center;
    float radius    ;
};

#endif //CPP_PROJECTS_GEOM_H_H
