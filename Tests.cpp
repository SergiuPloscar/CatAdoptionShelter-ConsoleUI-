//#include <assert.h>
//#include "Tests.h"
//#include "Cat.h"
//#include "DynamicVector.h"
//#include "CatRepository.h"
//#include "CatController.h"
//#include <string>
//using namespace std;
//void Tests::TestCatEqual()
//{
//	Cat c1 = Cat{ "Tabby","Tubcat",5,"https://www.tubcat.com/TUBCAT.jpg",40.2 };
//	Cat c2 = Cat{ "Tabby","Tubcat",5,"https://www.tubcat.com/TUBCAT.jpg",40.2 };
//	Cat c3 = Cat{ "Birmanese","Inka",1,"https://imgur.com/a/e2atK",15.2 };
//	assert(c1 == c2);
//	assert(!(c1 == c3));
//	assert(!(c2 == c3));
//}
//void Tests::TestCatCopy()
//{
//	Cat c1 = Cat{ "Tabby","Tubcat",5,"https://www.tubcat.com/TUBCAT.jpg",40.2 };
//	Cat c3 = Cat{ "Birmanese","Inka",1,"https://imgur.com/a/e2atK", 22 };
//	assert(!(c1 == c3));
//	c3 = c1;
//	c1.showPhoto();
//	c3.showPhoto();
//	assert(c1 == c3);
//}
//void Tests::TestCat()
//{	
//	Tests::TestCatEqual();
//	Tests::TestCatCopy();
//}
//void Tests::TestResize()
//{
//
//	std::vector<Cat> C;
//	Cat c1 = Cat{ "Tabby","Tubcat",5,"https://www.tubcat.com/TUBCAT.jpg",40.2 };
//	Cat c2 = Cat{ "Tabby","Tubcatt",5,"https://www.tubcat.com/TUBCAT.jpg" ,40.2 };
//	Cat c3 = Cat{ "Birmanese","Inka",1,"https://imgur.com/a/e2atK",22 };
//	C.push_back(c1);
//	C.push_back(c2);
//	C.push_back(c3);
////	assert(C.capacity() == 4);
//}
//void Tests::TestAddCat()
//{
//	std::vector<Cat> C;
//	Cat c1 = Cat{ "Tabby","Tubcat",5,"https://www.tubcat.com/TUBCAT.jpg",40.2 };
//	Cat c2 = Cat{ "Birmanese","Inka",1,"https://imgur.com/a/e2atK" ,22};
//	assert(C.size() == 0);
//	C.push_back(c1);
//	assert(C.size() == 1);
//	C.push_back(c2);
//	assert(C.size() == 2);
//	C.push_back(c2);
//}
//void Tests::TestDeleteCat()
//{
//	std::vector<Cat> C;
//	Cat c1 = Cat{ "Tabby","Tubcat",5,"https://www.tubcat.com/TUBCAT.jpg",40.2 };
//	Cat c2 = Cat{ "Birmanese","Inka",1,"https://imgur.com/a/e2atK",22 };
//	assert(C.size() == 0);
//	C.push_back(c1);
//	assert(C.size() == 1);
//	C.push_back(c2);
//	assert(C.size() == 2);
//	C.erase(C.begin());
//	assert(C.size() == 1);
//	C.erase(C.begin());
//	assert(C.size() == 0);
//}
///* void Tests::TestUpdateCat()
//{
//	
//	CatRepository R;
//	Cat c1 = Cat{ "Tabby","Tubcat",5,"https://www.tubcat.com/TUBCAT.jpg",40.2};
//	Cat c2 = Cat{ "Birmanese","Inka",1,"https://imgur.com/a/e2atK",22};
//	R.getCatList().push_back(c1);
//	R.getCatList().push_back(c2);
//	//R.displayCatAtVec(0);
//	R.updateCatR(0, "Test", "TestCat", 11, "TestLink",12);
//	//R.displayCatAtVec(0);
//	assert(R.getCatList()[0].getBreed() == "Test");
//	assert(R.getCatList()[0].getName() == "TestCat");
//	assert(R.getCatList()[0].getAge() == 11);
//	assert(R.getCatList()[0].getPhotoSource() == "TestLink");
//	assert(R.getCatList()[0].getWeight() == 12);
//	assert(R.updateCatR(8, "Test", "TestCat", 11, "TestLink",12) == 0);
//
//} */
///*void Tests::TestOperatorDelete()
//{
//		std::vector<Cat> v ;
//		Cat c1 = Cat{ "Tabby","MeatBall",4,"http://i.dailymail.co.uk/i/pix/2014/01/31/article-2548957-1B18E81700000578-293_638x627.jpg",40.2 };
//		Cat c2 = Cat{ "Orange\White Tabby","Meow",6,"https://upload.wikimedia.org/wikipedia/en/f/f5/Meow_the_fat_cat.jpg" ,23};
//		Cat c3 = Cat{ "Orange\White Tabby","Garfield",10,"http://msnbcmedia.msn.com/j/today/sections/blogs/animaltracks/june%202012/garfield_scale1.nbcnews-ux-1024-900.jpg",25 };
//		Cat c4 = Cat{ "Siamese","Katy",10,"https://i0.wp.com/worth-seeing.com/wp-content/uploads/2017/12/Fat-cat-123-696x521.jpg",10.5 };
//		Cat c5 = Cat{ "Maine Coon","Mitzi",2,"https://metrouk2.files.wordpress.com/2017/05/pri_39765840.jpg?w=620&h=425&crop=1",11 };
//		Cat c6 = Cat{ "Idek","Cat",2,"https://metrouk2.files.wordpress.com/2017/05/pri_39765840.jpg?w=620&h=425&crop=1",100};
//		v.push_back(c1);
//		v.push_back(c2);
//		v.push_back(c3);
//		v.push_back(c4);
//		v.push_back(c5);
//		v.erase(v.begin() );
//		v.erase(v.begin() + 3);
//	//	v.erase(v.begin() + 5);
//		for (int i = 0;i < v.size();i++)
//		{
//			assert(!(v[i] == c1));
//			assert(!(v[i] == c4));
//			assert(!(v[i] == c6));
//		}
//} */
//void Tests::TestDynamicCopy()
//{
//	std::vector<Cat> v ;
//	Cat c1 = Cat{ "Tabby","MeatBall",4,"http://i.dailymail.co.uk/i/pix/2014/01/31/article-2548957-1B18E81700000578-293_638x627.jpg",40.2 };
//	Cat c2 = Cat{ "Orange\White Tabby","Meow",6,"https://upload.wikimedia.org/wikipedia/en/f/f5/Meow_the_fat_cat.jpg",23 };
//	Cat c3 = Cat{ "Orange\White Tabby","Garfield",10,"http://msnbcmedia.msn.com/j/today/sections/blogs/animaltracks/june%202012/garfield_scale1.nbcnews-ux-1024-900.jpg",25 };
//	Cat c4 = Cat{ "Siamese","Katy",10,"https://i0.wp.com/worth-seeing.com/wp-content/uploads/2017/12/Fat-cat-123-696x521.jpg",10.5};
//	Cat c5 = Cat{ "Maine Coon","Mitzi",2,"https://metrouk2.files.wordpress.com/2017/05/pri_39765840.jpg?w=620&h=425&crop=1",11};
//	Cat c6 = Cat{ "Idek","Cat",2,"https://metrouk2.files.wordpress.com/2017/05/pri_39765840.jpg?w=620&h=425&crop=1",100 };
//	v.push_back(c1);
//	v.push_back(c2);
//	v.push_back(c3);
//	v.push_back(c4);
//	v.push_back(c5);
//	std::vector<Cat>E = v;
//	assert(E.size() == v.size());
////	assert(E.capacity() == v.capacity());
//	for (int j = 0;j < E.size();j++)
//		assert(E[j] == v[j]);
//	std::vector<Cat> C;
//	C = v;
//	assert(C.size() == v.size());
////	assert(C.capacity() == v.capacity());
//	for (int i = 0;i < C.size();i++)
//		assert(C[i] == v[i]);
//	
//}
//void Tests::TestDynamic()
//{
//	Tests::TestAddCat();
//	Tests::TestDeleteCat();
//	//Tests::TestUpdateCat();
//	//Tests::TestOperatorDelete();
//	Tests::TestDynamicCopy();
//	Tests::TestResize();
//}
//void Tests::TestRepoAdd()
//{
//	CatRepository r;
//	CatController c = { r };
//	assert(c.addCatC("Test", "TestCat", 11, "TestLink",12) == 1);
//	assert(c.addCatC("Test", "TestCat", 11, "TestLink",12) == 0);
//}
//void Tests::TestRepoDel()
//{
//	CatRepository r;
//	CatController c = { r };
//	c.addCatC("Test", "TestCat", 11, "TestLink",12);
//	assert(c.deleteCatC(0) == 1);
//	assert(c.deleteCatC(0) == 0);
//}
//void Tests::TestRepoUpd()
//{
//	CatRepository r;
//	CatController c = { r };
//	c.addCatC("Test", "TestCat", 11, "TestLink",12);
//	assert(c.updateCatC(0, "test", "testcat", 12, "testlink",13) == 1);
//	assert(c.updateCatC(10, "test", "testcat", 12, "testlink",13) == 0);
//}
//void Tests::TestAdoptionsAdd()
//{
//	CatRepository r;
//	CatController c = { r };
//	Cat c1 = Cat{ "Tabby","MeatBall",4,"http://i.dailymail.co.uk/i/pix/2014/01/31/article-2548957-1B18E81700000578-293_638x627.jpg",40.2 };
//	assert(c.addCatCA(c1) == 1);
//	assert(c.addCatCA(c1) == 0);
//}
//void Tests::TestController()
//{
//	Tests::TestRepoAdd();
//	Tests::TestRepoDel();
//	Tests::TestRepoUpd();
//	Tests::TestAdoptionsAdd();
//	Tests::TestFilter();
//	
//}
//void Tests::TestFilter()
//{
//	CatRepository r;
//	CatController c = { r };
//	c.addCatC("Tabby","MeatBall",4,"http://i.dailymail.co.uk/i/pix/2014/01/31/article-2548957-1B18E81700000578-293_638x627.jpg",40.2);
//	c.addCatC("Maine Coon","Catstradamus",6,"http://akns-images.eonline.com/eol_images/Entire_Site/2016715/rs_300x300-160815113635-300-fat-cat.jpg?fit=around|700:700&crop=700:700;center,top&output-quality=100",23);
//	c.addCatC("Orange\White Tabby","Garfield",10,"http://msnbcmedia.msn.com/j/today/sections/blogs/animaltracks/june%202012/garfield_scale1.nbcnews-ux-1024-900.jpg",25);
//	c.addCatC("Siamese","Katy",10,"https://i0.wp.com/worth-seeing.com/wp-content/uploads/2017/12/Fat-cat-123-696x521.jpg",5);
//	c.addCatC("Maine Coon","Mitzi",2,"https://metrouk2.files.wordpress.com/2017/05/pri_39765840.jpg?w=620&h=425&crop=1",12);
//	c.addCatC("Tabby","Tubcat",5,"https://www.tubcat.com/TUBCAT.jpg",44);
//	c.addCatC("Maine Coon","Riley",2,"http://static.neatorama.com/images/2006-05/riley-maine-coon-cat.jpg",14.2);
//	c.addCatC("Dragon Li","Xu Jirong",4,"http://static.neatorama.com/images/2008-04/xu-jirong-fat-cat.jpg",22.1);
//	c.addCatC("Scottish Fold","Munch",4,"https://i.pinimg.com/originals/ed/22/82/ed228247497e5b2d2a243a8513d21386.jpg",4.2);
//	std::vector<Cat> V{ 10 };
//	assert(c.filterCats("Tabby", 100, V)==1);
//	assert(c.filterCats("Agagagag", 0, V) == 0);
//}
//
//void Tests::TestAll()
//{
//	Tests::TestCat();
//	Tests::TestDynamic();
//	Tests::TestController();
//}