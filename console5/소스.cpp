// 05.�Լ� + ��/��� + ��ó����

#include <iostream>

#include <string>

#include <wchar.h>
// STL String�� �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� ��ɰ� �Լ����� �����ϴ� ���
// �� �����ڵ� ����� ���̸� wcar.h
// ���ڿ� ���ڿ� ��¥ �߿���. 


using std::cout;
using std::endl;
using std::cin;
using std::string;

/*
> �Լ�
- ����� ���Ǳ�:
 �� (����� ���Ǳ�� ������� �����ϴ� ���)
 �Լ��� ����� ��� ȿ�������� ���� ���� �����.
 
 * �Լ��� ����ϴ� ����
 * �ߺ����� ����
 * ������ ������
 * ������ ���
 * ����
 
 - �Լ��� �����ϴ� ���:             C_C++    C#
 ��ȯ_�ڷ��� �Լ�_�̸� (�Է��ڷ���(����/�μ�/�Ķ����))
 {  
   �Լ� ����
 }

	����_
	�Լ��̸�: �� �״�� �Լ��� �̸��̸� �Լ��� ����(ȣ��)�Ҷ� ����Ѵ�.
	����(�μ�): �Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾��Ÿ���� �� �� �ִ�.
	��ȯ �ڷ���: �Լ��� �����ϴ� ���� ������ ���̸�, �Լ��� �۾� ������ �� �� �ִ�
	�Լ� ����: {} �ȿ� �Լ��� ���� �ڵ尡 �����Ѵ�.

	�Լ��� �̸��� "�⺻��" ���� �����ؾ� �Ѵ�.
	�� ���� ������ �̸��� �Լ��� 2���̻� �����ϴ� ���� �Ұ��� �ϴ�.
	ex)�����Լ� �ΰ� �ȵǴ� �� ó��

	void�� �Լ���?
	- ������ ���� ���� �Լ�
	- �Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� �Լ��� ��/����� ���ٶ�� ���� ����Ѵ�.
	* �츮�� �˰� �𸣰� ����� �Լ���
	�� rand(): �������� �̴� �Լ�
	
	* �Լ� ������ �⺻������ ���� �Լ� ���ʿ� ����� �Ѵ�.
	
	C/C++ ����� �Լ� ������ �ʿ��� ����
	- C/C++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.
	- �̋� �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ���� ��� �����Ϸ��� �̿� ���� ������
	  ���� �𸣱� ������ ������ �߻��Ѵ�.

	- �׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ����� �ش� �Լ��� �츮�� ���� ������Ʈ ���� ��򰡿� �ִٴ� ���� �˷���� �Ѵ�.

	- ��, �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ� ���� �ǹ��Ѵ�.

	- �Լ��� ������ �ߺ����� ����ϴ� ���� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.
	- �Լ��� �̸��� �⺻������ �Ľ�Į ������ ���´�. (IntPlayerNumber)

*/
// �Լ�����
void OutputValueA();


//��Ʈ���� �ް� ������ ��ȯ�� ���� �ʴ´�. (vold)
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);


// ���ڿ�
void outputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingStringFunc(string strA, string strB);


// �Լ��� �̸��� �⺻������ �ߺ��� �ȵȴ�.
// �ߺ��� �Լ��� ���� ��, ������ ȣ���� �� �ִ� ����� ������?
// ���� �����ڻ��

namespace NS_FUNC_A
{
	void Sample()
	{
		cout << "���� �ٷ� Sample1" << endl;
	}
}
namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "���� �ٷ� Sample2" << endl;
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
	outputString("������ �ʹ� ����. ^^");
	*/

	int numA,numB;

	cout << " �Է¹��� �ΰ��� ������ �Է��ϼ���." << endl;
	cin >> numA;
	cin >> numB;
	cout << endl << endl;
	cout << GetAddValue(numA, numB) << endl;
	cout << GetSubValue(numA, numB) << endl;
	cout << GetMultipleValue(numA, numB) << endl;
	cout << GetDivideValue(numA, numB) << endl;

	int nResultA = GetAddValue(15, 25);
	OutputValueB(nResultA);
	string sResultB = GetStringFunc("��ſ�","���α׷���");
	outputString(sResultB);

	nResultA = CheckingStringFunc("�ʹ� ��մ�.", "�ʹ� ��մ�.");
	OutputValueB(nResultA);


	// �Լ���� ���� �ٺ������� C��� ������. ���� cout ���ٴ� print���� �� �� ��︲

	int numL = 0;
	int numR = 0;

	cout << " ���� (2��)�Է�:" << endl;
	cin >> numL >> numR;

	printf("%d + %d=%d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d=%d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d=%d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d=%d\n", numL, numR, GetDivideValue(numL, numR));
}

