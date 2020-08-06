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

	enum default_capacity
	{
		default_capacity = 51200,
		init_used = 0,
		init_avaible = 0,
		defaut_sharding_count = 3
	};
};


class ServerCapacity
{
public:
	FileInfo *file_info = new FileInfo;
	CapacityInfo capacity;

	void UsedCapacity();			//���� �뷮 ���ϱ�
	void CalculateCapacity();		//��ü �뷮-���� �뷮 = ���� �뷮
	void SendStorageCapacity();		

private:
	double m_used;
	double m_avaible;
};