// ---------------------------------------------------------------------------

#ifndef NodeH
#define NodeH

class Node {
private:
	int serialNumber;
	String surname;
	String name;
	String patronymic;
	String homeAddress;
	String registrationDate;

	bool isCompleted = false;

public:
	Node *pNext = NULL;

	Node();
	Node(int SerialNumber, String Surname, String Name, String Patronymic,
		String HomeAddress, String RegistrationDate);

	int GetSerialNumber() {
		return serialNumber;
	}

	String GetSurname() {
		return surname;
	}

	String GetName() {
		return name;
	}

	String GetPatronymic() {
		return patronymic;
	}

	String GetHomeAddress() {
		return homeAddress;
	}

	String GetRegistrationDate() {
		return registrationDate;
	}

	bool GetIsCompleted() {
		return isCompleted;
	}
};
// ---------------------------------------------------------------------------
#endif
