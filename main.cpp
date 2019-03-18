#include "Cat.h"
#include "UI.h"
#include "Tests.h"
#include <crtdbg.h>

using namespace std;
int main()
{
	CatRepository repo{};
	repo.readFromFile();
	/*Cat c1 = Cat{ "Tabby","MeatBall",4,"http://i.dailymail.co.uk/i/pix/2014/01/31/article-2548957-1B18E81700000578-293_638x627.jpg",19 };
	Cat c2= Cat{ "Maine Coon","Catstradamus",6,"http://akns-images.eonline.com/eol_images/Entire_Site/2016715/rs_300x300-160815113635-300-fat-cat.jpg?fit=around|700:700&crop=700:700;center,top&output-quality=100" ,16.5};
	Cat c3 = Cat{ "Orange\White Tabby","Garfield",10,"http://msnbcmedia.msn.com/j/today/sections/blogs/animaltracks/june%202012/garfield_scale1.nbcnews-ux-1024-900.jpg",17.2 };
	Cat c4 = Cat{ "Siamese","Katy",10,"https://i0.wp.com/worth-seeing.com/wp-content/uploads/2017/12/Fat-cat-123-696x521.jpg",30};
	Cat c5 = Cat{ "Maine Coon","Mitzi",2,"https://metrouk2.files.wordpress.com/2017/05/pri_39765840.jpg?w=620&h=425&crop=1",22.3};
	Cat c6 = Cat{ "Tabby","Tubcat",5,"https://www.tubcat.com/TUBCAT.jpg",44.2 };
	Cat c7 = Cat{ "Maine Coon","Riley",2,"http://static.neatorama.com/images/2006-05/riley-maine-coon-cat.jpg",14.8 };
	Cat c8 = Cat{ "Dragon Li","Xu Jirong",4,"http://static.neatorama.com/images/2008-04/xu-jirong-fat-cat.jpg",15.22 };
	Cat c9 = Cat{ "Scottish Fold","Munch",4,"https://i.pinimg.com/originals/ed/22/82/ed228247497e5b2d2a243a8513d21386.jpg",3.5 };
	Cat c10 = Cat{ "Birmanese","Inka",1,"https://imgur.com/a/e2atK",10 };
	repo.addCatR(c1);
	repo.addCatR(c2);
	repo.addCatR(c3);
	repo.addCatR(c4);
	repo.addCatR(c5);
	repo.addCatR(c6);
	repo.addCatR(c7);
	repo.addCatR(c8);
	repo.addCatR(c9);
	repo.addCatR(c10);  */
	CatController ctrl{ repo };
	UI ui{ ctrl };
	ui.run(); 
	//Tests::TestAll();
	

	return 0;
}