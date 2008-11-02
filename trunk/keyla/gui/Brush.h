#pragma once

//
// ����� �����
//
// �������� ����������� - ����������� ���������
// �������� �������������� ����� - �������� ������� �������������� � HBRUSH
//
class Brush {
public:

	// ����������� �� ���������
	Brush();

	// ����������� ��� �������� ����� ��������� �����
	explicit Brush(COLORREF color);

	// ����������. ������������� ���������� �����
	~Brush();

	operator HBRUSH();

private:

	HBRUSH m_brush;
};