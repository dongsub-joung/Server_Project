#pragma once
#include "Default_Include.h"
#include "FileInfo.h"

/* ####### 서버 용량 ####### */
struct CapacityInfo
{
	double m_storage_capacity;		//MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding;			//증설 가능 횟수


	static CapacityInfo getCapacityInfo()
	{
		if (capacity_info == NULL) capacity_info = new CapacityInfo();
		return *capacity_info;
	}

private:
	enum default_capacity
	{
		default_capacity = 51200,
		init_used = 0,
		init_avaible = 0,
		defaut_sharding_count = 3
	};
	CapacityInfo();
	static CapacityInfo* capacity_info;
};


class ServerCapacity
{
public:

	void UsedCapacity();			//사용된 용량 구하기
	void CalculateCapacity();		//전체 용량-사용된 용량 = 남은 용량
	void SendStorageCapacity();		

private:
	FileInfo *file_info = new FileInfo;
	CapacityInfo capacity;
	double m_used;
	double m_avaible;
};