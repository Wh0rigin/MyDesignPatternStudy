#include "AF.hpp"

Shape* ShapeFactory::getShape(const std::string shape) const {
	if(shape == "Rectangle"){
		return new Rectangle;
	}
	if(shape ==  "Circle"){
		return new Circle;
	}
	return nullptr;
}

Color* ColorFactory::getColor(const std::string color) const {
	if(color == "Red")
		return new Red;
	if(color == "Blue")
		return new Blue;
	if(color == "Green")
		return new Green;
	return  nullptr;
}
