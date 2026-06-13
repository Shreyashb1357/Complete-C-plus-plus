enum Geometry {Rectangle, Triangle , Circular};

class Banner{
    public:
        Banner() {
            width = 10;
            height = 20;
            shape = Rectangle;
        }

        Banner(float w,float h) {
            width = w;
            height = h;
            shape = Triangle;
        }


        void Resize(float w , float h){
            width=w;
            height=h;
        }

        void reshape(bool t) {
            shape = t ? Geometry::Triangle : Geometry::Circular;
        }

        virtual double Area() const {
            return width * height;
        }

        virtual ~Banner() {}
        
    private:
        float width, height;
        Geometry shape;
};

class CurvedBanner : public Banner {
    public:

        CurvedBanner(float w , float h , float r) : Banner(w,h) , radius(r) {}
      
        double Area() const     {
            return Banner::Area() - 0.86 * radius * radius;
        }
        ~ CurvedBanner() {}
    private:
        float radius;
};