#pragma once
#include <SFML/Graphics.hpp>

struct Dummy {
    int x;
    int y;
};

void getAttacked(sf::Sprite& dummy, sf::RectangleShape& weaponHitbox, bool& isAttacking, sf::Sprite& shuriken);
