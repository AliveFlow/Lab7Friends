#pragma once

using namespace std;

class Complex;
class RealTok;

class Complex
{

	float re;
	float im;

public:
	Complex();
	Complex(float x,float y);
	~Complex();
	Complex operator+(Complex B);
	Complex operator*(Complex B);
	Complex operator-(Complex B);
	Complex operator/(Complex B);
	Complex operator/(double B);
	Complex operator*(float B);
	float Re();
	float Re(float x) { re = x; };
	float Im();
	int OutD();
	
};

class Realii;

class RealTok
{
	friend Realii;
public:

	void RealSum(Realii & itog);
	void Out_(Realii & itog);
};

class Realii 
{
	
	friend RealTok;

public:
	Realii(int real1, int real2)
	{
		this->real1 = real1;
		this->real2 = real2;
	}
private:
	int real1;
	int real2;

	friend void RealTok::Out_(Realii & itog);
};





