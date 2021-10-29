#include "AF.cpp"

int main(){
	AbsFactory* shapeFactory = FactoryProducer::getShapeFactory();
	Shape* shape = shapeFactory->getShape("Circle");
	shape->draw();
	AbsFactory* colorFactory = FactoryProducer::getColorFactory();
	Color* color = colorFactory->getColor("Red");
	color->fill();
	return 0;
}
