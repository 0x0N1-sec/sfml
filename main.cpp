#include <SFML/Graphics.hpp>
#include <iostream

int main(int argc, char const *argv[])
{
  const int width = 1280;
  const int height = 720;
  sf::RenderWindow window(sf::VideoMode(width, height), "SFML Works!");
  window.setFramerateLimit(60);

  int r = 0;
  int g = 255;
  int b = 255;

  sf::CircleShape circle(50);
  circle.setFillColor(sf::Color::Color(r, g, b);
  circle.setPosition(300.0f, 300.0f);
  float circleMoveSpeed = 0.5f;

  sf::Font myFont;

  if (!myFont.loadFromFile("Fonts/tech.ttf"))
  {
    std::cerr << "Could not load font!\n";
    exit(-1);
  }

  sf::Text text("Sample Text", myFont, 24);

  text.setPosition(0, wHeight - (float)text.getCharacterSize());

  while (window.isOpen())
  {
    if (event.type == sf::Event::Closed)
    {   
      window.close();
    }

    if (event.type == sf::Event::KeyPressed)
    {
      std::cout << "Key pressed with code = " << event.key.code << "\n";

      if (even.key.code == sf::Keyboard::X)
      {
        circleMoveSpeed *= -1.0f;
  }
  return 0;
}
