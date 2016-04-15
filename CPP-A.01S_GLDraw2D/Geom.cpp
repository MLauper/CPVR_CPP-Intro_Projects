class CPoint {
public:
    void set (int x, int y){
        this->x = x;
        this->y = y;
    }
    void list (){
        cout << "Point is at x="<<x<<" and <="<<y<<".\n";
    }
private:
    float x,y;
};

class CLine {
public:
    void set(CPoint start, CPoint end){
        this->start = start;
        this->end = end;
    }
    void list(){
        cout<<"CLine consists of:\n";
        cout<<"Start Point: ";
        start.list();
        cout<<"End Point: ";
        end.list();
    }
private:
    CPoint start, end;
};

class CRectangle {
public:
    void set(CPoint A, CPoint B, CPoint C){
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void list() {
        cout<<"CRectangle consists of:\n";
        cout<<"Point A: ";
        A.list();
        cout<<"Point B: ";
        B.list();
        cout<<"Point C: ";
        C.list();
    }
private:
    CPoint A,B,C;
};

class CCircle {
public:
    void set(CPoint center, float radius){
        this->center = center;
        this->radius = radius;
    }
    void list() {
        cout<<"CCircle concists of:\n";
        cout<<"Center at Point ";
        center.list();
        cout<<"Radius: "<<radius;
    }
private:
    CPoint center;
    float radius;
};