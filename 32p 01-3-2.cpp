/*

int SimpleFunc(int a=10) //1번 함수
  return a+1;
  
int SimpleFunc(void) //2번 함수
  return 10;
  
다음과 같은 함수 오버로딩은

SimpleFunc();
로 함수를 호출했을 때
두 함수 모두 호출조건을 만족하기 때문에
디폴트 값이 지정된 1번 함수를 불러올 것이냐
아니면 매게변수를 전달받지 않는 2번 함수를 불러올 것이냐에서 오류가 발생한다.
*/
