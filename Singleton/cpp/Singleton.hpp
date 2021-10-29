#ifndef __SINGLE__
#define __SINGLE__

#include<stdio.h>

class Single{
public:
	static Single* getInstance();
	
	inline void showMsg(){
		printf("Hello world!\n");
	}

private:
	static Single* _instance;
	inline Single() = default;
};

#endif
