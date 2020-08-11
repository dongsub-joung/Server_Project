#pragma once
#include "Default_Include.h"
#include "FileInfo.h"

/* ####### ���� �뷮 ####### */
struct CapacityInfo
{
	double m_storage_capacity;		//MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding;			//���� ���� Ƚ��


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

	void UsedCapacity();			//���� �뷮 ���ϱ�
	void CalculateCapacity();		//��ü �뷮-���� �뷮 = ���� �뷮
	void SendStorageCapacity();		

private:
	FileInfo *file_info = new FileInfo;
	CapacityInfo capacity;
	double m_used;
	double m_avaible;
};