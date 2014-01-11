#include "Ray.h"


Ray::Ray(void)
{
}

Ray::Ray(Position start,int angle,int depth,int weigtht/*,int length*/)
{
	Start=start;
	Angle=angle;
	Depth=depth;
	Weigtht=weigtht;
	//Length=length;
}

bool Ray::Detect_Object()
{
	//ÇáİßÑÉ åí ÅíÌÇÏ ÇáÍá ÇáÚÏÏí ááãÓÊíŞã ÇáĞí ãíáå íÓÇæí tan(Ray.Angle)
	//ãÚ ÌãíÚ ÇáÍæÇÌÒ "ÇáãÓÊŞíãÇÊ " İí ÇáÛÑİÉ
}

Position Ray::Detect_Object(int i)
{
	// åĞÇ ÇáÊÇÈÚ íÑÏ ÇáÍá äŞØÉ ÇáÍá ÇáãÊÔÑß ááãÓÊŞíãíä
}

Ray Ray::RelfetiveRay(Position Newstart)
{
	//ÒÇæíÉ ÇáÇäÚÇßÓ = ÒÇæíÉ ÇáæÑæÏ
	return Ray(Newstart,Angle,Depth+1,Weigtht-=10);
}


Ray::~Ray(void)
{
}
