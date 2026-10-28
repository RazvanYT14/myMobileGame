#include "Dummy.hpp"
#include "data.hpp"

void getAttacked(sf::Sprite& dummy, sf::RectangleShape& weaponHitbox, bool& isAttacking, sf::Sprite& shuriken) {
    sf::FloatRect rect1 = weaponHitbox.getGlobalBounds();
    sf::FloatRect rect2 = dummy.getGlobalBounds();
    sf::FloatRect rect3 = shuriken.getGlobalBounds();

    if (rect1.findIntersection(rect2).has_value() && isAttacking) {
        dummy.setColor(sf::Color(220, 20, 60, 200));
    }
    else if (rect3.findIntersection(rect2).has_value()) {
        dummy.setColor(sf::Color(220, 20, 60, 200));
    }
    else {
        dummy.setColor(sf::Color::White);
    }
}

