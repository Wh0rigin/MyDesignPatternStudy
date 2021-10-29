#ifndef __AF__
#define __AF__

#include<string>
#include<stdio.h>

class Shape;	//Preface statement
class Color;	//Preface statement

class AbsFactory{
public:
	virtual Shape* getShape(const std::string shape) const = 0;
	virtual Color* getColor(const std::string color) const = 0;
};

class ShapeFactory : public AbsFactory{
public:
	Shape* getShape(const std::string shape) const;
	inline Color* getColor(const std::string color) const {
		return nullptr;
	}
};

class ColorFactory : public AbsFactory{
public:
	inline Shape* getShape(const std::string shape) const {
		return nullptr;
	}
	Color* getColor(const std::string color) const;
};

class Color{
public:
	virtual void fill() = 0;
};

class Shape{
public:
	virtual void draw() = 0;	
};

class Red : public Color{
public:
	inline void fill(){
		printf("now fill red color!\n");
	}
};

class Green : public Color{
public:
	inline void fill(){
		printf("now fill red color!\n");
	}
};

class Blue : public Color{
public:
	inline void fill(){
		printf("now fill blue color!\n");
	}
};

class Circle : public Shape{
public:
	inline void draw(){
		printf("now draw circle!\n");
	}
};

class Rectangle : public Shape{
public:
	inline void draw(){
		printf("now draw rectangle!\n");
	}
};

class FactoryProducer{
public:
	inline static ShapeFactory* getShapeFactory()  {
                return new ShapeFactory;
        }
        inline static ColorFactory* getColorFactory()  {
                return new ColorFactory;
	}
 };

#endif
