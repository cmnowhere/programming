#include <iostream>
#include <cstring>

using namespace std;

class Computer
{
	char owner[50];
public:
	Computer(const char* name)
	{
		strcpy_s(owner, name);
	}

	void Calculate()
	{
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class NotebookComp :public Computer
{
	int Battery;
public:
	NotebookComp(const char* name, int initChag)
		:Computer(name), Battery(initChag) {}

	void Charginh()
	{
		Battery += 5;
	}

	void UseBattery()
	{
		Battery -= 1;
	}

	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "���� �ʿ�" << endl;
			return;
		}
		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo()
	{
		return Battery;
	}
};

class TabletNotebook :public NotebookComp
{
	char regstPenModel[50];
public:
	TabletNotebook(const char* name, int initChag, const char* pen) :NotebookComp(name, initChag)
	{
		strcpy_s(regstPenModel, pen);
	}

	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}

		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}

		cout << "�ʱ� ������ ó���մϴ�." << endl;
		UseBattery();
	}
};

//int main()
//{
//	NotebookComp nc("��â��", 10);
//	TabletNotebook tn("������", 0, "ISE-241-242");
//	nc.MovingCal();
//	tn.Write("ISE-241-242");
//	return 0;
//}