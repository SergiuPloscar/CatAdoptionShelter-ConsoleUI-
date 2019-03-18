#include "UI.h"
#include <string>
#include "RepositoryException.h"
#include "HTMLAdoptions.h"
#include "CSVAdopt.h"
using namespace std;

void UI::printMenu()
{
	cout << endl;
	cout << "1 - I am an administrator" << endl;
	cout << "2 - I am a user" << endl;
	cout << "0 - Exit." << endl;
}
void UI::printRepositoryMenu()
{
	cout << "Possible commands: " << endl;
	cout << "\t 1 - Display all." << endl;
	cout << "\t 2 - Add a cat" << endl;
	cout << "\t 3 - Delete a cat" << endl;
	cout << "\t 4 - Update a cat" << endl;
	cout << "\t 5 - Show all cats with a weight smaller than a given value" << endl;
	cout << "\t 0 - Back." << endl;
}
void UI::printRepositoryMenu2()
{
	cout << "Possible commands: " << endl;
	cout << "\t 1 - Show cats one by one" << endl;
	cout << "\t 2 - Show cats of given breed with age less than a given value" << endl;
	cout << "\t 3 - Show adoption list" << endl;
	cout << "\t 0 - Back." << endl;
}
int UI::addCatUI()
{
	cout << "Enter the breed: ";
	std::string breed;
	cin >> breed;
	cout << "Enter the name ";
	std::string name;
	cin >> name;
	cout << "Enter the age ";
	std::int32_t age;
	cin >> age;
	cout << "Enter the photo source ";
	std::string photosource;
	cin >> photosource;
	cout << "Enter the weight ";
	std::double_t weight;
	cin >> weight;
	int res;
	try
	{
		res= this->ctrl.addCatC(breed, name, age, photosource, weight);
		return res;
	}
	catch (CatException& e)
	{
		for (auto d : e.getErrors())
			cout << d;
		res = 2;
		return res;
	}
	catch (RepositoryException& e)
	{
		cout << e.what() << endl;
		res = 2;
		return res;
	}
	catch (FileException& e)
	{
		cout << e.what() << endl;
		res = 2;
		return res;
	}

}
int UI::deleteCatUI()
{
	cout << "Enter the position: ";
	int pos;
	cin >> pos;
	return this->ctrl.deleteCatC(pos);
}
int UI::updateCatUI()
{
	cout << "Enter the position: ";
	int pos;
	cin >> pos;
	cout << "Enter the new breed: ";
	std::string breed;
	cin >> breed;
	cout << "Enter the new name ";
	std::string name;
	cin >> name;
	cout << "Enter the age ";
	std::int32_t age;
	cin >> age;
	cout << "Enter the photo source ";
	std::string photosource;
	cin >> photosource;
	cout << "Enter the weight ";
	std::double_t weight;
	cin >> weight;
	int res;
	try
	{
		res = this->ctrl.updateCatC(pos,breed, name, age, photosource, weight);
		return res;
	}
	catch (CatException& e)
	{
		for (auto d : e.getErrors())
			cout << d;
		res = 2;
		return res;
	}
	catch (RepositoryException& e)
	{
		cout << e.what() << endl;
		res = 2;
		return res;
	}
	catch (FileException& e)
	{
		cout << e.what() << endl;
		res = 2;
		return res;
	}
}
void UI::displayAllCats()
{
	std::vector<Cat> v = this->ctrl.getRepo().getCatList();
	if (v.size() == 0)
	{
		cout << "There are no cats in the repository." << endl;
		return;
	}

	for (int i = 0; i < v.size(); i++)
	{
		Cat c = v[i];
		cout <<i<<". "<< c.getName() << " - " << c.getBreed() << " and is " << c.getAge() << " years old and weights around " << c.getWeight() << " kilograms" << endl;
		//c.showPhoto();
	}
}
void UI::displayAllAdoptions()
{
	std::vector<Cat> v = this->ctrl.getRepo().getAdoptions();
	if (v.size() == 0)
	{
		cout << "There are no cats in the repository." << endl;
		return;
	}

	for (int i = 0; i < v.size(); i++)
	{
		Cat c = v[i];
		cout << i << ". " << c.getName() << " - " << c.getBreed() << " and is " << c.getAge() << " years old and weights around " << c.getWeight() << " kilograms" << endl;
		c.showPhoto();
	}
}
void UI::displayCatAt(const int pos)
{
	Cat c = this->ctrl.getRepo().getCatList()[pos];
	cout<<c.getName()<< " - " << c.getBreed() << " and is " << c.getAge() << " years old and weights around " << c.getWeight() << " kilograms" << endl;
	//c.showPhoto();
}
void UI::run()
{
	while (true)
	{
		int command;
		cout << "What are you? " << endl;
		UI::printMenu();
		cin >> command;
		if (command == 1)
		{
			while (true)
			{
				int command2;
				UI::printRepositoryMenu();
				cin >> command2;
				if (command2 == 1)
				{
					UI::displayAllCats();
				}
				else if (command2 == 2)
				{
					int res;
					res = UI::addCatUI();
					if (res == 0)
						cout << "Cat already exists" << endl;
					else if(res==1)
						cout << "Cat was added " << endl;
				}
				else if (command2 == 3)
				{
					int res;
					res = UI::deleteCatUI();
					if (res == 0)
						cout << "No cat at that position" << endl;
					else
						cout << "Cat was deleted" << endl;
				}
				else if (command2 == 4)
				{
					int res;
					res = UI::updateCatUI();
					if (res == 0)
						cout << "No cat at that position" << endl;
					else if (res==1)
						cout << "Cat was updated " << endl;
				}
				else if (command2 == 5)
				{
					cout << "Give the weight ";
					int w;
					cin >> w;
					std::vector<Cat> C;
					int res = this->ctrl.weightCats(w,C);
					if (res == 1)
					{
						for (int i = 0;i < C.size();i++)
						{
							Cat c = C[i];
							std::cout << c.getName() << " - " << c.getBreed() << " and is " << c.getAge() << " years old and weights around " << c.getWeight() << " kilograms \n";
							c.showPhoto();
						}
					}
				}
				else if (command2 == 0)
					break;
				else;

			}
			
		}
		if (command == 2)
		{
			
			while (true)
			{
				UI::printRepositoryMenu2();
				int command3;
				cin >> command3;
				if (command3 == 1)
				{
					int i=0,ok=3;
					while (ok != 0)
					{
						if (i >= this->ctrl.getRepo().getCatList().size())
							i = 0;
						displayCatAt(i);
						cout << "Press 1 to adopt and go to next , 2 to just go to next or 0 to stop looking: ";
						cin >> ok;
						if (ok == 1)
						{
							this->ctrl.addCatCA(this->ctrl.getRepo().getCatList()[i]);
							i++;
						}
						if (ok == 2)
							i++;
					}
				}
				else if (command3 == 2)
				{
					cout << "Give the breed: ";
					string s,e;
					getline(cin, s);
					getline(cin, e);
					cout << "Give the age: ";
					int a;
					cin >> a;
					std::vector<Cat> C;
					int res = this->ctrl.filterCats(e, a, C);
					if (res == 1)
					{
						int i = 0, ok = 3;
						while (ok != 0)
						{
							if (i >= C.size())
								i = 0;
							Cat c = C[i];
							std::cout << c.getName() << " - " << c.getBreed() << " and is " << c.getAge() << " years old and weights around " << c.getWeight() << " kilograms \n";
							c.showPhoto();
							cout << "Press 1 to adopt and go to next , 2 to just go to next or 0 to stop looking: ";
							cin >> ok;
							if (ok == 1)
							{
								this->ctrl.addCatCA(C[i]);
								i++;
							}
							if (ok == 2)
								i++;
						}
					}

				}
				else if (command3 == 3)
				{
					cout << "Press 1 for HTML file or 2 for CSV file" << endl;
					int fop;
					cin >> fop;
					if (fop == 1)
					{
						
						FileRepository*file = new HTMLAdoptionList;
						this->ctrl.setFile(file);
						this->ctrl.getFile()->writetoFile(this->ctrl.getRepo().getAdoptions());
						this->ctrl.getFile()->displayAdoptionList();
						
					}
					else if (fop == 2)
					{
						FileRepository* file1 = new CSVAdoptionList();
						this->ctrl.setFile(file1);
						this->ctrl.getFile()->writetoFile(this->ctrl.getRepo().getAdoptions());
						this->ctrl.getFile()->displayAdoptionList();
					}
				}
				else if (command3 == 0)
					break;
				else
					;
			}
		}
		if (command == 0)
			break;
		else;
			
		
	}
}
