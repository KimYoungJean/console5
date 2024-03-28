// 05.함수 + 변/상수 + 전처리기

#include <iostream>

#include <string>

#include <wchar.h>
// STL String은 메모리 블록이나 문자열을 다룰 수 있는 기능과 함수들을 포함하는 헤더
// ㄴ 유니코드 사용할 것이면 wcar.h
// 문자와 문자열 진짜 중요함. 


using std::cout;
using std::endl;
using std::cin;
using std::string;

/*
> 함수
- 음료수 자판기:
 ㄴ (음료수 자판기는 음료수를 배출하는 기계)
 함수는 쓰기는 쉬운데 효율적으로 쓰는 것이 어려움.
 
 * 함수를 사용하는 이유
 * 중복로직 제거
 * 관리에 용이함
 * 가독성 향상
 * 편리성
 
 - 함수를 선언하는 방법:             C_C++    C#
 반환_자료형 함수_이름 (입력자료형(인자/인수/파라미터))
 {  
   함수 내용
 }

	설명_
	함수이름: 말 그대로 함수의 이름이며 함수를 실행(호출)할때 사용한다.
	인자(인수): 함수가 해야 할 일의 세부사항을 지정하며 함수의 작업거리라고 할 수 있다.
	반환 자료형: 함수가 리턴하는 값의 데이터 형이며, 함수의 작업 결과라고 할 수 있다
	함수 내용: {} 안에 함수의 실제 코드가 존재한다.

	함수의 이름은 "기본적" 으로 유일해야 한다.
	ㄴ 따라서 동일한 이름의 함수를 2개이상 선언하는 것은 불가능 하다.
	ex)메인함수 두개 안되는 것 처럼

	void형 함수란?
	- 리턴할 값이 없는 함수
	- 함수의 입력 또는 출력이 없을 경우 void 키워드를 통해서 해당 함수가 입/출력이 없다라는 것을 명시한다.
	* 우리가 알게 모르게 사용한 함수들
	ㄴ rand(): 랜덤값을 뽑는 함수
	
	* 함수 선언은 기본적으로 메인 함수 위쪽에 해줘야 한다.
	
	C/C++ 언어의 함수 선언이 필요한 이유
	- C/C++ 언어의 컴파일러는 기본적으로 파일의 내용을 위에서 아래로 해석한다.
	- 이떄 컴파일러가 이미 지나친 라인에서 포함되어 있지 않은 함수를 호출할 경우 컴파일러가 이에 대한 내용을
	  전혀 모르기 때문에 에러가 발생한다.

	- 그렇기 때문에 함수의 선언을 통해서 컴파일러에게 해당 함수가 우리가 쓰는 프로젝트 파일 어딘가에 있다는 것을 알려줘야 한다.

	- 즉, 함수의 선언과 정의가 반드시 동일한 파일에 존재하지 않아도 된다는 것을 의미한다.

	- 함수의 선언은 중복으로 명시하는 것이 가능하지만 함수의 정의는 반드시 유일해야 한다.
	- 함수의 이름은 기본적으로 파스칼 식으로 적는다. (IntPlayerNumber)

*/
// 함수선언
void OutputValueA();


//인트형을 받고 있지만 반환을 하지 않는다. (vold)
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);


// 문자열
void outputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingStringFunc(string strA, string strB);


// 함수의 이름은 기본적으로 중복이 안된다.
// 중복된 함수가 있을 때, 별도로 호출할 수 있는 방법이 있을까?
// 접근 연산자사용

namespace NS_FUNC_A
{
	void Sample()
	{
		cout << "내가 바로 Sample1" << endl;
	}
}
namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "내가 바로 Sample2" << endl;
	}
}
int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);

