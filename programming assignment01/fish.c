//202110547 Ȳ����, 0452, fish.c, 2021/04/03
#include <stdio.h>
#define GLASS_PER_CM2 3
#define MANAGEMENT_PER_CM3 0.3
#define CM3_PER_FISH 4000
#define PRICE_PER_FISH 5000
int main(void)
{
	double a, b, c; //�������� ���α���, ���α���, ����
	double v; //������ ũ��
	double ip, mp; //������ ��ġ ���, ������ ���� ���
	int iprf, mprf; //������ ��ġ ���(�ݿø�), ������ ���� ���(�ݿø�)
	int p; //�� ���
	int max, e; //�ִ� ����� ����, ��������
	int total; //�� ����

	printf("�������� ���� ����(cm):");
	scanf("%lf", &a);

	printf("�������� ���� ����(cm):");
	scanf("%lf", &b);

	printf("�������� ����(cm):");
	scanf("%lf", &c);

	ip = ((a * b) + (a * c) * 2 + (b * c) * 2) * GLASS_PER_CM2; //������ ������ ������ �ѳ���*����
	iprf = ip + 0.5; //��ġ���(�ݿø�) : 0.5�� ���� �� �����κи� ������ ����

	v = a * b * c; //�������� ũ��=����*����*����
	mp = v * MANAGEMENT_PER_CM3; //����*����
	mprf = mp + 0.5; //�������(�ݿø�) : 0.5�� ���� �� �����κи� ������ ����

	p = iprf + mprf; //�� ���(�ݿø��� ������ ���

	max = v / CM3_PER_FISH; //�ִ� ����� ��=�������� ����/����� �Ѹ����� �����ϴ� ����
	e = max * PRICE_PER_FISH; //����=�ִ� ����� ��*����� �� ����
	total = e - p; //�� ����=����-�� ���

	printf("������ ��ġ ����� %.2lf������ �ݿø� ����� %d�� �Դϴ�.\n\n", ip, iprf);
	printf("������ ũ�� (cm^3):%.2lf\n", v);
	printf("������ ���� ����� %.2lf������ �ݿø� ����� %d�� �Դϴ�.\n\n", mp, mprf);
	printf("������ ��ġ �� ������ �ʿ��� �� ���:%d��\n", p);
	printf("����� %d������ ���� ����:%d��\n", max, e);
	printf("�� ����:%d��", total);

	return 0;
}