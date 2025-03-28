#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Vector2.hpp>

using namespace sf;

class Mikey {
private:
    Vector2f m_Position;
    Texture m_Texture;
    Sprite m_Sprite;
    bool m_LeftPressed;
    bool m_RightPressed;
    float m_Speed;
public:
    Mikey();
};