/*
- ��ó�� �Լ��� �پ��� ������ ���� �� �ִ�.
c/c++ ����� �ռ� ����

�Է�o>���o
�Է�o>���x
�Է�x>���o
�Է�x>���x


void ShowInfo(int nAge, char* pasName);
���Է�o,���x
int GetRandomValue(void)
�Է�x, ���o
void SomeFunction(void)
�Է�x,���x
*/
void OutputValueA()
{
	cout << "���� �ٷ� �Լ���" << endl;
}
//��Ʈ���� �ް� ������ ��ȯ�� ���� �ʴ´�. (vold)
void OutputValueB(int numA)
{
	cout << numA << endl;
}
void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

// ���ڿ�
void outputString(string str) 
{
	cout << str << endl;
	}
string GetStringFunc(string strA, string strB)
{//����Ű
	// ���ڿ� ���ڿ��� ���ؼ��� ��Ģ������ ���� �ȵ�.

	/*
		�Լ��� return Ű���带 ���ؼ� �Լ��� ���� �Ǵ� ������� ��ȯ�ϴ� ���� ����.
		�Լ��� ������� �Է°��� �޸� �ϳ��� ������� ��ȯ�� �� �ִ�.
		�� ����
	*/
	//  C��� 4�� + 2�� = 6�� ���ڿ�
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
����1. ���������� ����
if ���� �̿��� �����.
 �� switch ������� ����.
 -������ ���� Ƚ���� �� 5��
 ���Ĵ� ���� ����

 �ʼ����: ��ǻ�Ͱ� ������ �� ����� ���� �̸� �˼� �ְ� ��� �غ��� (����,����,��)�� ����.

����2. ����, �� �����ϵ���
- ���ݱ��� ��� ������� �����Ѵ�.
- �׸��� ��� ������ �ߴ��� ����ȭ ���ѿ´�.


*/
/*
  ���� ����1. ����/���ڿ��� ���� ����
 -������ ������ �ƴ����� �츮�� ���� ������ �ȳ����� ������,
 
 * �۳� ��ݱ� ������ ����Ʈ ���� ����*
 * <���� ����>
  C++ ���� Ǯ��� �ϸ� ��ĭ�� �˸°� ä�� �����ÿ�.
  C��Ÿ�� ���̺귯�ϳ� STL�� ��Ÿ ���̺귯�� �Լ��� ����ϸ� �ȵ˴ϴ�.
  Ư�� String�� ����� �ٷ� Ż�� ó���Ǵ� ���� �ٶ��ϴ�.
  �׸��� �ش� ����� ���� �� �׷��� �ۼ��� �ߴ��� ������ �ǰ��� �ּ����� �����Ͻÿ�.
   
   ����. �־��� ���ڿ��� �ܾ� ������ ������ ������ ����Ͻÿ�.

   <��>
   �Է� ��: "Hello World this is SmileGate"
   ��ȯ ��: "SmileGate is this world Hello"

   �Է� ���ڿ��� �յڿ� ������ ���ٰ� �����մϴ�.
   ��� �ܾ�� ���� �� ĭ���� ���еȴٰ� �����մϴ�.

   void ReverseWolrd(char* output, int outputArraySize, const char* input)
   {
   // �̰��� ä�� �����ÿ�
   }

   ���������� ������ �ۼ��� ������ ���� �ð� ���⵵�� ��� �ϴ� ������ ������ �Լ��� �����ϰ�
   ���۹�İ� �� �׷��� �ۼ��ߴ����� ����Ͻÿ�.

*/