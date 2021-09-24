#include "ServerCapacity.h"
#include "File.cpp"

CapacityInfo::CapacityInfo()
	:m_storage_capacity(),
	m_used_capacity(),
	m_avaible_capacity(),
	m_count_sharding()
{
	51200, 0, 0, 3;
};


/* ####### 용량 ####### */
class ServerCapacity
{
public:
	FileInfo file_info;
	CapacityInfo capacity;

	void UsedCapacity();			//사용된 용량 구하기
	void CalculateCapacity();		//전체 용량-사용된 용량 = 남은 용량
	void SendStorageCapacity();

private:
	double used;
	double avaible;
};

void ServerCapacity::UsedCapacity()
{
	file_info.SumFileVolume();
	used = file_info.m_sum_files;
}

void ServerCapacity::CalculateCapacity()
{
	avaible = capacity.m_storage_capacity - used;
}

void ServerCapacity::SendStorageCapacity()
{
	capacity.m_used_capacity = used;
	capacity.m_avaible_capacity = avaible;
}

