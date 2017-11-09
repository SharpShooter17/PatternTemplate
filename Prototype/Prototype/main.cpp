#include <iostream>
#include <map>
#include <string>
#include <cstdint>

using namespace std;

enum RECORD_TYPE_en
{
	CAR,
	BIKE,
	PERSON
};

/**
* Record is the Prototype
*/

class Record
{
public:

	Record() {}

	virtual ~Record() {}

	virtual Record* Clone() const = 0;

	virtual void Print() const = 0;
};

/**
* CarRecord is Concrete Prototype
*/

class CarRecord : public Record
{
private:
	string m_oStrCarName;

	uint32_t m_ui32ID;

public:

	CarRecord(const string& _oStrCarName, uint32_t _ui32ID)
		: Record(), m_oStrCarName(_oStrCarName),
		m_ui32ID(_ui32ID)
	{
	}

	CarRecord(const CarRecord& _oCarRecord)
		: Record()
	{
		m_oStrCarName = _oCarRecord.m_oStrCarName;
		m_ui32ID = _oCarRecord.m_ui32ID;
	}

	~CarRecord() {}

	CarRecord* Clone() const
	{
		return new CarRecord(*this);
	}

	void Print() const
	{
		cout << "Car Record" << endl
			<< "Name  : " << m_oStrCarName << endl
			<< "Number: " << m_ui32ID << endl << endl;
	}
};


/**
* BikeRecord is the Concrete Prototype
*/

class BikeRecord : public Record
{
private:
	string m_oStrBikeName;

	uint32_t m_ui32ID;

public:
	BikeRecord(const string& _oStrBikeName, uint32_t _ui32ID)
		: Record(), m_oStrBikeName(_oStrBikeName),
		m_ui32ID(_ui32ID)
	{
	}

	BikeRecord(const BikeRecord& _oBikeRecord)
		: Record()
	{
		m_oStrBikeName = _oBikeRecord.m_oStrBikeName;
		m_ui32ID = _oBikeRecord.m_ui32ID;
	}

	~BikeRecord() {}

	BikeRecord* Clone() const
	{
		return new BikeRecord(*this);
	}

	void Print() const
	{
		cout << "Bike Record" << endl
			<< "Name  : " << m_oStrBikeName << endl
			<< "Number: " << m_ui32ID << endl << endl;
	}
};


/**
* PersonRecord is the Concrete Prototype
*/

class PersonRecord : public Record
{
private:
	string m_oStrPersonName;

	uint32_t m_ui32Age;

public:
	PersonRecord(const string& _oStrPersonName, uint32_t _ui32Age)
		: Record(), m_oStrPersonName(_oStrPersonName),
		m_ui32Age(_ui32Age)
	{
	}

	PersonRecord(const PersonRecord& _oPersonRecord)
		: Record()
	{
		m_oStrPersonName = _oPersonRecord.m_oStrPersonName;
		m_ui32Age = _oPersonRecord.m_ui32Age;
	}

	~PersonRecord() {}

	Record* Clone() const
	{
		return new PersonRecord(*this);
	}

	void Print() const
	{
		cout << "Person Record" << endl
			<< "Name : " << m_oStrPersonName << endl
			<< "Age  : " << m_ui32Age << endl << endl;
	}
};


/**
* RecordFactory is the client
*/

class RecordFactory
{
private:
	map<RECORD_TYPE_en, Record* > m_oMapRecordReference;

public:
	RecordFactory()
	{
		m_oMapRecordReference[CAR] = new CarRecord("Ferrari", 5050);
		m_oMapRecordReference[BIKE] = new BikeRecord("Yamaha", 2525);
		m_oMapRecordReference[PERSON] = new PersonRecord("Tom", 25);
	}

	~RecordFactory()
	{
		delete m_oMapRecordReference[CAR];
		delete m_oMapRecordReference[BIKE];
		delete m_oMapRecordReference[PERSON];
	}

	Record* CreateRecord(RECORD_TYPE_en enType)
	{
		return m_oMapRecordReference[enType]->Clone();
	}
};

int main()
{
	RecordFactory* poRecordFactory = new RecordFactory();

	Record* poRecord;
	poRecord = poRecordFactory->CreateRecord(CAR);
	poRecord->Print();
	delete poRecord;

	poRecord = poRecordFactory->CreateRecord(BIKE);
	poRecord->Print();
	delete poRecord;

	poRecord = poRecordFactory->CreateRecord(PERSON);
	poRecord->Print();
	delete poRecord;

	delete poRecordFactory;
	return 0;
}