//202110547 황윤선, 0452, fish.c, 2021/04/03
#include <stdio.h>
#define GLASS_PER_CM2 3
#define MANAGEMENT_PER_CM3 0.3
#define CM3_PER_FISH 4000
#define PRICE_PER_FISH 5000
int main(void)
{
	double a, b, c; //수족관의 가로길이, 세로길이, 높이
	double v; //수족관 크기
	double ip, mp; //수족관 설치 비용, 수족관 관리 비용
	int iprf, mprf; //수족관 설치 비용(반올림), 수족관 관리 비용(반올림)
	int p; //총 비용
	int max, e; //최대 물고기 개수, 물고기수익
	int total; //총 이윤

	printf("수족관의 가로 길이(cm):");
	scanf("%lf", &a);

	printf("수족관의 세로 길이(cm):");
	scanf("%lf", &b);

	printf("수족관의 높이(cm):");
	scanf("%lf", &c);

	ip = ((a * b) + (a * c) * 2 + (b * c) * 2) * GLASS_PER_CM2; //수족관 윗면을 제외한 겉넓이*가격
	iprf = ip + 0.5; //설치비용(반올림) : 0.5를 더한 후 정수부분만 값으로 추출

	v = a * b * c; //수족관의 크기=가로*세로*높이
	mp = v * MANAGEMENT_PER_CM3; //부피*가격
	mprf = mp + 0.5; //관리비용(반올림) : 0.5를 더한 후 정수부분만 값으로 추출

	p = iprf + mprf; //총 비용(반올림된 값으로 계산

	max = v / CM3_PER_FISH; //최대 물고기 수=수족관의 부피/물고기 한마리가 차지하는 부피
	e = max * PRICE_PER_FISH; //수익=최대 물고기 수*물고기 당 가격
	total = e - p; //총 이윤=수익-총 비용

	printf("수족관 설치 비용은 %.2lf원으로 반올림 결과는 %d원 입니다.\n\n", ip, iprf);
	printf("수족관 크기 (cm^3):%.2lf\n", v);
	printf("수족관 관리 비용은 %.2lf원으로 반올림 결과는 %d원 입니다.\n\n", mp, mprf);
	printf("수족관 설치 및 관리에 필요한 총 비용:%d원\n", p);
	printf("물고기 %d마리에 대한 수익:%d원\n", max, e);
	printf("총 수익:%d원", total);

	return 0;
}