#include "Emoji.h"
using namespace Graph_lib;


Emoji::Emoji() {

}
/*
 * Implement your emojis in this file.
 **/

 // A yellow, empty face.
Face::Face(Point c, int r):circ{c,r}
{
	circ.set_fill_color(Graph_lib::Color::yellow);
	circ.set_color(Graph_lib::Color::black);
}

void Face::attach_to(Graph_lib::Window& win)
{
	win.attach(circ);
}

/* TODO:
 *  - define more emojis.
 **/

eye::eye(Point c, int r) : circ{ c, r }, pup{ Point{c.x + r / 4,c.y + r / 4},r / 2 }
{
	circ.set_fill_color(Graph_lib::Color::white);
	circ.set_color(Graph_lib::Color::black);

	pup.set_fill_color(Graph_lib::Color::black);
	pup.set_color(Graph_lib::Color::black);
}

void eye::attach_to(Graph_lib::Window& win)
{
	win.attach(circ);
	win.attach(pup);
}

blinkEye::blinkEye(Point p) :aLine{ Point{ p.x,p.y},Point{p.x + 10,p.y - 10} }, bLine{ Point{ p.x,p.y},Point{p.x+10 ,p.y+10 } }
{
	aLine.set_color(Graph_lib::Color::black);
	bLine.set_color(Graph_lib::Color::black);
	aLine.set_fill_color(Graph_lib::Color::black);
	bLine.set_fill_color(Graph_lib::Color::black);
}

void blinkEye::attach_to(Graph_lib::Window& win)
{
	win.attach(aLine);
	win.attach(bLine);
}

emptyFace::emptyFace(Point p, int r) :Face{ p,r }, left{ Point{p.x - 12,p.y - 8} ,8 }, right{ Point{p.x + 12,p.y - 8},8 }
{

}


void emptyFace::attach_to(Graph_lib::Window& win) {
	Face::attach_to(win);
	left.attach_to(win);
	right.attach_to(win);
}

smilingFace::smilingFace(Point p, int r) :emptyFace{ p,r }, smile{ Point{p.x,p.y + 5},r - 6,r - 10,-180,0 } {
	smile.set_color(Color::black);
}
void smilingFace::attach_to(Graph_lib::Window& win) {
	base.attach_to(win);
	win.attach(smile);
}

sadFace::sadFace(Point p, int r) : base{ p,r }, mouth{ Point{p.x,p.y +23},r - 6,r - 10,0,180 } {
	mouth.set_color(Color::black);
}
void sadFace::attach_to(Graph_lib::Window& win) {
	base.attach_to(win);
	win.attach(mouth);
}

angryFace::angryFace(Point p, int r) : base{ p,r }, mouth{ Point{p.x,p.y + 23},r - 6,r - 10,0,180 }, aLine{ Point{p.x - 12+10,p.y - 8-4},Point{p.x - 12 -5,p.y - 8 -10} }, bLine{ Point{p.x + 12-10,p.y - 8-4},Point{p.x + 12 + 5,p.y - 8 - 10} } {
	
	mouth.set_color(Color::black);

	aLine.set_color(Graph_lib::Color::black);
	bLine.set_color(Graph_lib::Color::black);
	aLine.set_fill_color(Graph_lib::Color::black);
	bLine.set_fill_color(Graph_lib::Color::black);
}
void angryFace::attach_to(Graph_lib::Window& win) {
	base.attach_to(win);
	win.attach(mouth);
	win.attach(aLine);
	win.attach(bLine);
}

winkyFace::winkyFace(Point p, int r) : blank{ p,r }, left{ Point{p.x - 12,p.y - 8} ,8 }, mouth{ Point{p.x,p.y + 5},r - 6,r - 10,-180,0 }, blink{ Point{p.x + 5,p.y - 8} }{
	mouth.set_color(Color::black);
	
}
void winkyFace::attach_to(Graph_lib::Window& win) {
	blank.attach_to(win);
	left.attach_to(win);
	win.attach(mouth);
	blink.attach_to(win);
}
	
surpriseFace::surpriseFace(Point p, int r) : blank{ p,r }, mouth1{ Point{p.x,p.y + 15},r - 13,r - 15,0,360 } {
	mouth1.set_color(Color::black);
	mouth1.set_fill_color(Color::black);

}
void surpriseFace::attach_to(Graph_lib::Window& win) {
	blank.attach_to(win);
	win.attach(mouth1);

}
