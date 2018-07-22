#include"tabteen0.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) :firstname(fn), lastname(ln), hasTable(ht){}

void TableTennisPlayer::Name() const
{
	std::cout << lastname << " ," << firstname;
}


//TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht)   //构造函数
//{
//	firstname = fn;
//	lastname = ln;
//	hasTable = ht;
//}