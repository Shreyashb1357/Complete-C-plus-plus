class banner {
	
	public:
		void resize(float w, float h) {
			width = w;
			height = h;
		}

		double reshape(bool t) {
			return triangle;
		}
		double area() {
			double region = width * height;
			double part = triangle ? 0.5:1.0;
			return region * part;
		}
		
		banner() {
			width = 20;
			height = 15;
			triangle = false;
		}

	private:
		float width, height;
		bool triangle;

};
