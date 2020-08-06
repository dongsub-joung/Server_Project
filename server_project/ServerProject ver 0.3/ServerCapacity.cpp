#include "ServerCapacity.h"

//�⺻ �뷮 50G, �뷮 �߰� 3��
CapacityInfo::CapacityInfo()
	:m_storage_capacity(),
	m_used_capacity(),
	m_avaible_capacity(),
	m_count_sharding()
{
	default_capacity, init_used, init_avaible, defaut_sharding_count;
};


/* ####### �뷮 ####### */

ServerCapacity::ServerCapacity()
	:m_avaible(),
	m_used()
{}

//���� �� �뷮) ��� �� �� ����
void ServerCapacity::UsedCapacity()
{
	file_info->SumFileVolume();
	this->m_used = file_info->m_sum_files;
}

//��밡�� �뷮) ��� �� �� ����
void ServerCapacity::CalculateCapacity()
{
	this->m_avaible = (capacity.m_storage_capacity) - (this->m_used);
}

// �� �ʱ�ȭ
void ServerCapacity::SendStorageCapacity()
{
	capacity.m_used_capacity = this->m_used;
	capacity.m_avaible_capacity = this->m_avaible;
}