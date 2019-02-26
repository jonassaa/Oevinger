#pragma once
#include "Graph.h"
#include "GUI.h"

using namespace Graph_lib;

class Emoji
{
public:
	Emoji(const Emoji&) = delete;
	Emoji& operator=(const Emoji&) = delete;

	Emoji();

	virtual void attach_to(Graph_lib::Window&) = 0;

	virtual ~Emoji() {};
};

class Face : public Emoji {
protected:
	Circle circ;
public:

	Face(const Face&) = delete;
	Face& operator=(const Face&) = delete;


	Face(Point c, int r);
	virtual void attach_to(Graph_lib::Window& win) override;
};

class eye {
protected:
	Circle circ;
	Circle pup;
public:
	eye(Point c, int r);
	virtual void attach_to(Graph_lib::Window& win);
};

class blinkEye {
protected:
	Line aLine;
	Line bLine;
public:
	blinkEye(Point c);
	virtual void attach_to(Graph_lib::Window& win);
};

class emptyFace {
private:
	Face blank;
	eye left;
	eye right;

public:
	emptyFace(Point p,int r);

	virtual void attach_to(Graph_lib::Window& win) ;
};

class smilingFace {
private:
	emptyFace base;
	Arc smile;
public:
	smilingFace(Point p,int r);
	virtual void attach_to(Graph_lib::Window& win);
};

class sadFace {
private:
	emptyFace base;
	Arc mouth;
public:
	sadFace(Point p, int r);
	virtual void attach_to(Graph_lib::Window& win);
};

class angryFace {
private:
	emptyFace base;
	Arc mouth;
	Line aLine;
	Line bLine;
public:
	angryFace(Point p, int r);
	virtual void attach_to(Graph_lib::Window& win);
};

class winkyFace {
private:
	Face blank;
	eye left;
	Arc mouth;
	blinkEye blink;
	
public:
	winkyFace(Point p, int r);
	virtual void attach_to(Graph_lib::Window& win);
};

class surpriseFace {
private:
	emptyFace blank;
	Arc mouth1;

public:
	surpriseFace(Point p, int r);
	virtual void attach_to(Graph_lib::Window& win);
};