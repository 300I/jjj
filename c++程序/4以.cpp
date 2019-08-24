//作者：你的傻爷爷偷鸡摸狗被人家抓住了你知不知道(你的傻爷爷偷鸡摸狗被人家抓住了你知不知道快回去救救你的傻爷爷听到没快去呀好吧其实我就是你的傻爷爷，乖孙！（哈哈哈哈哈哈哈哈哈哈）)
//c++ yourcraft v1.12.1
//感谢大家的支持，我还会继续出的！
//这次增加了--商店，怪物，还修复了一些小Bug 
#include<bits/stdc++.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main()
{//开头 
cout<<" "<<"你";
Sleep(500);
cout<<" 的";
Sleep(500);
cout<<" 世";
Sleep(500);
cout<<" 界";
Sleep(1000);
cout<<endl<<" 作者:";
Sleep(500);
cout<<"李";
Sleep(500);
cout<<"圣"; 
Sleep(500);
cout<<"泽!";
cout<<endl<<" d---单人 s---双人"<<endl;
string a;
cin>>a;
if(a=="s")
cout<<"只有你一个人，无法联机!";
else if(a=="d")
{
cout<<endl<<"相传世界由2名创世神所创造。一个叫Notch,一个叫Herobring。";
cout<<"他们是一对兄弟。";
Sleep(1000);
cout<<endl<<endl<<"他们创造出了人类。Notch总是创造出对人类有益的东西，";
cout<<"可Herobring相反。"; 
Sleep(1000);
cout<<endl<<endl<<"有一天，Herobring与Notch大战了一场，Herobring被Notch";
cout<<"的铁傀儡击杀了。Herobring死前发誓要复仇。";
Sleep(1000);
cout<<endl<<endl<<"可是，当大家都很高兴的时候，Notch找到你，对你说:";
Sleep(1000);
cout<<endl<<endl<<"“Him的创世之力不会被轻易消灭，总有一天，他会苏醒的！”";
Sleep(1000);
cout<<endl<<endl<<"苍老的Notch说完话，便倒下了。"; 
Sleep(1000); 
cout<<endl<<endl<<endl<<endl<<"一场新的故事，拉开了序幕...";
string name;
cout<<endl<<endl<<"你的名字：";
cin>>name; 
int a,b,c,him=0,xue=500,gong=15,ji=1,jin=0,hxue=1000;
int xue1=100,xue2=200,xue3=400,xue4=400,xue5=700,xue6=800,money=0;//开头结束 
while(him!=1)//主程序 
{
cout<<endl<<"1--冒险 2--商店 3--状态 ";
cin>>a;
if(a==1)//冒险 
{
cout<<endl<<"1--僵尸森林 2--骷髅大陆 3--女巫沼泽 4--末影宫殿 ";
cout<<"5--守卫之洋 6--林地府邸 7--herobring的封印";
cin>>b; 
if(b==1)//打僵尸 
{
while(xue1>0)
{
cout<<endl<<"僵尸向你扑来！";
cout<<endl<<"是否攻击/逃跑？(1/2)";
cin>>c;
if(c==1) 
{
xue1-=gong;

cout<<endl<<"僵尸克了"<<gong<<"滴血";
if(xue1>0)
{
cout<<endl<<"僵尸还有"<<xue1<<"滴血";
cout<<endl<<"僵尸咬了你！你克了10滴血";
xue-=10;
cout<<endl<<"你还有"<<xue<<"滴血"; 
}
else
cout<<endl<<"僵尸挂菜！"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"逃跑失败！克50滴血 ";
cout<<endl<<"你还有"<<xue<<"滴血";
} 
if(xue<=0)
{
cout<<endl<<"你死了！";
return 0; 
}
}
cout<<endl<<"打败僵尸，经验加10点！获得50元。";
jin+=10;
xue1=100;
money+=50;
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"升级！";
gong+=2;
xue+=20; 
}
}//打僵尸结束 
if(b==2)//打骷髅 
{
while(xue2>0)
{
cout<<endl<<"骷髅拿起了弓！";
cout<<endl<<"是否攻击/逃跑？(1/2)";
cin>>c;
if(c==1) 
{
xue2-=gong;

cout<<endl<<"骷髅克了"<<gong<<"滴血";
if(xue2>0)
{
cout<<endl<<"骷髅还有"<<xue2<<"滴血";
cout<<endl<<"你被射中了！你克了20滴血";
xue-=20;
cout<<endl<<"你还有"<<xue<<"滴血"; 
}
else
cout<<endl<<"骷髅挂菜！"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"逃跑失败！克50滴血 ";
cout<<endl<<"你还有"<<xue<<"滴血";
} 
if(xue<=0)
{
cout<<endl<<"你死了！";
return 0; 
}
}
cout<<endl<<"打败骷髅，经验加20点！获得100元";
jin+=20;
xue2=200; 
money+=100; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"升级！";
gong+=2;
xue+=20; 
} 
}//打骷髅结束 
if(b==3)//打女巫 
{
while(xue3>0)
{
cout<<endl<<"女巫丢出了药水！";
cout<<endl<<"是否攻击/逃跑？(1/2)";
cin>>c;
if(c==1) 
{
xue3-=gong;

cout<<endl<<"女巫克了"<<gong<<"滴血";
if(xue3>0)
{
cout<<endl<<"女巫还有"<<xue3<<"滴血";
cout<<endl<<"你被药水砸中了！你克了50滴血";
xue-=50;
cout<<endl<<"你还有"<<xue<<"滴血"; 
}
else
cout<<endl<<"女巫挂菜！"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"逃跑失败！克50滴血 ";
cout<<endl<<"你还有"<<xue<<"滴血";
} 
if(xue<=0)
{
cout<<endl<<"你死了！";
return 0; 
}
}
cout<<endl<<"打败女巫，经验加50点！获得250元（这数字很像你）";
jin+=50;
xue3=400; 
money+=250; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"升级！";
gong+=2;
xue+=20; 
} 
}//打女巫结束 
if(b==4)//打末影人 
{
while(xue4>0)
{
cout<<endl<<"你看见了末影人的眼睛！";
cout<<endl<<"是否攻击/逃跑？(1/2)";
cin>>c;
if(c==1) 
{
xue4-=gong;

cout<<endl<<"末影人克了"<<gong<<"滴血";
if(xue4>0)
{
cout<<endl<<"末影人还有"<<xue4<<"滴血";
cout<<endl<<"你被末影人攻击了！你克了80滴血";
xue-=80;
cout<<endl<<"你还有"<<xue<<"滴血"; 
}
else
cout<<endl<<"末影人挂菜！"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"逃跑失败！克50滴血 ";
cout<<endl<<"你还有"<<xue<<"滴血";
} 
if(xue<=0)
{
cout<<endl<<"你死了！";
return 0; 
}
}
cout<<endl<<"打败末影人，经验加80点！获得400元";
jin+=80;
xue4=100; 
money+=400; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"升级！";
gong+=2;
xue+=20; 
} 
}//打末影人结束 
if(b==5)//打守卫者 
{
while(xue5>0)
{
cout<<endl<<"你被守卫者用光波链接了！";
cout<<endl<<"是否攻击/逃跑？(1/2)";
cin>>c;
if(c==1) 
{
xue5-=gong;

cout<<endl<<"守卫者克了"<<gong<<"滴血";
if(xue5>0)
{
cout<<endl<<"守卫者还有"<<xue5<<"滴血";
cout<<endl<<"守卫者光波攻击成功！你克了150滴血";
xue-=150;
cout<<endl<<"你还有"<<xue<<"滴血"; 
}
else
cout<<endl<<"守卫者挂菜！"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"逃跑失败！克50滴血 ";
cout<<endl<<"你还有"<<xue<<"滴血";
} 
if(xue<=0)
{
cout<<endl<<"你死了！";
return 0; 
}
}
cout<<endl<<"打败守卫者，经验加150点！获得750元";
jin+=150;
xue5=100; 
money+=750; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"升级！";
gong+=2;
xue+=20; 
} 
}//打守卫者结束 
if(b==6)//打卫道士 
{
while(xue6>0)
{
cout<<endl<<"卫道士拿出一把大斧头！";
cout<<endl<<"是否攻击/逃跑？(1/2)";
cin>>c;
if(c==1) 
{
xue6-=gong;

cout<<endl<<"卫道士克了"<<gong<<"滴血";
if(xue6>0)
{
cout<<endl<<"卫道士还有"<<xue6<<"滴血";
cout<<endl<<"卫道士狠狠砍了你一斧！你克了300滴血";
xue-=300;
cout<<endl<<"你还有"<<xue<<"滴血"; 
}
else
cout<<endl<<"卫道士挂菜！"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"逃跑失败！克50滴血 ";
cout<<endl<<"你还有"<<xue<<"滴血";
} 
if(xue<=0)
{
cout<<endl<<"你死了！";
return 0; 
}
}
cout<<endl<<"打败卫道士，经验加300点！获得1500元";
jin+=300;
xue6=100; 
money+=1500; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"升级！";
gong+=2;
xue+=20; 
} 
}//打卫道士结束
if(b==7)//打Him
{
cout<<"确定？(1/2)";
cin>>b;
if(b==1)
{ 
cout<<"天地间一声大响，Him出现了！"<<endl;
cout<<"“你就是Notch的传承人？！不堪一击！”";
while(hxue>0)
{
cout<<endl<<"Him冲了过来！";
cout<<endl<<"是否攻击/逃跑？(1/2)";
cin>>c;
if(c==1) 
{
hxue-=200;

cout<<endl<<"Him克了"<<200<<"滴血";
if(hxue>0)
{
cout<<endl<<"Him还有"<<hxue<<"滴血";
cout<<endl<<"你被Him打中了！你克了0滴血";
xue-=0;
if(xue<=0)
{
cout<<endl<<"你死了！";
return 0; 
}
else
cout<<endl<<"你还有"<<xue<<"滴血"; 
}
else
cout<<endl<<"Him死了！"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"逃跑失败！克50滴血 ";
cout<<endl<<"你还有"<<xue<<"滴血";
}
}
cout<<endl<<"你击杀了Him，你成了大英雄！";
him+=1; 
}//打Him结束
} 
}//冒险结束 
if(a==2)//商店
{
cout<<endl<<"你有"<<money<<"元"; 
cout<<endl<<"1--河豚10元(建议不要买) 2--治疗药水(瞬间治疗)30元 3--治疗药水(瞬间治疗2)50元 4--退出";
cin>>b;
if(b==1)
{
if(money>=10) 
{
cout<<endl<<"不听帅哥言，吃亏在眼前！";
return 0;
}
else
cout<<endl<<"钱不够！"; 
} 
if(b==2) 
{
if(money>=30)
{
money-=30;
xue+=100;
cout<<endl<<"购买成功！血加一百滴";
cout<<endl<<"你还有"<<xue<<"滴血"; 
}
else
cout<<endl<<"钱不够！"; 
}
if(b==3) 
{
if(money>=50)
{
money-=50;
xue+=200;
cout<<endl<<"购买成功！血加二百滴";
cout<<endl<<"你还有"<<xue<<"滴血";
}
else
cout<<"钱不够！"; 
} 
} //商店结束 

if(a==3)//显示状态 
{
cout<<endl<<endl<<"血量"<<xue<<"滴"<<" 攻击"<<gong<<"点 ";
cout<<endl<<ji<<"级 "<<"还有"<<50-jin<<"点经验升级"<<" 还有"<<money<<"元"<<endl; 
}//显示状态结束 
}//主程序结束 
cout<<endl<<"你赢了！"; 
}
else cout<<" 乱输个毛!"; 
return 0;
}
