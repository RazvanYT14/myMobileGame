#pragma once
#include "tilemap.hpp"
#include "data.hpp"

void groundRender(
    sf::RenderWindow& window,
    char groundMap[N][N],
    sf::Sprite& grass,
    sf::Sprite& grass2,
    sf::Sprite& spikes,
    sf::Sprite& Wall1,
    sf::Sprite& Wall1_2,
    sf::Sprite& Wall1_3,
    sf::Sprite& Wall2,
    sf::Sprite& Wall2_2,
    sf::Sprite& Wall3,
    sf::Sprite& Wall3_2,
    sf::Sprite& Wall3_3,
    sf::Sprite& craftingTable,
    sf::Sprite& UpperGrass,
    sf::Sprite& stair,
    sf::Sprite& Water,
    sf::Sprite& Water1,
    sf::Sprite& Water2,
    sf::Sprite& Water3,
    sf::Sprite& Water4,
    sf::Sprite& Water5,
    sf::Sprite& Water6,
    sf::Sprite& Water7,
    sf::Sprite& Water8,
    sf::Sprite& Bridge1,
    sf::Sprite& ShadedGrass1,
    sf::Sprite& ShadedGrass2,
    sf::Sprite& ShadedGrass3,
    sf::Sprite& ShadedGrass4,
    sf::Sprite& ShadedGrass5,
    sf::Sprite& ShadedGrass6,
    sf::Sprite& ShadedGrass7,
    sf::Sprite& ShadedGrass8,
    sf::Sprite& ShadedGrass9,
    sf::Sprite& ShadedGrass10,
    sf::Sprite& ShadedGrass11,
    sf::Sprite& ShadedGrass12,
    sf::Sprite& ShadedGrass13,
    sf::Sprite& ShadedGrass14,
    sf::Sprite& ShadedGrass15,
    sf::Sprite& ShadedGrass16,
    sf::Sprite& ShadedGrass17,
    sf::Sprite& ShadedGrass18,
    sf::Sprite& ShadedGrass19,
    sf::Sprite& ShadedGrass20,
    sf::Sprite& ShadedGrass21,
    sf::Sprite& ShadedGrass22,
    sf::Sprite& ShadedGrass23,
    sf::Sprite& ShadedGrass24,
    sf::Sprite& ShadedGrass25,
    sf::View& view
) {
        sf::Vector2f viewSize = view.getSize();
        sf::Vector2f viewCenter = view.getCenter();

        int startX = std::clamp((int)((viewCenter.x - viewSize.x / 2.0f) / 40.0f) - 1, 0, N);
        int startY = std::clamp((int)((viewCenter.y - viewSize.y / 2.0f) / 40.0f) - 1, 0, N);
        int endX   = std::clamp((int)((viewCenter.x + viewSize.x / 2.0f) / 40.0f) + 1, 0, N);
        int endY   = std::clamp((int)((viewCenter.y + viewSize.y / 2.0f) / 40.0f) + 1, 0, N);

        if (startX >= endX && endX > 0) startX = endX - 1;
        if (startY >= endY && endY > 0) startY = endY - 1;

        for (int ry = startY; ry < endY; ++ry) {
            for (int rx = startX; rx < endX; ++rx) {
                if (groundMap[ry][rx] == GRASS) {
                    grass.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(grass);
                }
                else if (groundMap[ry][rx] == GRASS2) {
                    grass2.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(grass2);
                }
                else if (groundMap[ry][rx] == SPIKES) {
                    grass.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(grass);
                    spikes.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(spikes);
                }
                else if (groundMap[ry][rx] == WALL1) {
                    Wall1.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Wall1);
                }
                else if (groundMap[ry][rx] == WALL1t2) {
                    Wall1_2.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Wall1_2);
                }
                else if (groundMap[ry][rx] == WALL1t3) {
                    Wall1_3.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Wall1_3);
                }
                else if (groundMap[ry][rx] == WALL2) {
                    Wall2.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Wall2);
                }
                else if (groundMap[ry][rx] == WALL2t2) {
                    Wall2_2.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Wall2_2);
                }
                else if (groundMap[ry][rx] == WALL3) {
                    Wall3.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Wall3);
                }
                else if (groundMap[ry][rx] == WALL3t2) {
                    Wall3_2.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Wall3_2);
                }
                else if (groundMap[ry][rx] == WALL3t3) {
                    Wall3_3.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Wall3_3);
                }
                else if (groundMap[ry][rx] == CRAFTINGTABLE) {
                    craftingTable.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(craftingTable);
                }
                else if (groundMap[ry][rx] == UPPER_GRASS) {
                    UpperGrass.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(UpperGrass);
                }
                else if (groundMap[ry][rx] == STAIR) {
                    stair.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(stair);
                }
                else if (groundMap[ry][rx] == WATER) {
                    Water.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Water);
                }
                else if (groundMap[ry][rx] == WATER1) {
                    Water1.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Water1);
                }
                else if (groundMap[ry][rx] == WATER2) {
                    Water2.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Water2);
                }
                else if (groundMap[ry][rx] == WATER3) {
                    Water3.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Water3);
                }
                else if (groundMap[ry][rx] == WATER4) {
                    Water4.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Water4);
                }
                else if (groundMap[ry][rx] == WATER5) {
                    Water5.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Water5);
                }
                else if (groundMap[ry][rx] == WATER6) {
                    Water6.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Water6);
                }
                else if (groundMap[ry][rx] == WATER7) {
                    Water7.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Water7);
                }
                else if (groundMap[ry][rx] == WATER8) {
                    Water8.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Water8);
                }
                else if (groundMap[ry][rx] == BRIDGE1) {
                    Bridge1.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(Bridge1);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS1) {
                    ShadedGrass1.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass1);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS2) {
                    ShadedGrass2.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass2);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS3) {
                    ShadedGrass3.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass3);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS4) {
                    ShadedGrass4.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass4);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS5) {
                    ShadedGrass5.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass5);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS6) {
                    ShadedGrass6.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass6);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS7) {
                    ShadedGrass7.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass7);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS8) {
                    ShadedGrass8.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass8);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS9) {
                    ShadedGrass9.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass9);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS10) {
                    ShadedGrass10.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass10);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS11) {
                    ShadedGrass11.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass11);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS12) {
                    ShadedGrass12.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass12);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS13) {
                    ShadedGrass13.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass13);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS14) {
                    ShadedGrass14.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass14);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS15) {
                    ShadedGrass15.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass15);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS16) {
                    ShadedGrass16.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass16);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS17) {
                    ShadedGrass17.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass17);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS18) {
                    ShadedGrass18.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass18);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS18) {
                    ShadedGrass18.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass18);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS19) {
                    ShadedGrass19.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass19);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS20) {
                    ShadedGrass20.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass20);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS21) {
                    ShadedGrass21.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass21);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS22) {
                    ShadedGrass22.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass22);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS23) {
                    ShadedGrass23.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass23);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS24) {
                    ShadedGrass24.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass24);
                }
                else if (groundMap[ry][rx] == SHADEDGRASS25) {
                    ShadedGrass25.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                    window.draw(ShadedGrass25);
                }
            }
        }
}

