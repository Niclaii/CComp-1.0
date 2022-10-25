#ifndef __POINT_H__ 
#define __POINT_H__

class Point{
    public:
        Point(int _x = 0,int _y = 0): x(_x),y(_y){
            std::cout << "constructor" << std::endl;
        }
        ~Point(){
            std::cout << "destructor" << std::endl;
        }
        void setX(int _x){
            x = _x;
        }

        int getX(){
            return x;
        }
        void setY(int _y){
            y = _y;

        }
        int getY(){
            return y;
        }
        void print() const{
            std::cout << "(" << x << ", " << y << ")";
        }
        void mayor(){
            
        }
    private:
        int x,y;
};

#endif 
