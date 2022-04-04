#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
	string FirstName; 
	string Surname; 
	string LastName; 
public:
	string GetFirstName();
	string GetSurname();
	string GetLastname();
	void SetFirstName(string firsname);
	void SetSurname(string Surname);
	void SetLastname(string lastname);
};

struct Manager
{
	void SetGroupName(Group& group, string newgroupname);
	void SetSpecialization(Group& group, string specialization);
};

struct Teacher
{
	void AddHWRate();
	void AddPracticeRate();
	void AddExamRate();
	void AddCreditRate();
};

class StudentBD
{
	int birthday; 
	int birth_month; 
	int birth_year; 
public:
	int GetBD();
	int GetBM();
	int GetBY();
	void SetBD(int birthday);
	void SetBM(int birth_month);
	void SetBY(int birth_year);
};

class ZodiacSign :public StudentBD
{
	string zodiac_sign;

public:
	string GetZodiac();
};

class CountSymZodiakSign :public ZodiacSign
{
	int length_zodiac;
public:
	int GetLengthZodiak() { length_zodiac = GetZodiac().size(); }
};

class CountSymName :public Student
{
	int FirstNameLength;
	int SurnameLength; 
	int LastnameLength; 
public:
	int GetFirstNameLength() { return FirstNameLength = GetFirstName().size(); }
	int GetSurnameLength() { return SurnameLength = GetSurname().size(); }
	int GetLastnameLength() { return LastnameLength = GetLastname().size(); }
};

class StudentAddres
{
	string country; 
	string region; 
	string city; 
	string street; 
	int house_number; 
	string housing;
public:
	string GetCountry();
	string GetRegion();
	string GetCity();
	string GetStreet();
	int GetHouseNumber();
	string GetHousing();
	void SetCountry(string country);
	void SetRegion(string region);
	void SetCity(string city);
	void SetStreet(string street);
	void SetHouseNumber(int house_number);
	void SetHousing(string housing);
};

class CountSymStudentAddrest :public StudentAddres
{
	int country_length;
	int region_length;
	int city_length;
	int street_length;
public:
	int GetCountryLength() { return country_length = GetCountry().size(); }
	int GetRegionlength() { return region_length = GetRegion().size(); }
	int GetCityLength() { return city_length = GetCity().size(); }
	int GetStreetLength() { return street_length = GetStreet().size(); }
};

class StartDate
{
	int start_day; 
	int start_month; 
	int start_year; 
public:
	int GetStartDay();
	int GetStartMonth();
	int GetStartYear();
	void SetStartDay(int start_day);
	void SetStartMonth(int start_month);
	void SetStartYear(int start_year);
};

class Course
{
	int course; 
public:
	int GetCourse();
	void SetCourse(int course);
};

class Group
{
	friend class Manager;
	string group_name; 
	string specialization; 
	int students_count; 
public:
	string GetGroupName();
	string GetSpecialization();
};

class CountSymGroup :public Group
{
	int group_name_length;
	int specialization_length;
public:
	int GetGroup_name_length() { return group_name_length = GetGroupName().size(); }
	int GetSpecialization_length() { return specialization_length = GetSpecialization().size(); }
};

class HomeWork
{
	friend class Teacher;
	vector<int> hw_rates;
	int hw_count;
public:
	vector<int> GetHw_rates();
	int GetHw_count();
};

class Practice
{
	friend class Teacher;
	vector<int> practice_rates;
	int practice_count;
public:
	vector<int> GetPractice_rates();
	int GetPractice_count();
};

class Exam
{
	friend class Teacher;
	vector<int> exam_rates;
	int exam_count;
public:
	vector<int> GetExam_rates();
	int GetExam_count();
};

class Credit
{
	friend class Teacher;
	vector<int> Credit_rates;
	int Credit_count;
public:
	vector<int> GetCredit_rates();
	int GetCredit_count();
};