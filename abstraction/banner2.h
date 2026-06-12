enum geomentry {Hexagonal, triangular, rectangular, elliptical};

class banner2 {

	public:

		banner2() {
			width = 25;
			height = 10;
		}

		void resize(float w, float h) {
			width = w;
			height = h;
		}

		void reshape(geomentry g) {
			shape = g;
		}

		double area() {
			double region = width * height;
			float part = 0;
			switch (shape) {
				case geomentry::Hexagonal : 
					part = 0.75;
					break;
				case geomentry::triangular :
					part = 0.5;
					break;
				case geomentry::elliptical :
					part = 3.14/4;
					break;
				default:
					part = 1.0;
			}
			return part * region;
		}






	private:
		float width, height;
		geomentry shape;
		

};
