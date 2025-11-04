#include "stdafx.h"
int main()
{
    //´Ê·¨·ÖÎö²¿·Ö
    initKeyMapping();//¹Ø¼ü×Ö
    initOperMapping();//ÔËËã·û
    initLimitMapping();//½ç·û
    initNode();
    scanner();
    BraMappingError();
    printNodeLink();
    printErrorLink();
    printIdentLink();

    //Óï·¨·ÖÎö²¿·Ö
    initGrammer();
    First();
    Follow();
    Select();
    MTable();
    Analysis();
	//ËÄÔªÊ½
    close();
  return 0;
}