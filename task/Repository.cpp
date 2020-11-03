//#include "Repository.h"
//
//Repository::Repository(bool sync)
//{
//	this->sync = sync;
//	maxLen = 100;
//	data = new Entity * [maxLen];
//	actual = -1;
//	ReadFromStorage();
//}
//
//Repository::~Repository()
//{
//	WriteToStorage();
//	delete[] data;
//}
//
//bool Repository::Add(Entity* entity)
//{
//	data[++actual] = entity;
//	if (sync)
//		WriteToStorage();
//
//	return true;
//}
#include "Repository.h"

Repository::~Repository()
{
    writeToFile();

}

Repository::Repository(bool data)
{
    this->data = data;
}

vector<Entity*> Repository::GetEntity()
{
    return entity;
}

void Repository::deleteIndex(int index)
{
    entity.erase(entity.begin() + index);
}


bool Repository::Add(Entity* en) 
{
    entity.push_back(en);
    if (data) 
    {
        writeToFile();
    }
    return true;
}