#include "structs.h"

#pragma once
#include <cstdio>
#include <cstdlib>
#include <cstring>


/**
* \brief ������� ������ bmp-�����
* \details �������� ���� ����� ��� "input01.bmp", ��� 01 - ��� �����
* \param num ����� �����
* \author �������� �.�.
* \date 13.01.2021
*/
bmpFile readBMP(int num);

/**
* \brief ������� ������ bmp-�����
* \details ���������� ���� ����� ��� "output01.bmp", ��� 01 - ��� �����
* \param num ����� �����
* \param inBmp bmp-��������� ��� ������
* \author �������� �.�.
* \date 13.01.2021
*/
void writeBMP(int num, bmpFile* inBmp);
