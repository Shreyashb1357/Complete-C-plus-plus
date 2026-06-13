namespace ads
{
    enum rawmat{plastic=1, wood=2, metal=3};

    class signboard
    {
        public:
        virtual double area()=0;
        double price();
        virtual ~signboard() { }

        protected:
        rawmat material;
    };

    class wasteful {
        protected:
          float scrap;

        public:
        virtual double loss()=0;
        virtual ~wasteful() { }
       
    };

    class rectangleboard : virtual public signboard
    {
        public:
        rectangleboard(float length, float breadth, rawmat medium);
        double area();

        private:
        float length, breadth;
    };

    class circleboard : virtual public signboard, public wasteful
    {
        public:
        circleboard(float radius, rawmat medium);
        double area();
        double loss();

        private:
        float radius;
    };
}