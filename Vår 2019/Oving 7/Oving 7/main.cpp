

#include "Simple_window.h"
#include "Emoji.h"

// Size of window and emoji radius
constexpr int xmax = 1000;
constexpr int ymax = 600;
constexpr int emojiRadius = 50;

int main()
{
	using namespace Graph_lib;

	const Point tl{ 100, 100 };
	const string win_label{ "Emoji factory" };
	Simple_window win{ tl, xmax, ymax, win_label };

	/* TODO:
	 *  - initialize emojis
	 *  - connect emojis to window
	 **/

	smilingFace fred{ tl,emojiRadius };
	sadFace bob{ Point{ tl.x + emojiRadius * 2,tl.y }, emojiRadius };
	angryFace peter{ Point{tl.x + emojiRadius * 4,tl.y }, emojiRadius };
	winkyFace nate{ Point{tl.x + emojiRadius * 6,tl.y }, emojiRadius };
	surpriseFace nora{ Point{tl.x + emojiRadius * 8,tl.y }, emojiRadius };
	fred.attach_to(win);
	bob.attach_to(win);
	peter.attach_to(win);
	nate.attach_to(win);
	nora.attach_to(win);
	win.wait_for_button();


}
