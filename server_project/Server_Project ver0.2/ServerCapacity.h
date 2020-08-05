#pragma once
#include "Default_Include.h"

/* ####### 서버 용량 ####### */
struct CapacityInfo
{

	double m_storage_capacity; //MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding; //증설 가능 횟수

	//기본 용량 50G, 용량 추가 3번
	CapacityInfo()
	{
		51200, 0, 0, 3;
	};
	/*
		m_storage_capacity = 51200;
		m_used_capacity = 0;
		m_avaible_capacity = 0;
		m_count_sharding = 3;
	*/

};