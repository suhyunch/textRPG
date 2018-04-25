#include <iostream>
#include <time.h>
using namespace std;

enum MAIN_MENU
{
	MM_NONE,
	MM_MAP,
	MM_STORE,
	MM_INVENTORY,
	MM_EXIT
};

enum MAP_TYPE
{
	MT_NONE,
	MT_EASY,
	MT_NORMAL,
	MT_HARD,
	MT_BACK
};

enum JOB {
	JOB_NONE,
	JOB_KNIGHT,
	JOB_ARCHER,
	JOB_WIZARD
};
#define NAME_SIZE 32

struct _tagPlayer {
	char	strName[NAME_SIZE];
	char	strJobNAME[NAME_SIZE];
	JOB		eJob;
	int		iAttackMin;
	int		iAttackMax;
	int		iArmorMin;
	int		iArmorMax;
	int		iHP;
	int		iHPMAX;
	int		iMP;
	int		iMPMAX;
	int		iExp;
	int		iLevel;
};


struct _tagMonster {
	char strNAME[NAME_SIZE];
	int		iAttackMin;
	int		iAttackMax;
	int		iArmorMin;
	int		iArmorMax;
	int		iHP;
	int		iHPMAX;
	int		iMP;
	int		iMPMAX;
	int		iLevel;
	int		iExp;
	int		iGoldMin;
	int		iGoldMax;
};
int main() {
	
	srand((unsigned int)time(0));

	_tagPlayer	tPlayer = {};
	cout << "Name : ";
	cin.getline(tPlayer.strName, NAME_SIZE-1);
	//-1 for NULL
	while (true) {
		system("cls");
		cout << "**************************** LOBBY ****************************" << endl;
		cout << "1. Map" << endl;
		cout << "2. Store" << endl;
		cout << "3. Inventory" << endl;
		cout << "4. Exit" << endl;

		int iMenu;
		cin >> iMenu;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}

		if (iMenu == MM_EXIT)
			break;


		switch (iMenu) {
		case MM_MAP:
			while (true) {
				system("cls");
				
				cout << "1. Easy" << endl;
				cout << "2. NORMAL" << endl;
				cout << "3. HARD" << endl;
				cout << "4. BACK" << endl;
				cout << "Select the map : ";
				cin >> iMenu;

				if (cin.fail()) {
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}

				if (iMenu == MT_BACK)
					break;
			}
			break;
		case MM_STORE :
			break;
		case MM_INVENTORY :
			break;
		}
	}





	return 0;
}
