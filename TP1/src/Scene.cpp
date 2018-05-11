#include "Scene.hpp"

Scene::Scene():
fond(new Couleur(0,0,0))
{}

Scene::~Scene()
{
	for(Objet * o:objets)
		delete o;
	for(Source * s:sources)
		delete s;
	delete fond;
}

void Scene::setFond(Couleur * f)
{
	delete fond;
	fond =f;
}

void Scene::ajouterObjet(Objet * obj)
{
	objets.push_back(obj);
}

void Scene::ajouterSource(Source * src)
{
	sources.push_back(src);
}

bool Scene::intersection() const
{
	return false;
}


void Scene::charger(std::string nom)
{
	std::ifstream fichier(nom,std::ios::in);
	if(fichier)
	{
		Materiau m;
		std::string str;
		while(fichier.eof())
		{
			fichier >> str;

			if(str == "sphere")
			{
				float xc,yc,zc,r;
				fichier >> xc >> yc >> zc >> r;
				Point p(xc,yc,zc);
				Sphere *s=new Sphere(m,p,r);
				objets.push_back(s);
			}

			if(str =="plan")
			{
				float a,b,c,d;
				fichier >> a >> b >> c >> d;
				Plan *p=new Plan(m,a,b,c,d);
				objets.push_back(p);
			}

			if(str == "source")
			{
				float x,y,z;
				unsigned int rouge,vert,bleu;
				fichier >> x >> y >> z >> rouge >> vert >> bleu;
				Point p(x,y,z);
				Intensite i(rouge,vert,bleu);
				Source *s= new Source(p,i);
				sources.push_back(s);
			}

			if(str == "materiau")
			{
				float rouge,vert,bleu,kd,ks;
				int s;
				fichier >> rouge >> vert >>bleu >> kd >> ks >>s;
				Couleur c(rouge,vert,bleu);
				m.setAttibut(c,kd,ks,s);
			}

			if(str == "fond")
			{
				float rouge,vert,bleu;
				fichier >> rouge >> vert >> bleu;
				Couleur *c=new Couleur(rouge,vert,bleu);
				setFond(c);
			}

			if(str == "#")
			{
				getline(fichier,str);
			}
		}
	}
}


void Scene::afficher() const
{
	std::cout << "contenu de la scène :\n";
	for (Objet * o:objets)
	{
		std::cout << o;
	}


}

