enum Geometry {Rectangle, Triangle , Circular};

class Banner{
    public:
        Banner() {
            width = 10;
            height = 20;
            shape = Rectangle;
        }


        void Resize(float w , float h){
            width=w;
            height=h;
        }

        void reshape(bool t) {
            shape = t ? Geometry::Triangle : Geometry::Circular;
        }

        double Area() const {
            double region = width * height;
            float part = 0;
            switch(shape)
            {
                case Geometry::Triangle:
                    part = 0.5;
                    break;
                case Geometry::Circular:
                    part = 0.75;
                    break;
                case Geometry::Rectangle:
                    part = 3.14 / 4;
                    break;
                default:
                    part = 1;
            }
            return part * region;
        }
        
    private:
        float width, height;
        Geometry shape;
};