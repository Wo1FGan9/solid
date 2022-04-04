#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

string Student::GetFirstName()
{
	return FirstName;
}

string Student::GetSurname()
{
	return Surname;
}

string Student::GetLastname()
{
	return LastName;
}

void Student::SetFirstName(string firstname)
{
	this->FirstName = firstname;
}

void Student::SetSurname(string surname)
{
	this->Surname = surname;
}

void Student::SetLastname(string lastname)
{
	this->LastName = lastname;
}

int StudentBD::GetBD()
{
	return birthday;
}

int StudentBD::GetBM()
{
	return birth_month;
}

int StudentBD::GetBY()
{
	return birth_year;
}

void StudentBD::SetBD(int birth_day)
{
	this->birthday = birth_day;
}

void StudentBD::SetBM(int birth_month)
{
	this->birth_month = birth_month;
}

void StudentBD::SetBY(int birth_year)
{
	this->birth_year = birth_year;
}

string ZodiacSign::GetZodiac()
{
	int zodiac;
	zodiac = 100 * GetBD() + GetBM();
	if (zodiac >= 121 && zodiac <= 219)   zodiac_sign = "Aquarius";
	if (zodiac >= 220 && zodiac <= 320)   zodiac_sign = "Pisces";
	if (zodiac >= 321 && zodiac <= 420)   zodiac_sign = "Aries";
	if (zodiac >= 421 && zodiac <= 521)   zodiac_sign = "Taurus";
	if (zodiac >= 522 && zodiac <= 621)   zodiac_sign = "Gemini";
	if (zodiac >= 621 && zodiac <= 722)   zodiac_sign = "Cancer";
	if (zodiac >= 723 && zodiac <= 823)   zodiac_sign = "Leo";
	if (zodiac >= 824 && zodiac <= 923)   zodiac_sign = "Virgo";
	if (zodiac >= 924 && zodiac <= 1023)  zodiac_sign = "Libra";
	if (zodiac >= 1024 && zodiac <= 1122) zodiac_sign = "Scorpio";
	if (zodiac >= 1123 && zodiac <= 1221) zodiac_sign = "Sagittarius";
	if (zodiac >= 1222 || zodiac <= 120)  zodiac_sign = "Capricornus";
	return zodiac_sign;
}

string StudentAddres::GetCountry()
{
	return country;
}

string StudentAddres::GetRegion()
{
	return region;
}

string StudentAddres::GetCity()
{
	return city;
}

string StudentAddres::GetStreet()
{
	return street;
}

int StudentAddres::GetHouseNumber()
{
	return house_number;
}

string StudentAddres::GetHousing()
{
	return housing;
}

void StudentAddres::SetCountry(string country)
{
	this->country = country;
}

void StudentAddres::SetRegion(string region)
{
	this->region = region;
}

void StudentAddres::SetCity(string city)
{
	this->city = city;
}

void StudentAddres::SetStreet(string street)
{
	this->street = street;
}

void StudentAddres::SetHouseNumber(int house_number)
{
	this->house_number = house_number;
}

void StudentAddres::SetHousing(string korpus)
{
	this->housing = housing;
}

int StartDate::GetStartDay()
{
	return start_day;
}

int StartDate::GetStartMonth()
{
	return start_month;
}

int StartDate::GetStartYear()
{
	return start_year;
}

void StartDate::SetStartDay(int start_day)
{
	this->start_day = start_day;
}

void StartDate::SetStartMonth(int start_month)
{
	this->start_month = start_month;
}

void StartDate::SetStartYear(int start_year)
{
	this->start_year = start_year;
}

void Manager::SetGroupName(Group& group, string newgroupname)
{
	group.group_name = newgroupname;
}

void Manager::SetSpecialization(Group& group, string specialization)
{
	group.specialization = specialization;
}

string Group::GetGroupName()
{
	return group_name;
}

string Group::GetSpecialization()
{
	return specialization;
}

int Course::GetCourse()
{
	return course;
}

void Course::SetCourse(int course)
{
	this->course = course;
}