#ifndef __FM__
#define __FM__

#include<stdio.h>

class Color{
public:
	virtual void draw() const = 0;	
};

class Red : public Color{
public:
	inline void draw() const {
		printf("now draw red color\n");
	}
};

class Green : public Color{
public:
	inline void draw() const {
		printf("now draw green color\n");
	}
};

class Blue : public Color{
public:
	inline void draw() const {
		printf("now draw Blue color\n");
	}
};


#endif