void propsRender(sf::RenderWindow& window, char propsMap[N][N], sf::View& view,
                 sf::Sprite& Bush, sf::Sprite& dummy, sf::RectangleShape& weaponHitbox,
                 bool& isAttacking, sf::Sprite& shuriken) {

    sf::Vector2f viewSize = view.getSize();
    sf::Vector2f viewCenter = view.getCenter();

    int startX = std::clamp((int)((viewCenter.x - viewSize.x / 2.0f) / 40.0f) - 1, 0, N);
    int startY = std::clamp((int)((viewCenter.y - viewSize.y / 2.0f) / 40.0f) - 1, 0, N);
    int endX   = std::clamp((int)((viewCenter.x + viewSize.x / 2.0f) / 40.0f) + 1, 0, N);
    int endY   = std::clamp((int)((viewCenter.y + viewSize.y / 2.0f) / 40.0f) + 1, 0, N);

    for(int ry = startY; ry < endY; ++ry) {
        for(int rx = startX; rx < endX; ++rx) {
            if(propsMap[ry][rx] == BUSH) {
                Bush.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                window.draw(Bush);
            }
            else if(propsMap[ry][rx] == DUMMY) {
                dummy.setPosition(sf::Vector2f({rx * 40.0f, ry * 40.0f}));
                getAttacked(dummy, weaponHitbox, isAttacking, shuriken);

                window.draw(dummy);
            }
        }
    }
}
