#pragma once
class Factory2D : AbstractFactory2D{
private:

public:
	Ellipse2D* CreateEllipse() { 
		return (new Ellipse2D());
	}
	Reactangle2D* CreateReactangle() {
		return (new Reactangle2D());
	}
};