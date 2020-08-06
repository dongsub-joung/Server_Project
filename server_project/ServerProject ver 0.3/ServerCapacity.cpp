#include "ServerCapacity.h"

//기본 용량 50G, 용량 추가 3번
CapacityInfo::CapacityInfo()
	:m_storage_capacity(),
	m_used_capacity(),
	m_avaible_capacity(),
	m_count_sharding()
{
	default_capacity, init_used, init_avaible, defaut_sharding_count;
};


/* ####### 용량 ####### */

ServerCapacity::ServerCapacity()
	:m_avaible(),
	m_used()
{}

//파일 총 용량) 계산 후 값 저장
void ServerCapacity::UsedCapacity()
{
	file_info->SumFileVolume();
	this->m_used = file_info->m_sum_files;
}

//사용가능 용량) 계산 후 값 저장
void ServerCapacity::CalculateCapacity()
{
	this->m_avaible = (capacity.m_storage_capacity) - (this->m_used);
}

// 값 초기화
void ServerCapacity::SendStorageCapacity()
{
	capacity.m_used_capacity = this->m_used;
	capacity.m_avaible_capacity = this->m_avaible;
}