#include "mikey.h"
#include <SFML/Graphics/Sprite.hpp>


Mikey::Mikey() :
    m_Position(300.0f, 300.0f),
    m_Speed(400.0f),
    m_Sprite(m_Texture)
{
    if (!m_Texture.loadFromFile("resources/morki.png")) {
            throw std::runtime_error("Failed to load texture!");
    }
}
