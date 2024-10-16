#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::VideoMode vm(1920, 1080);
	sf::RenderWindow window(vm, "Timber!!!", sf::Style::Default);

	sf::Texture texBackgound;
	texBackgound.loadFromFile("graphics/background.png");
	
	sf::Sprite spriteBackground;
	spriteBackground.setTexture(texBackgound);
	spriteBackground.setPosition(0.f, 0.f);


	sf::Texture texCloud;
	texCloud.loadFromFile("graphics/cloud.png");

	sf::Sprite spriteCloud;
	spriteCloud.setTexture(texCloud);
	spriteCloud.setPosition(0.f, 0.f);


	sf::Texture texBee;
	texBee.loadFromFile("graphics/bee.png");




	//sf::Vector2f position();
	//spriteBackground.setOrigin(1920/2,1080/2);

	while (window.isOpen())
	{
		sf::Event ev;
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case sf::Event::EventType::Closed:
				window.close();
				break;
			default:
				break;
			}
		}

		// 업데이트 

		window.clear();

		window.draw(spriteBackground);

		window.display();
	}

	return 0;
}