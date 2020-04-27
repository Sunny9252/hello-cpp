//다음은 로케일을 이용하여 날짜/시간을 출력하는 프로그램의 예이다.
	#include <stdio.h>
	#include <locale.h>
	#include <time.h>

	int main(void)
	{
		time_t now;
		struct tm *l_time;
		char string[256];

		/* 환경변수로부터 시간 관련 로케일을 결정한다. */
		setlocale(LC_TIME, "");

		/* calendar 시간을 now라는 변수에 저장. 
		 * 그 값은 1970년 1월 1일 이후부터 지금까지의 초단위 시간 */
		now = time((time_t *)NULL);

		/* calendar 시간의 다른 유용한 형태를 l_time변수에 저장 */
		l_time = localtime(&now);

		/* 우리가 원하는 포맷의 시간 포맷을 string이라는 변수에 저장 */
		strftime(string, sizeof string, "%c", l_time);

		/* 출력 */
	 	printf("%s\n", string);

		return 0;
	}