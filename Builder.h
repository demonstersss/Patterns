#pragma once
class Builder {
private:
	Figure* figure;
public:
	Builder() {
		figure = new Figure();
	};
	Builder SetSize(int width, int height) {
		figure->SetSize(width,height);
		return *this;
	}
	Builder SetColor(string color) {
		figure->SetColor(color);
		return *this;
	}
	Builder SetBackground(string color) {
		figure->SetBackground(color);
		return *this;
	}
	Figure Build(){
		return *figure;
	}

	~Builder() {};
};
