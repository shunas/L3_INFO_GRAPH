#include <iostream>
#include "Image.hpp"
#include "Camera.hpp"
#include "Scene.hpp"

int main()
{
	Camera c;
	Scene s;
	Image i;
	c.genererImage(s,i);
	i.save("caca_bleu.ppm");
	return 0;
}