void main()
{
	/*
	
	NS_FUNC_A::Sample();

	OutputValueA();
	OutputValueB(5);
	OutputValueC(1, 9);
	outputString("과제가 너무 쉽다. ^^");
	*/

	int numA,numB;

	cout << " 입력받을 두가지 정수를 입력하세요." << endl;
	cin >> numA;
	cin >> numB;
	cout << endl << endl;
	cout << GetAddValue(numA, numB) << endl;
	cout << GetSubValue(numA, numB) << endl;
	cout << GetMultipleValue(numA, numB) << endl;
	cout << GetDivideValue(numA, numB) << endl;

	int nResultA = GetAddValue(15, 25);
	OutputValueB(nResultA);
	string sResultB = GetStringFunc("즐거운","프로그래밍");
	outputString(sResultB);

	nResultA = CheckingStringFunc("너무 재밌다.", "너무 재밌다.");
	OutputValueB(nResultA);


	// 함수라는 놈은 근본적으로 C언어 문법임. 따라서 cout 보다는 print문과 더 잘 어울림

	int numL = 0;
	int numR = 0;

	cout << " 정수 (2개)입력:" << endl;
	cin >> numL >> numR;

	printf("%d + %d=%d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d=%d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d=%d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d=%d\n", numL, numR, GetDivideValue(numL, numR));
}

/*
- 이처럼 함수는 다양한 유형을 가질 수 있다.
c/c++ 언어의 합수 유형

입력o>출력o
입력o>출력x
입력x>출력o
입력x>출력x


void ShowInfo(int nAge, char* pasName);
ㄴ입력o,출력x
int GetRandomValue(void)
입력x, 출력o
void SomeFunction(void)
입력x,출력x
*/
void OutputValueA()
{
	cout << "내가 바로 함수다" << endl;
}
//인트형을 받고 있지만 반환을 하지 않는다. (vold)
void OutputValueB(int numA)
{
	cout << numA << endl;
}
void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

// 문자열
void outputString(string str) 
{
	cout << str << endl;
	}
string GetStringFunc(string strA, string strB)
{//리스키
	// 문자와 문자열에 대해서는 사칙연산을 쓰면 안됨.

	/*
		함수는 return 키워드를 통해서 함수의 종료 또는 결과값을 반환하는 것이 가능.
		함수의 결과값은 입력과는 달리 하나의 결과만을 반환할 수 있다.
		ㄴ 정석
	*/
	//  C언어 4대 + 2대 = 6대 문자열
	// C++ String
	// C# String
	return strA.append(strB);
}
int CheckingStringFunc(string strA, string strB)
{
	return strA==strB;
}

int GetAddValue(int numA, int numB)
{
	return numA+numB;
}

int GetSubValue(int numA, int numB)
{
	return numA-numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA*numB;
}

float GetDivideValue(int numA, int numB)
{
	return (float)numA/numB;
}

/*
과제1. 가위바위보 게임
if 문을 이용해 만든다.
 ㄴ switch 사용하지 말것.
 -게임의 진행 횟수는 총 5판
 이후는 게임 종료

 필수요소: 컴퓨터가 다음에 낼 경우의 수를 미리 알수 있게 출력 해보고 (가위,바위,보)를 낸다.

과제2. 복습, 또 복습하도록
- 지금까지 배운 내용들은 복습한다.
- 그리고 어떻게 복습을 했는지 구현화 시켜온다.


*/
/*
  도전 과제1. 문자/문자열에 대한 과제
 -문제가 어려운건 아니지만 우리가 아직 수업을 안나갔기 때문에,
 
 * 작년 상반기 스마일 게이트 출제 문제*
 * <주의 사항>
  C++ 언어로 풀어야 하며 빈칸을 알맞게 채워 넣으시오.
  C런타임 라이브러니나 STL등 기타 라이브러리 함수를 사용하면 안됩니다.
  특히 String을 사용히 바로 탈락 처리되니 유의 바랍니다.
  그리고 해당 방법에 대해 왜 그렇게 작성을 했는지 본인의 의견을 주석으로 기입하시오.
   
   문제. 주어진 문자열을 단어 단위로 순서를 뒤집어 출력하시오.

   <예>
   입력 값: "Hello World this is SmileGate"
   반환 값: "SmileGate is this world Hello"

   입력 문자열은 앞뒤에 공백이 없다고 가정합니다.
   모든 단어는 공백 한 칸으로 구분된다고 가정합니다.

   void ReverseWolrd(char* output, int outputArraySize, const char* input)
   {
   // 이곳을 채워 넣으시오
   }

   마지막으로 본인이 작성한 로직에 대한 시간 복잡도를 계싼 하는 수식을 별도의 함수로 구현하고
   동작방식과 왜 그렇게 작성했는지에 기술하시오.

*/