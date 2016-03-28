#ifndef _HEXAGON_
#define _HEXAGON_

#include <SFML/Graphics.hpp>

namespace sf{
	class Hexagon;
};
	
class sf::Hexagon : public sf::ConvexShape {
public:
	Hexagon(float size, int orientation = 0);
};

#endif