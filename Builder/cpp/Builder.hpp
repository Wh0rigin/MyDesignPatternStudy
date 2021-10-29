#ifndef __BUILDER__
#define __BUILDER__

#include<iostream>
#include<stdio.h>
#include<string>

class BuilderMode{
public:
	virtual void Part1() = 0;
	virtual void Part2() = 0;
	virtual void Part3() = 0;
	virtual std::string GetResult() const = 0;
};

class Builder : public BuilderMode {
public:
	inline void Part1(){
		result += "1";
	}
	
	inline void Part2(){
		result += "2";		
	}

	inline void Part3(){
		result += "3";
	}
	
	inline std::string GetResult() const {
		return result;
	}
private:
	std::string result;
};

class Director{
public:
	inline void Construct(){
		builder->Part1();
		builder->Part2();
		builder->Part3();
		std::cout << builder->GetResult() << std::endl;
	}

	inline Director(BuilderMode* build):builder(build){

	}
private:
	inline Director() = default;
	BuilderMode* builder;
};

#endif
