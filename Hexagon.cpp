#include "Hexagon.h"

sf::Hexagon::Hexagon(float size, int orientation)
{
	const float s = 1.f*(10.f * size);
	const float h = 0.5f*(10.f * size);         //sin(30°)
	const float r = 0.86602540f*(10.f * size);  //cos(30°)

	this->setPointCount(6);
	this->setPoint(0, sf::Vector2f(0.f, -s));
	this->setPoint(1, sf::Vector2f(-r, -h));
	this->setPoint(2, sf::Vector2f(-r, +h));
	this->setPoint(3, sf::Vector2f(0.f, +s));
	this->setPoint(4, sf::Vector2f(+r, +h));
	this->setPoint(5, sf::Vector2f(+r, -h));
	this->rotate(orientation);
}