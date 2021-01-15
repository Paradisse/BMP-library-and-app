#ifndef STRUCTS_H
#define STRUCTS_H

#pragma pack (push, 2)
typedef struct bmfileheader {
    char bfType[2]; ///< ��������� bmp-����� (="BM")
    unsigned int bfSize; ///< ������ ����� bmp-����� � ������
    short int Reserved1; ///< ����������������� ���� (=0)
    short int Reserved2; ///< ����������������� ���� (=0)
    unsigned int OffBits; ///< �������� (� ������) ������� �������� �� ������ �����
} bmfh;
#pragma pack(pop)

typedef struct bminfoheader {
    unsigned int biSize; ///< ������ ��������� BITMAPINFOHEADER � ������
    int Width; ///< ������ �������� � ��������
    int Height; ///< ������ �������� � ��������
    short int Planes; ///< ���������� �������� ����������
    short int BitCount; ///< ���������� ����� �� 1 ������
    int Compression;
    unsigned int SizeImage; ///< ������ ������� �������� � ������
    int XPelsPerMeter;
    int YPelsPerMeter;
    int ClrUsed;
    int ClrImportant;
} bmih;

typedef struct rgbquad {
    char rgbBlue;
    char rgbGreen;
    char rgbRed;
    char rgbReserved;
} rgbq;

typedef struct bmp {
    bmfh bmFHeader; ///< C�������� ��������� bmp-�����
    bmih bmIHeader; ///< ��������� �������� ������� �����������
    rgbq palette[256]; ///< �������
    unsigned char** scan; ///< ��������� ��������� �����������
} bmpFile;
#endif
