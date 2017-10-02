#include <iostream>
/*
设计一个账户类，这个账户类包括账号，用户名，账户内的金额数。
要求根据账户个数计算账户金额的总和
参考6-13（40分）

*/
using namespace std;

class Account
{
private:
    int num;   //账号
    string name;//用户名
    double money;//账号余额
public:
    void setNum(int Num)
    {
        num=Num;
    }
    int getNum()
    {
        return num;
    }
    void setName(string Name)
    {
        name=Name;
    }
    string getName()
    {
        return name;
    }
    void setMoney(double Money)
    {
        money=Money;
    }
    double getMoney()
    {
        return money;
    }

};
int main()
{
    int CountNUM=0;
    cout<<"请输入创建用户的个数：";
    int n;
    cin>>n;
    Account acc[n];
    for(int i=0;i<n;i++)
    {
        string Name;
        double Money;
        cout<<"请输入第"<<i<<"个用户 用户名和账户余额:";
        cin>>Name>>Money;
        CountNUM++;
        acc[i].setNum(CountNUM);
        acc[i].setName(Name);
        acc[i].setMoney(Money);
    }
    double SUM=0;
    for(int i=0;i<n;i++)
    {
        SUM+=acc[i].getMoney();
    }
    cout<<"总共"<<n<<"个账户金额总和为："<<SUM<<endl;
    return 0;
}
