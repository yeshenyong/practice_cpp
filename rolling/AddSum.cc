// AddSum.cc
#include <iostream>
extern "C" {
    int add(int a, int b) { return a + b; }
}
// ����ʹ�� extern "C" �ؼ������������ţ����� C++ �ķ����������Ƹı亯�������֡�
// g++ -fPIC -shared AddSum.cc -o libreco.so
// ���� -fPIC ѡ���������λ���޹ش��룬���Ƕ�̬���Ӽ���ʵ�ֵĹؼ���
// Ȼ�� -shared ��ʾ���ɶ�̬���ӷ��ţ���������������Զ�̬���ط��Ų��������еĺ���