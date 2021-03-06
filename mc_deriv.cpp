#include "m_expressions.h"
#include <stdlib.h>
#define pi 3.14

char *deriv101 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while (!(a!=0 && a!=1 && a!=-1 && b!=0));
    chprintf(deriv, "%s", "String(\"����� �������� ����������� ������� � �������� �����:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=sin(%s)", polynomial(buf[0],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "x_0=%s", poly2(buf[1],false,2,  1,3*a,1,1,"pi",  -b,a,1,1,""));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "String( )&y`&String(\"(\")&x_0&String(\")\")=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f",0.5*a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f", -0.5*a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=0.5");
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%s", fraction(buf[0],a,3,2));
    return deriv;
}

char *deriv102 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while (!(a!=0 && a!=1 && a!=-1));
    chprintf(deriv, "%s", "String(\"����� �������� ����������� ������� � �������� �����:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=cos(%s)", polynomial(buf[0],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "x_0=(%s)*(%s)", poly2(buf[1],false,2,  1,6,1,1,"pi",  -b,1,1,1,""), fraction(buf[2],1,1,a));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "String( )&y`&String(\"(\")&x_0&String(\")\")=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f",-0.5*a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f", 0.5*a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=-0.5");
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%s", fraction(buf[0],a,3,2));
    return deriv;
}

char *deriv103 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while (a==0 || abs(a)==1);
    chprintf(deriv, "%s", "String(\"����� �������� ����������� ������� � �������� �����:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=tg(%s)", polynomial(buf[0],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "x_0=(%s)*(%s)", poly2(buf[1],false,2,  1,4,1,1,"pi",  -b,1,1,1,""), fraction(buf[3],1,1,a));
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f",0.5*a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f", (float)a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=1");
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f", -2.0*a);
    return deriv;
}

char *deriv104 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while (!(a!=0 && abs(a)!=1 && b!=0));// && a!=1 && a!=-1));
    chprintf(deriv, "%s", "String(\"����� �������� ����������� ������� � �������� �����:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=ctg(%s)", polynomial(buf[0],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "x_0=(%s)*(%s)", poly2(buf[1],false,2,  1,-4,1,1,"pi",  -b,1,1,1,""), fraction(buf[3],1,1,a));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "String( )&y`&String(\"(\")&x_0&String(\")\")=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f",-0.5*a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f", -(float)a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f", (float)2*a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=sqrt(3)");
    return deriv;
}

char *deriv105 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while (!(a!=0 && abs(a)!=1));
    chprintf(deriv, "%s", "String(\"����� �������� ����������� ������� � �������� �����:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arcsin(%s)", polynomial(buf[0],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "x_0=(%s)*(%s)", poly2(buf[1],false,2,  1,2,1,2,"3",  -b,1,1,1,""), fraction(buf[3],1,1,a));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "String( )&y`&String(\"(\")&x_0&String(\")\")=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f",2.0*a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f", -(float)a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=0.5");
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=2");
    return deriv;
}

char *deriv106 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while (!(a!=0 && a!=1 && a!=-1));
    chprintf(deriv, "%s", "String(\"����� �������� ����������� ������� � �������� �����:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arctg(%s)", polynomial(buf[0],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[3],4-b,1,a));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "String( )&y`&String(\"(\")&x_0&String(\")\")=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f", 0.2*(float)a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f", 2.0*a);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=5");
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=-0.2");
    return deriv;
}

char *deriv107 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while (a<=0 || b==0 || abs(a)==1 || abs(b)==1);
    chprintf(deriv, "%s", "String(\"����� �������� ����������� ������� � �������� �����:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,%s)", a, polynomial(buf[0],2,b,"x",c,""));
    strcat(deriv, SEP);
    catprintf(deriv, "x_0=(%s)*(%s)", poly2(buf[1],false,2,  1,1,-1,1,chprintf(buf[4],"ln(%d)",a),  -c,1,1,1,""), fraction(buf[3],1,1,b));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "String( )&y`&String(\"(\")&x_0&String(\")\")=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%1.1f",(float)b);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%s", memb(buf[3],b,1,1,1,buf[4],false));
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=1");
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=1/ln(%d)^2", a);
    return deriv;
}

char *deriv108 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while (!(a>0 && b!=0 && a!=1 && b!=1));
    chprintf(deriv, "%s", "String(\"����� �������� ����������� ������� � �������� �����:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%d)^(%s)", a, polynomial(buf[0],2,b,"x",c,""));
    strcat(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],2-c,1,b));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "String( )&y`&String(\"(\")&x_0&String(\")\")=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%s", memb(buf[0],a*a*b,1,1,1,chprintf(buf[2],"ln(%d)",a),false));
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%d", 2*a*b);
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%s", memb(buf[0],a*a,1,1,1,buf[2],false));
    strcat(deriv, SEP);
    catprintf(deriv, "String( )&y`&String(\"(\")&x_0&String(\")\")=%d", 2*a);
    return deriv;
}

char *deriv201 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while ((a==0 || c==0) || b==0 || d==0 || b==d || a*d-b*c==0 || abs(a)==abs(c));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=sin((%s)/(%s))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=cos((%s)/(%s))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), a*d-b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=cos((%s)/(%s))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), -a*d+b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%s)*cos((%s)/(%s))", fraction(buf[3],a,1,c), polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=cos(%d/((%s)^2))", a*d-b*c, polynomial(buf[0],2,c,"x",d,""));
    return deriv;
}

char *deriv202 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; chprintf(deriv, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while ((a==0 || c==0) || abs(a)==c*c || b==0 || d==0 || a==c || b==d || a*d-b*c==0);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=cos((%s)/(%s))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-sin((%s)/(%s)))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), a*d-b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=sin((%s)/(%s))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), a*d-b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%s)*sin((%s)/(%s))", fraction(buf[3],a,1,c*c), polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=-sin(%d/((%s)^2))", a*d-b*c, polynomial(buf[0],2,c,"x",d,""));
    return deriv;
}

char *deriv203 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv,"");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while ((a==0 || c==0) || abs(a)==abs(c) || b==0 || d==0 || a==c || b==d || a*d-b*c==0 || abs(a*d-b*c)==c*c);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=tg((%s)/(%s))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(cos((%s)/(%s))^2))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), a*d-b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(sin((%s)/(%s))^2))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), -a*d+b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=ctg((%s)/(%s))*(%s)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), fraction(buf[6],a*d-b*c,1,c*c));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%s)*(1/(cos((%s)/(%s))^2))", fraction(buf[0],a,1,c), polynomial(buf[2],2,a,"x",b,""), polynomial(buf[3],2,c,"x",d,""));
    return deriv;
}

char *deriv204 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while ((a==0 || c==0) || b==0 || d==0 || a==c || b==d || a*d-b*c==0);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=ctg((%s)/(%s))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=-(1/(sin((%s)/(%s))^2))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), a*d-b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(sin((%s)/(%s))^2))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), -a*d+b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%s)*tg((%s)/(%s))", fraction(buf[1],a,1,c), polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(cos((%s)/(%s))^2))*(%d/(%s))", polynomial(buf[2],2,a,"x",b,""), polynomial(buf[3],2,c,"x",d,""), b*c-a*d, polynomial(buf[5],2,c,"x",d,""));
    return deriv;
}

char *deriv205 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while ((a==0 || c==0) || (c==0 && abs(d)==1) || b==0 || d==0 || a==c || b==d || a*d-b*c==0);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arcsin((%s)/(%s))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/sqrt(1-((%s)/(%s))^2))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), a*d-b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/sqrt((%s)^2-(%s)^2))*(%d/((%s)^2))", polynomial(buf[2],2,c,"x",d,""), polynomial(buf[0],2,a,"x",b,""), a*d-b*c, polynomial(buf[4],2, c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=arccos((%s)/(%s))*(%d/((%s)^2))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""), b*c-a*d, polynomial(buf[5],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=1/sqrt(1-((%s)^2)/((%s)^4))", polynomial(buf[2],2,a,"x",b,""), polynomial(buf[3],2,c,"x",d,""));
    return deriv;
}

char *deriv206 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];strcpy(deriv, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while ((a==0 || c==0) || abs(a)==c*c || b==0 || d==0 || a==c || b==d || a*d-b*c==0 || abs(a*d-b*c)==1);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arctg((%s)/(%s))", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=%d/((%s)^2+(%s)^2)", a*d-b*c, polynomial(buf[0],2,c,"x",d,""), polynomial(buf[2],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=((%d)*(%s)^2)/((%s)^2+(%s)^2)", b*c-a*d, polynomial(buf[2],2,c,"x",d,""), polynomial(buf[0],2,c,"x",d,""), polynomial(buf[2],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%s)*(1/(cos((%s)/(%s))^2))", fraction(buf[0],a,1,c*c), polynomial(buf[1],2,a,"x",b,""), polynomial(buf[2],2,c,"x",d,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=1/(1+(%d)/((%s)^4))", (int)pow(a*d+b*c,2), polynomial(buf[3],2,c,"x",d,""));
    return deriv;
}

char *deriv207 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv,"");
    int a,b,c,d,p;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
        p=rndr(r);
    }while (!(p>0 && p!=1 && a!=c && b!=d && a*d!=b*c && abs(a)+abs(c)!=0 && !(c==0 && abs(d)==1) && !(a==0 && abs(b)==1) && b*c-a*d!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,(%s)/(%s))", p, polynomial(buf[0], 2, a,"x",b,""), polynomial(buf[1], 2, c,"x",d,""));
    catprintf(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/((%s)*(%s)*ln(%d))", a*d-b*c, buf[0], buf[1], p);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%s)/((%s)*ln(%d))", memb(buf[6], b*c-a*d, 1, 1,1, buf[1], false), buf[0], p);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%s)/((%s)*ln(%d))", buf[1], buf[0], p);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%s", memb(buf[6], 1,a*d-b*c,2,1,buf[1],false));
    return deriv;
}

char *deriv208 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv,"");
    int a,b,c,d,p;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
        p=rndr(r);
    }while (!(p>0 && p!=1 && abs(a)!=abs(c) && b!=d && a*d!=b*c && a!=0 && c!=0 && abs(a*d-b*c)!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%d)^((%s)/(%s))", p, polynomial(buf[0], 2, a,"x",b,""), polynomial(buf[1], 2, c,"x",d,""));
    catprintf(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^((%s)/(%s))*ln(%d)*(%d)/((%s)^2)", p, buf[0], buf[1], p, a*d-b*c, buf[1]);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^((%s)/(%s))*(%s)*ln(%d)", p, buf[0], buf[1], fraction(buf[3], a,1, c), p);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%s)/((%s)^3)*(%d)^((%s)/(%s))",
        memb(buf[3], a*d-b*c,1,1,1, buf[0], false),
        buf[1],
        p,
        polynomial(buf[4], 2, a-c, "x", b-d, ""),
        buf[1]
    );
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(%s)*ln(%d)", p, memb(buf[3], a*d-b*c,1,-2,1,buf[1],false), p);
    return deriv;
}

char *deriv209 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv,"");
    int a,b,c,d,q;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
        q=rndr(r);
    }while (!(q>0 && q!=1 && a!=c && b!=d && a*d!=b*c && a!=0 && c!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=!((%s)/(%s))^(%d)", polynomial(buf[0], 2, a,"x",b,""), polynomial(buf[1], 2, c,"x",d,""), q);
    catprintf(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%s)*((%d)/((%s)^2))",
        memb(buf[5], q,1,q-1,1, chprintf(buf[4],"((%s)/(%s))", buf[0], buf[1]), false),
        a*d-b*c,
        buf[1]
    );
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(!((%s)/(%s))^(%d))*((%d)/((%s)^2))*ln(%d)",
        buf[0], buf[1], q,
        b*c-a*d, buf[1],
        q
    );
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(!((%s)/(%s))^(%d))*((%d)/((%s)^2))*ln((%s)/(%s))",
        buf[0], buf[1], q,
        b*c-a*d, buf[1],
        buf[0], buf[1]
    );
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%s", memb(buf[5], q,1,q-1,1,chprintf(buf[4],"((%d)/((%s)^2))", a*d-b*c, buf[1]), false));
    return deriv;
}

char *deriv301 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv,"");
    int a,p,b;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while (!(b!=0 && abs(p)!=abs(a) && p!=0 && p!=1 && a>0 && a!=1 && b!=1 && abs(b*p)!=abs(a)));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=ln(%d)*sin(%s)^(%d)", a, polynomial(buf[0],1,b,"x"), p);
    catprintf(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=ln(%d)*(%s)*cos(%s)",
        a,
        memb(buf[3],b*p,1,p-1,1,chprintf(buf[4],"sin(%s)",buf[0]), false),
        buf[0]
    );
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%s)*(%s)*cos(%s)",
        fraction(buf[1],b*p,1,a),
        memb(buf[3],1,1,p-1,1,chprintf(buf[4],"sin(%s)",buf[0]), false),
        buf[0]
    );
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=ln(%d)*(%s)*cos(%s)^(%d)",
        a,
        memb(buf[3],b*p,1,p-1,1,chprintf(buf[4],"sin(%s)",buf[0]), false),
        buf[0],
        p
    );
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%s)*(%s)*cos(%s)",
        fraction(buf[1],p,1,a),
        memb(buf[3],1,1,p-1,1,chprintf(buf[4],"sin(%s)",buf[0]), false),
        buf[0]
    );
    return deriv;
}

char *deriv302 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,p,n,m;
    do{
        b=rndr(r);
        p=rndr(r);
        n=rndr(r);
        m=rndr(r);
    }while (!(b!=0 && abs(n)!=abs(m) && p!=0 && p!=1 && n<m && m!=0 && n!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arcsin((%s)*pi)*(cos(%s)^(%d))",
        fraction(buf[0],n,1,m),
        polynomial(buf[1],1,b,"x"),
        p
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=arcsin((%s)*pi)*(%s)*sin(%s)",
        fraction(buf[0],n,1,m),
        memb(buf[2],-b*p,1,p-1,1,chprintf(buf[4],"cos(%s)",buf[1]),false),
        buf[1]
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=((%d)/sqrt(1-(%s)^2))*(%s)*sin(%s)",
        -b*p,
        fraction(buf[0],n,1,m),
        memb(buf[2],-b*p,1,p-1,1,chprintf(buf[4],"cos(%s)",buf[1]),false),
        buf[1]
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=((%d)/sqrt(1-(%s)^2))*(cos(%s)^(%d))%s*arcsin(%s)*sin(%s)",
        -b*p,
        fraction(buf[0],n,1,m),
        buf[1],p,
        memb(buf[2],-b*p,1,p-1,1, chprintf(buf[4],"cos(%s)",buf[1]),true),
        buf[0],
        buf[1]
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=arcsin(%s)*(%s)",
        fraction(buf[0],n,1,m),
        memb(buf[2],b*p,1,p-1,1, chprintf(buf[4],"(-sin(%s))",buf[1]),false)
    );
    return deriv;
}

char *deriv303 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,p;
    do{
        b=rndr(r);
        p=rndr(r);
        a=rndr(r);
    }while (!(b!=0 && p>0 && p!=1 && a>0 && a!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(1/ln(%d))*(tg(%s)^(%d))",
        a,
        polynomial(buf[0],1,b,"x"),
        p
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=(%s)/(ln(%d)*(cos(%s)^2))",
        memb(buf[2], b*p,1,p-1,1, chprintf(buf[3],"tg(%s)",buf[0]),false),
        a,
        buf[0]
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=-(1/((%d)*ln(%d)))*tg(%s)^(%d)+((%s)/(ln(%d)*cos(%s)^(%d)))",
        a,a, buf[0], p,
        memb(buf[3], b*p, 1, p-1,1, chprintf(buf[5],"sin(%s)",buf[0]), false), a, buf[0], p+1
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=((%d)/ln(%d))*(1/(cos(%s)^(%d)))", p*b, a, buf[0], 2*p);
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=((%d)/((%d)*ln(%d)))*((%s)/(cos(%s)^2))",
        -b*p, a,a,
        memb(buf[2],1,1,p-1,1,chprintf(buf[3],"tg(%s)",buf[0]),false),buf[0]
    );
    return deriv;
}

char *deriv304 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,p;
    do{
        b=rndr(r);
        p=rndr(r);
        a=rndr(r);
    }while (!(b!=0 && p>0 && p!=1 && a>0 && a!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(1/(ln(%d)^2))*(ctg(%s)^(%d))",
        a,
        polynomial(buf[0],1,b,"x"),
        p
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=(%s)/((ln(%d)^2)*(sin(%s)^2))",
        memb(buf[2], -b*p,1,p-1,1, chprintf(buf[3],"ctg(%s)",buf[0]),false),
        a,
        buf[0]
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=((%d)/(ln(%d)^2))*((%s)/(cos(%s)^2))",
        b*p, a,
        memb(buf[2],1,1,p-1,1,chprintf(buf[3],"ctg(%s)",buf[0]),false),buf[0]
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=-(2/((%d)*ln(%d)^3))*ctg(%s)^(%d)-((%s)/((ln(%d)^2)*(sin(%s)^2)))",
        a,a, buf[0], p,
        memb(buf[3], b*p,1,p-1,1, chprintf(buf[5],"ctg(%s)",buf[0]),false), a, buf[0]
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=((%d)/((%d)*ln(%d)))*(1/(sin(%s)^(%d)))", -p*b, a,a, buf[0], 2*p);
    return deriv;
}

char *deriv305 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,p;
    do{
        b=rndr(r);
        p=rndr(r);
        a=rndr(r);
    }while (!(a!=0 && b!=0 && p>0 && p!=1 && a>=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(1/cos(%d))*(arcsin(%s)^(%d))",
        a,
        polynomial(buf[0],1,b,"x"),
        p
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=(%s)/(sqrt(%s)*cos(%d))",
        memb(buf[3], b*p,1,p-1,1,chprintf(buf[4],"arcsin(%s)",polynomial(buf[0],1,b,"x")),false),
        polynomial(buf[1],2, 1,"",-b*b,"x^2"),
        a
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=(sin(%d)/(cos(%d)^2))*(arcsin(%s)^(%d))+(%s)/(sqrt(%s)*cos(%d))",
        a,a,buf[0],p,
        memb(buf[4],b*p,1,p-1,1,chprintf(buf[5],"arcsin(%s)",buf[0]),false),
        buf[1],a
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=((%d)/(cos(%d)))*(1/(%s))",
        b*p, a,
        memb(buf[5],1,1,p-1,1, chprintf(buf[6],"sqrt(%s)",buf[1]), false)
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=(%s)/(%s*sqrt(%s))",
        memb(buf[4],p,1,p-1,1,chprintf(buf[8],"arcsin(%s)",buf[0]),false),
        memb(buf[5],b,1,1,1,chprintf(buf[6],"cos(%d)",a),false),
        buf[1]
    );
    return deriv;
}

char *deriv306 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,p;
    do{
        b=rndr(r);
        p=rndr(r);
        a=rndr(r);
    }while (!(a!=0 && b!=0 && p>0 && p!=1 && a>=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(sin(%d)/2)*(arctg(%s)^(%d))",
        a,
        polynomial(buf[0],1,b,"x"),
        p
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=(%s)*((%s)/(%s))",
        memb(buf[3], b*p,2,1,1,chprintf(buf[4],"sin(%s)",buf[0]),false),
        memb(buf[2], 1,1,p-1,1,chprintf(buf[5],"arctg(%s)",buf[0]), false),
        polynomial(buf[1],2, 1,"",b*b,"x^2")
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=(cos(%d)/2)*(arctg(%s)^(%d))+(%s)*(%s)/(%s)",
        a,buf[0],p,
        memb(buf[3],b*p,2,1,1,chprintf(buf[6],"sin(%d)",a),false),
        memb(buf[4],1,1,p-1,1,chprintf(buf[8],"arctg(%s)",buf[0]),false),
        buf[1]
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=(sin(%d)/2)*(%s)",
        a,
        memb(buf[2],p*b,1,-(p-1),1,chprintf(buf[8],"(%s)",buf[1]),false)
    );
    catprintf(deriv,SEP);
    catprintf(deriv, "y`=(sin(%d)/4)*((%s)/(%s))",
        a,
        memb(buf[2],1,1,p-1,1,chprintf(buf[9],"arctg(%s)",buf[0]),false),
        memb(buf[3],b,1,1,1,buf[1],false)
    );
    return deriv;
}

char *deriv307 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c,p;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        p=rndr(r);
    }while(!(c>0 && c!=1 && b!=0 && p!=0 && p!=1 && b!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=cos(%d)^2*(log(%d,%s)^(%d))", a, c, polynomial(buf[0],1,b,"x"),p);
    catprintf(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=((cos(%d)^2)*(%s))/(x*ln(%d))", a,memb(buf[1],p,1,p-1,1,chprintf(buf[2],"log(%d,%s)",c,buf[0]),false),c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=((cos(%d)^2)*(%s))/(x*ln(%d))", a,memb(buf[1],p*b,1,p-1,1,chprintf(buf[2],"log(%d,%s)",c,buf[0]),false),c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=sin(%d)*(log(%d,%s)^(%d))+((cos(%d)^2)*(%s))/(x*ln(%d))", 2*a,c,buf[0],p, a,memb(buf[1],p*b,1,p-1,1,chprintf(buf[2],"log(%d,%s)",c,buf[0]),false),c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=sin(%d)*(%s)", 2*a, memb(buf[1],p,1,p-1,1,chprintf(buf[2],"1/(x*ln(%d))",c),false));
    return deriv;
}

char *deriv308 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c,p;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        p=rndr(r);
    }while(!(c>0 && c!=1 && b!=0 && a!=0 && p!=0 && p!=1 && !(abs(b)==1 && p<0)));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    if (p>0)
    {
        catprintf(deriv, "y=arctg(%d)*(%d)^((%s)^(%d))", a,c,polynomial(buf[0],1,b,"x"),p);
        catprintf(deriv, SEP);
        catprintf(deriv, "%s", "y`=...");
        strcat(deriv, SEP);
        catprintf(deriv, SEP);
        catprintf(deriv, "y`=arctg(%d)*ln(%d)*(%s)*(%d)^((%s)^(%d))", a,c,memb(buf[1],pow(b,p)*p,1,p-1,1,"x",false), c,buf[0],p);
        catprintf(deriv, SEP);
        catprintf(deriv, "y`=arctg(%d)*(%s)*((%d)^((%s)^(%d)-1))", a,memb(buf[2],b,1,p,1,buf[0],false),c,buf[0],p);
        catprintf(deriv, SEP);
        catprintf(deriv, "y`=(%s)+arctg(%d)*ln(%d)*(%s)*(%d)^((%s)^(%d))",
            memb(buf[2],1,1+a*a,1,1,chprintf(buf[2],"(%d)^((%s)^(%d))", c, buf[0], p),false),
            a,c,memb(buf[1],pow(b,p)*p,1,p-1,1,"x",false), c,buf[0],p
        );
        catprintf(deriv, SEP);
        catprintf(deriv, "y`=(%s)", memb(buf[4],1,1+a*a,1,1, chprintf(buf[3],"ln(%d)*(%s)*(%d)^((%s)^(%d))",c,memb(buf[1],pow(b,p)*p,1,p-1,1,"x",false), c,buf[0],p),false));
    }
    else
    {
        catprintf(deriv, "y=arctg(%d)*(%d)^((%s)^(%d))", a,c,polynomial(buf[0],1,b,"x"),p);
        catprintf(deriv, SEP);
        catprintf(deriv, "%s", "y`=...");
        strcat(deriv, SEP);
        catprintf(deriv, SEP);
        catprintf(deriv, "y`=arctg(%d)*ln(%d)*(%s)*(%d)^((%s)^(%d))", a,c,memb(buf[1],p,pow(b,-p),p-1,1,"x",false), c,buf[0],p);
        catprintf(deriv, SEP);
        catprintf(deriv, "y`=arctg(%d)*(%s)*((%d)^((%s)^(%d)-1))", a,memb(buf[2],b,1,p,1,buf[0],false),c,buf[0],p);
        catprintf(deriv, SEP);
        catprintf(deriv, "y`=(%s)+arctg(%d)*ln(%d)*(%s)*(%d)^((%s)^(%d))",
            memb(buf[2],1,1+a*a,1,1,chprintf(buf[2],"(%d)^((%s)^(%d))", c, buf[0], p),false),
            a,c,memb(buf[1],p,pow(b,-p),p-1,1,"x",false), c,buf[0],p
        );
        catprintf(deriv, SEP);
        catprintf(deriv, "y`=(%s)", memb(buf[4],1,1+a*a,1,1, chprintf(buf[3],"ln(%d)*(%s)*(%d)^((%s)^(%d))",c,memb(buf[1],p,pow(b,-p),p-1,1,"x",false), c,buf[0],p),false));
    }
    return deriv;
}

char *deriv401 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv,"");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while (!(a>0 && a!=1 && b!=0 && c!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,sin(%s))+1/arctg(%d)",a,polynomial(buf[0],1,b,"x"),c);
    catprintf(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    strcat(deriv, SEP);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/ln(%d)*ctg(%s)", b,a,buf[0]);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/ln(%d)*tg(%s)", b,a,buf[0]);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(ln(%d)*sin(%s))-1/arctg(%d)^2", a,buf[0],c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/ln(%d)*ctg(%s)-1/((%d)*arctg(%d)^2)", b,a,buf[0],1+c*c,c);
    return deriv;
}

char *deriv402 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while (!(b!=0 && a>0 && a!=1 && c!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,cos(%s))+arctg(%d)^2", a,polynomial(buf[0],1,b,"x"),c);
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, SEP); catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/ln(%d)*tg(%s)", -b,a,buf[0]);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/ln(%d)*ctg(%s)", b,a,buf[0]);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(ln(%d)*cos(%s))+2*arctg(%d)",a,buf[0],c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/ln(%d)*tg(%s)+%s",-b,a,buf[0], memb(buf[3], 2,1+c*c,1,1,chprintf(buf[4], "arctg(%d)",c),false));
    return deriv;
}

char *deriv403 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while (!(b!=0 && d>0 && a>0 && a!=1 && abs(b)!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,%s)+cos(%d)^3", a,polynomial(buf[0],2,d,"",1,chprintf(buf[3],"tg(%s)", polynomial(buf[1],1,b,"x"))),c);
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, SEP);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d/((%s)*ln(%d)))*(1/cos(%s)^2)", b,buf[0],a,buf[1]);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d*cos(%s)^2)/(%s)", b,buf[1],buf[0]);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d/((%s)*ln(%d)))*(1/cos(%s)^2)-3*cos(%d)^2*sin(%d)", b,buf[0],a,buf[1],c,c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/((%s)*sin(%s)^2))", buf[0],buf[1]);
    return deriv;
}

char *deriv404 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while (!(b!=0 && d>0 && a>0 && a!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,%s)+sin(%d)", a,polynomial(buf[0],2,d,"",1,chprintf(buf[2],"ctg(%s)", polynomial(buf[1],1,b,"x"))),c);
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, SEP);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d/((%s)*ln(%d)))*(1/sin(%s)^2)", -b,buf[0],a,buf[1]);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d/((%s)*ln(%d)))*(1/cos(%s)^2)", b,buf[0],a,buf[1]);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-2/(sin(%s)*ln(%d))+sin(%d)", polynomial(buf[2],1,2*b,"x"),a,c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d/((%s)*ln(%d)))*(1/sin(%s)^2)+cos(%d)", -b,buf[0],a,buf[1],c);
    return deriv;
}

char *deriv405 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while(!(b!=0 && a>0 && a!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,%s)+cos(%d)^2", a, chprintf(buf[1],"arcsin(%s)", polynomial(buf[0],1,b,"x")), c);
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, SEP); catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/(%s*sqrt(%s)*ln(%d))",b,buf[1],polynomial(buf[2],2,1,"",-b*b,"x^2"),a);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/(%s*sqrt(%s)*ln(%d))",b,buf[1],polynomial(buf[3],2,1,"",b*b,"x^2"),a);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(sqrt(%s)*ln(%d))",buf[2],a);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/(%s*sqrt(%s))+sin(%d)", b,buf[1],buf[2],2*c);
    return deriv;
}

char *deriv406 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while(!(b!=0 && a>0 && a!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,%s)+arcctg(%d)", a, chprintf(buf[1],"arctg(%s)", polynomial(buf[0],1,b,"x")), c);
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, SEP); catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/(%s*(%s)*ln(%d))",b,buf[1],polynomial(buf[2],2,1,"",b*b,"x^2"),a);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d/((%s)*ln(%d))-1/(%d)",b,polynomial(buf[3],2,1,"",b*b,"x^2"),a,1+c*c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/((%s)*sqrt(%s))+arcctg(%d)",buf[1], buf[2], c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%s)/(arctg(%s)*ln(%d))", memb(buf[5],b,1,1,1,buf[2],false),buf[0],a);
    return deriv;
}

char *deriv407 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while(!(b!=0 && a>0 && a!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%d)^(sin(%s))+(1/2)*tg(%d)", a, polynomial(buf[0],1,b,"x"), c);
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, SEP); catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(sin(%s))*(%s)*ln(%d)",a,buf[0],memb(buf[1],b,1,1,1,chprintf(buf[2],"cos(%s)",buf[0]),false),a);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(sin(%s))*(%s)*ln(%d)-1/(2*cos(%d)^2)",a,buf[0],memb(buf[1],b,1,1,1,chprintf(buf[2],"cos(%s)",buf[0]),false),a,c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(cos(%s))*(%s)",a,buf[0],memb(buf[1],b,1,1,1,chprintf(buf[2],"ln(%d)",a),false));
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/2)*sin(%s)*(%d)^(sin(%s)-1)", polynomial(buf[1],1,2*b,"x"),a,buf[0]);
    return deriv;
}

char *deriv408 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while(!(b!=0 && a>0 && a!=1 && c!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%d)^(cos(%s))+ln(%d)^2", a, polynomial(buf[0],1,b,"x"), c);
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, SEP); catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(cos(%s))*(%s)*ln(%d)",a,buf[0],memb(buf[1],-b,1,1,1,chprintf(buf[2],"sin(%s)",buf[0]),false),a);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(sin(%s))*(%s)+ln(%d)^2",a,buf[0],memb(buf[1],b,1,1,1,chprintf(buf[2],"ln(%d)",a),false),c);
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(cos(%s)-1)*(%s)",a,buf[0],memb(buf[1],b,1,1,1,chprintf(buf[2],"cos(%s)",buf[0]),false));
    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(cos(%s))*(%s)*ln(%d)%s",a,buf[0],memb(buf[1],-b,1,1,1,chprintf(buf[2],"sin(%s)",buf[0]),false),a,memb(buf[6],2,c,1,1,chprintf(buf[7],"ln(%d)",c),true));
    return deriv;
}

char *deriv501 (const range& r, char *deriv)
{
    char buf[15][BUFSZ]; strcpy(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while(!(a!=0 && b!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(1+sin(%s))^sqrt(%s)", polynomial(buf[0],1,a,"pi*x"), polynomial(buf[1],2, b,"x",c,""));
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, "%s%s", SEP,SEP);
    catprintf(deriv, "y`=(1+sin(%s))^sqrt(%s)*(%s)",
        polynomial(buf[0],1,a,"pi*x"), polynomial(buf[1],2, b,"x",c,""),
        poly2ns(buf[2],2,
            1,1,1,1, chprintf(buf[3],chprintf(buf[12],"(%s)*ln(1+sin(%s))/sqrt(%s)", fraction(buf[11],b,1,2)), polynomial(buf[4],1,a,"pi*x"), polynomial(buf[5],2,b,"x",c,"")),
            a,1,1,1, chprintf(buf[6],"(sqrt(%s)/(1+sin(%s)))*pi*cos(%s)", polynomial(buf[7],2,b,"x",c,""), polynomial(buf[8],1,a,"pi*x"), polynomial(buf[9],1,a,"pi*x"))
        )
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=sqrt(%s)*(1+sin(%s))^(sqrt(%s)-1)*(%s)",
        polynomial(buf[0],2, b,"x",c,""),
        polynomial(buf[1],1, a,"pi*x"),
        polynomial(buf[2],2, b,"x",c,""),
        polynomial(buf[3],1, a,chprintf(buf[4], "pi*cos(%s)", polynomial(buf[1],1, a,"pi*x")))
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(1+sin(%s))^sqrt(%s)*ln(1+sin(%s))*(%s)",
        polynomial(buf[0],1, a,"pi*x"),
        polynomial(buf[1],2, b,"x",c,""),
        polynomial(buf[2],1, a,"pi*x"),
        memb(buf[3], b,2,-1,1,chprintf(buf[4],"sqrt(%s)", polynomial(buf[5],2, b,"x",c,"")),false)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)*ln(1+sin(%s))+(sqrt(%s)/(1+sin(%s)))*(%s)",
        memb(buf[0], b,2,-1,1,chprintf(buf[1],"sqrt(%s)", polynomial(buf[2],2, b,"x",c,"")),false),
        polynomial(buf[3],1, a,"pi*x"),
        polynomial(buf[4],2, b,"x",c,""),
        polynomial(buf[5],1, a,"pi*x"),
        polynomial(buf[6],1,a,chprintf(buf[7],"pi*cos(%s)", polynomial(buf[8],1, a,"pi*x")))
    );
    return deriv;
}

char *deriv502 (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; chprintf(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while(!(a!=0 && c!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%s)^sin(%s)",
        polynomial(buf[0],2, a,"x^2",b,""),
        poly2ns(buf[1],1, c,24,1,1,"pi*x")
    );
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, "%s%s", SEP, SEP);
    catprintf(deriv, "y`=(%s)^sin(%s)*(%s)",
        polynomial(buf[0],2, a,"x^2",b,""),
        poly2ns(buf[1],1, c,24,1,1,"pi*x"),
        poly2ns(buf[2],2,
            c,24,1,1, chprintf(buf[3],"pi*cos(%s)*ln(%s)", poly2ns(buf[4],1, c,24,1,1,"pi*x"), polynomial(buf[5],2, a,"x^2",b,"")),
            2*a,1,1,1, chprintf(buf[6],"sin(%s)*x/(%s)", poly2ns(buf[7],1, c,24,1,1,"pi*x"), polynomial(buf[8],2, a,"x^2",b,""))
        )
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)*(%s)^sin(%s)*ln(%s)*cos(%s)",
        poly2ns(buf[1],1, c,24,1,1,"pi*x"),
        polynomial(buf[2],2, a,"x^2",b,""),
        poly2ns(buf[3],1, c,24,1,1,"pi*x"),
        polynomial(buf[4],2, a,"x^2",b,""),
        poly2ns(buf[5],1, c,24,1,1,"pi*x")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)*(%s)^cos(%s)*ln(%s)",
        poly2ns(buf[1],1, c,24,1,1,"pi*x"),
        polynomial(buf[2],2, a,"x^2",b,""),
        poly2ns(buf[3],1, c,24,1,1,"pi*x"),
        polynomial(buf[4],2, a,"x^2",b,"")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=sin(%s)*(%s)^(sin(%s)-1)*(%s)",
        poly2ns(buf[1],1, c,24,1,1,"pi*x"),
        polynomial(buf[2],2, a,"x^2",b,""),
        poly2ns(buf[3],1, c,24,1,1,"pi*x"),
        polynomial(buf[4],1, 2*a,"x")
    );
    if (strstr(deriv, "1*"))
        return NULL;
    return deriv;
}

char *deriv503 (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b,c,p;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        p=rndr(r);
    }while(!(a>0 && b!=0 && p!=0 && p-1!=0));
    char *z;
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
//    catprintf(deriv, "y=((1/pi)*arcsin(%s))^(%s)",
//        polynomial(buf[0],2, 1,chprintf(buf[1],"arcsin(%s)",poly2ns(buf[2],1,1,a,1,1,"x")), c,""),
//        memb(buf[9], b,1,p,1,"x",false)
//    );
    catprintf(deriv, "y=((1/pi)*arcsin(%s))^(%s)",
        poly2ns(buf[0],1, 1,a,1,1,"x"),
        memb(buf[9], b,1,p,1,"x",false)
    );
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, "%s%s", SEP,SEP);
    catprintf(deriv, "y`=(%s)^(%s)*((%s)*ln(%s)+(%s)/((%s)*sqrt(%s)))",
        polynomial(buf[0],2, 1,chprintf(buf[1],"(1/pi)*arcsin(%s)", poly2ns(buf[2],1,1,a,1,1,"x")), c,""),
        memb(buf[3], b,1,p,1,"x",false),
        memb(buf[4], b*p,1,p-1,1,"x",false),
        polynomial(buf[5],2, 1,chprintf(buf[6],"(1/pi)*arcsin(%s)", poly2ns(buf[7],1,1,a,1,1,"x")), c,""),
        memb(buf[8],b,1,p,1,"x",false),
        polynomial(buf[9],2, 1,chprintf(buf[10],"(1/pi)*arcsin(%s)", poly2ns(buf[11],1,1,a,1,1,"x")), c,""),
        polynomial(buf[12],2, a*a,"", -1,"x^2")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)^(%s)*((%s)*ln(%s))",
        polynomial(buf[0],2, 1,chprintf(buf[1],"(1/pi)*arcsin(%s)", poly2ns(buf[2],1,1,a,1,1,"x")), c,""),
        memb(buf[3], b,1,p,1,"x",false),
        memb(buf[4], b*p,1,p-1,1,"x",false),
        polynomial(buf[5],2, 1,chprintf(buf[6],"(1/pi)*arcsin(%s)", poly2ns(buf[7],1,1,a,1,1,"x")), c,"")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=((1/pi))*(%s)*(%s)^(%s-1)*(1/sqrt(%s))",
        poly2ns(buf[9],2, b,1,p,1,"x", -1,1,1,1,""),
        polynomial(buf[0],2, 1,chprintf(buf[1],"(1/pi)*arcsin(%s)", poly2ns(buf[2],1,1,a,1,1,"x")), c,""),
        memb(buf[3], b,1,p,1,"x",false),
        polynomial(buf[4],2, a*a,"", -1,"x^2")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=((1/pi)*(1/sqrt(%s))^(%s))",
        polynomial(buf[10],2, a*a,"", -1,"x^2"),
        memb(buf[4], b*p,1,p-1,1,"x",false)
    );
    return deriv;
}


char *deriv504 (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while(!(a>0 && d!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%s)^tg(%s)",
        polynomial(buf[0],3, a,"x^2", b,"x", c,""),
        memb(buf[1], d,12,1,1,"pi*x",false)
    );
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, "%s%s", SEP,SEP);
    catprintf(deriv, "y`=(%s)^tg(%s)*((%s)*(1/cos(%s)^2)*ln(%s)+tg(%s)*(%s)/(%s))",
        polynomial(buf[0],3, a,"x^2", b,"x", c,""),
        memb(buf[1], d,12,1,1,"pi*x",false),
        memb(buf[2], d,12,1,1,"pi", false),
        memb(buf[3], d,12,1,1,"pi*x",false),
        polynomial(buf[4],3, a,"x^2", b,"x", c,""),
        memb(buf[5], d,12,1,1,"pi*x",false),
        polynomial(buf[6],2, 2*a,"x",b,""),
        polynomial(buf[7],3, a,"x^2", b,"x", c,"")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)^tg(%s)*(%s*(1/cos(%s)^2)*ln(%s))",
        polynomial(buf[0],3, a,"x^2", b,"x", c,""),
        memb(buf[1], d,12,1,1,"pi*x",false),
        memb(buf[2], d,12,1,1,"pi", false),
        memb(buf[3], d,12,1,1,"pi*x",false),
        polynomial(buf[4],3, a,"x^2", b,"x", c,"")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=tg(%s)*(%s)^(tg(%s)-1)*(%s)",
        memb(buf[9], d,12,1,1,"pi*x",false),
        polynomial(buf[0],3, a,"x^2", b,"x", c,""),
        memb(buf[1], d,12,1,1,"pi*x",false),
        polynomial(buf[2],2, 2*a,"x", b,"")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)^(%s/(cos(%s)^2))",
        polynomial(buf[2],2, 2*a,"x", b,""),
        memb(buf[9], d,1,1,1,"pi",false),
        memb(buf[1], d,12,1,1,"pi*x",false)
    );
    return deriv;
}

char *deriv505 (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while(!(a>0 && d!=0 && abs(d)!=1));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=((1/pi)*arctg(%s))^ln(%s)",
        poly2ns(buf[0],1, 1,d,1,1,"x"),
        polynomial(buf[1],3, a,"x^2", b,"x", c,"")
    );
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, "%s%s", SEP,SEP);
    catprintf(deriv, "y`=((1/pi)*arctg(%s))^ln(%s)*((%s)/(%s)*ln((1/pi)*arctg(%s))+((%d)*ln(%s))/((%s)*arctg(%s)))",
        poly2ns(buf[0],1, 1,d,1,1,"x"),
        polynomial(buf[1],3, a,"x^2", b,"x", c,""),
        polynomial(buf[2],2, 2*a,"x", b,""),
        polynomial(buf[3],3, a,"x^2", b,"x", c,""),
        poly2ns(buf[4],1, 1,d,1,1,"x"),
        d,
        polynomial(buf[5],3, a,"x^2", b,"x", c,""),
        polynomial(buf[6],2, d*d,"", 1,"x^2"),
        poly2ns(buf[4],1, 1,d,1,1,"x")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=((1/pi)*arctg(%s))^ln(%s)*((%s)/(%s)*ln((1/pi)*arctg(%s)))",
        poly2ns(buf[0],1, 1,d,1,1,"x"),
        polynomial(buf[1],3, a,"x^2", b,"x", c,""),
        polynomial(buf[2],2, 2*a,"x", b,""),
        polynomial(buf[3],3, a,"x^2", b,"x", c,""),
        poly2ns(buf[4],1, 1,d,1,1,"x")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=ln(%s)*((1/pi)*arctg(%s))^(ln(%s)-1)*(%d)/((%s)*arctg(%s))",
        polynomial(buf[1],3, a,"x^2", b,"x", c,""),
        poly2ns(buf[2],1, 1,d,1,1,"x"),
        polynomial(buf[3],3, a,"x^2", b,"x", c,""),
        d,
        polynomial(buf[4],2, 1,"x^2", d*d,""),
        poly2ns(buf[5],1, 1,d,1,1,"x")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=ln(%s)*((1/pi)*arctg(%s))^(ln(%s)-1)*(1/(%s))",
        polynomial(buf[1],3, a,"x^2", b,"x", c,""),
        poly2ns(buf[2],1, 1,d,1,1,"x"),
        polynomial(buf[3],3, a,"x^2", b,"x", c,""),
        polynomial(buf[4],1, d,chprintf(buf[5], "arctg(%s)", poly2ns(buf[7],1, 1,d,1,1,"x")))
    );
    return deriv;
}

char *deriv506 (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while(!(a!=0 && b!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=cos(%s)^(e^(%s))",
        polynomial(buf[0],1, a,"pi*x"),
        polynomial(buf[1],2, b,"x", c,"")
    );
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, "%s%s", SEP,SEP);
    catprintf(deriv, "y`=e^(%s)*(cos(%s)^(e^(%s)))*(%s)",
        polynomial(buf[1],2, b,"x", c,""),
        polynomial(buf[2],1, a,"pi*x"),
        polynomial(buf[3],2, b,"x", c,""),
        polynomial(buf[4],2,
            b,  chprintf(buf[5],"ln(cos(%s))",polynomial(buf[6],1, a,"pi*x")), 
            -a, chprintf(buf[7],"pi*tg(%s)",polynomial(buf[8],1, a,"pi*x"))
        )
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)*e^(%s)*(cos(%s)^(e^(%s)-1))*sin(%s)",
        polynomial(buf[0],1,-a,"pi"),
        polynomial(buf[1],2, b,"x", c,""),
        polynomial(buf[2],1, a,"pi*x"),
        polynomial(buf[3],2, b,"x", c,""),
        polynomial(buf[4],1, a,"pi*x")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(cos(%s)^(e^(%s)))*ln(cos(%s))*(%s)",
        polynomial(buf[2],1, a,"pi*x"),
        polynomial(buf[3],2, b,"x", c,""),
        polynomial(buf[4],1, a,"pi*x"),
        polynomial(buf[5],1, b,chprintf(buf[6],"e^(%s)",polynomial(buf[7],2, b,"x",c,"")))
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)*e^(%s)*(cos(%s)^(e^(%s)))*tg(%s)",
        polynomial(buf[0],1, a,"pi"),
        polynomial(buf[1],2, b,"x", c,""),
        polynomial(buf[2],1, a,"pi*x"),
        polynomial(buf[3],2, b,"x", c,""),
        polynomial(buf[4],1, a,"pi*x")
    );
    return deriv;
}

char *deriv507 (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b,c,m;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        m=rndr(r);
    }while(!(a!=0 && b!=0 && m>0 && c!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%s)^ctg(%s)",
        poly2ns(buf[0],2, a,1,m,1,"x", b,1,1,1,""),
        memb(buf[1], 1,c,1,1,"pi*x", false)
    );
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, "%s%s", SEP,SEP);
    catprintf(deriv, "y`=(%s)^ctg(%s)*((pi/(%s))*ln(%s)+(ctg(%s)*((%s)/(%s))))",
        poly2ns(buf[0],2, a,1,m,1,"x", b,1,1,1,""),
        memb(buf[1], 1,c,1,1,"pi*x", false),
        memb(buf[2], -c,1,2,1,chprintf(buf[3],"sin(%s)",memb(buf[4],1,c,1,1,"pi*x",false)),false),
        poly2ns(buf[5],2, a,1,m,1,"x", b,1,1,1,""),
        memb(buf[6], 1,c,1,1,"pi*x", false),
        memb(buf[7], m*a,1,m-1,1,"x",false),
        poly2ns(buf[8],2, a,1,m,1,"x", b,1,1,1,"")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)^ctg(%s)*((pi/(%s))*ln(%s)+(ctg(%s)*((%s)/(%s))))",
        poly2ns(buf[0],2, a,1,m,1,"x", b,1,1,1,""),
        memb(buf[1], 1,c,1,1,"pi*x", false),
        memb(buf[2], c,1,2,1,chprintf(buf[3],"cos(%s)",memb(buf[4],1,c,1,1,"pi*x",false)),false),
        poly2ns(buf[5],2, a,1,m,1,"x", b,1,1,1,""),
        memb(buf[6], 1,c,1,1,"pi*x", false),
        memb(buf[7], m*a,1,m-1,1,"x",false),
        poly2ns(buf[8],2, a,1,m,1,"x", b,1,1,1,"")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)^ctg(%s)*ln(%s)*(pi/(%s))",
        poly2ns(buf[0],2, a,1,m,1,"x", b,1,1,1,""),
        memb(buf[1], 1,c,1,1,"pi*x", false),
        poly2ns(buf[2],2, a,1,m,1,"x", b,1,1,1,""),
        memb(buf[3], -c,1,2,1,chprintf(buf[4],"sin(%s)",memb(buf[5],1,c,1,1,"pi*x",false)),false)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s)^(pi/(%s))",
        memb(buf[0], m*a,1,m-1,1,"x", false),
        memb(buf[1], -c,1,2,1,chprintf(buf[2],"sin(%s)",memb(buf[3],1,c,1,1,"pi*x",false)),false)
    );
    return deriv;
}

char *deriv508 (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0));
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%s)^(%s)",
        polynomial(buf[0],2, 1,"x^2", a*a,""),
        polynomial(buf[1],2, 1,chprintf(buf[2],"(1/pi)*arctg(%s)",poly2ns(buf[3],1, 1,a,1,1,"x")), b,"")
    );
    strcat(deriv, SEP);
    catprintf(deriv, "%s", "y`=...");
    catprintf(deriv, "%s%s", SEP,SEP);

    catprintf(deriv, "y`=(%s)^(%s)*((%d/pi)*ln(%s)+2*x*(%s))",
        polynomial(buf[0],2, 1,"x^2", a*a,""),
        polynomial(buf[1],2, 1,chprintf(buf[2],"(1/pi)*arctg(%s)",poly2ns(buf[3],1, 1,a,1,1,"x")), b-1,""),
        a,
        polynomial(buf[4],2, 1,"x^2", a*a,""),
        polynomial(buf[5],2, 1,chprintf(buf[6],"(1/pi)*arctg(%s)",poly2ns(buf[7],1, 1,a,1,1,"x")), b,"")
    );
    catprintf(deriv, "%s", SEP);


    catprintf(deriv, "y`=(%s)^(%s)*ln(%s)*(%d/(pi*(%s)))",
        polynomial(buf[0],2, 1,"x^2", a*a,""),
        polynomial(buf[1],2, 1,chprintf(buf[2],"(1/pi)*arctg(%s)",poly2ns(buf[3],1, 1,a,1,1,"x")), b-1,""),
        polynomial(buf[4],2, 1,"x^2", a*a,""),
        a,
        polynomial(buf[5],2, 1,"x^2", a*a,"")
    );
    catprintf(deriv, "%s", SEP);


    catprintf(deriv, "y`=(%s)*(%s)^(%s)*2*x",
        polynomial(buf[1],2, 1,chprintf(buf[2],"(1/pi)*arctg(%s)",poly2ns(buf[3],1, 1,a,1,1,"x")), b,""),
        polynomial(buf[0],2, 1,"x^2", a*a,""),
        polynomial(buf[4],2, 1,chprintf(buf[5],"(1/pi)*arctg(%s)",poly2ns(buf[6],1, 1,a,1,1,"x")), b-1,"")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y`=(%s+2*x*(%s))*(2*x)^(%s)",
        memb(buf[0],a,1,1,1,chprintf(buf[1],"ln(%s)",polynomial(buf[2],2,1,"x^2",a*a,"")),false),
        polynomial(buf[3],2, 1,chprintf(buf[4],"(1/pi)*arctg(%s)",poly2ns(buf[5],1, 1,a,1,1,"x")), b,""),
        polynomial(buf[6],2, 1,chprintf(buf[7],"(1/pi)*arctg(%s)",poly2ns(buf[8],1, 1,a,1,1,"x")), b,"")
    );
    return deriv;
}

// -------------------------------------------------------------------------- //
char *deriv50101v (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int a,b,k;
    bool done;
    float answ[4];
    do{
        do{
            a=rndr(r);
            b=rndr(r);
            k=rndr(range(2,4));
        }while(!(a!=0 && k!=0 && b!=k*k));
        float delta;
        answ[0]=pow(3.0/2.0,k)*((float)b/(2.0*k)*log(3.0/2.0)+a*k*pi*sqrt(3)/3);
        answ[1]=k*a*pi*pow(3.0/2.0,k-1)*sqrt(3.0)/2.0;
        answ[2]=(float)b/(2.0*k)*log(3.0/2.0)+k*a*pi*sqrt(3)/3.0;
        answ[3]=pow(3.0/2.0,k)*log(3.0/2.0)*(float)b/(2.0*k);
        done=true;
        for(int i=0; i<4; ++i)
            for(int j=0; j<4; ++j)
                if (i!=j && fabs(answ[i]-answ[j])<0.1)
                {
                    done=false;
                    break;
                }
    }while(!done);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(1+sin(%s))^sqrt(%s)", polynomial(buf[0],1,a,"pi*x"), poly2ns(buf[1],2, b,1,1,1,"x", -b+6*a*k*k,6*a,1,1,""));
    catprintf(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],1,1,6*a));
    catprintf(deriv, "%s%s", SEP,SEP);
    for(int i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.2f%s", answ[i], i!=3?SEP:"");
    return deriv;
}

char *deriv50102v (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    float a,b,k;
    bool done;
    float answ[4];
    do{
        do{
            a=rndr(r);
            b=rndr(r);
            k=rndr(range(2,4));
        }while(!(fabs(a)>0.1 && fabs(k)>0.1 && fabs(b-k*k)>0.1 && fabs(b)!=0));
        float delta;
        answ[0]=pow(1.0+sqrt(3.0)/2.0,k)*(b/(2.0*k)*log(1.0+sqrt(3.0)/2.0)+k*a*pi/(2.0+sqrt(3.0)));
        answ[1]=pow(1.0+sqrt(3.0)/2.0,k)*((float)b/k*log(1.0+sqrt(3)/2.0)+(float)k*pi*sqrt(3.0)/(2.0+sqrt(3.0)));
        answ[2]=pow(3.0/2.0,k-1)*(b/(2.0*k)*log(1.5)+pi*k/(2+sqrt(3.0)));
        answ[3]=pow(1.0+sqrt(3.0)/2.0,k)*(1.0/(float)k*log(1.0+sqrt(3.0)/2.0)+pi/sqrt(3));
        done=true;
        for(int i=0; i<4; ++i)
            for(int j=0; j<4; ++j)
                if (i!=j && fabs(answ[i]-answ[j])<0.1)
                {
                    done=false;
                    break;
                }
    }while(!done);
    int ai=a, bi=b, ki=k;
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(1+sin(%s))^sqrt(%s)", polynomial(buf[0],1,ai,"pi*x"), poly2ns(buf[1],2, bi,1,1,1,"x", -bi+3*ai*ki*ki,3*ai,1,1,""));
    catprintf(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],1,1,3*ai));
    catprintf(deriv, "%s%s", SEP,SEP);
    for(int i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.2f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv50103v (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    float a,b,k;
    bool done;
    float answ[4];
    do{
        do{
            a=rndr(r);
            b=rndr(r);
            k=rndr(range(2,4));
        }while(!(fabs(a)>0.1 && fabs(k)>0.1 && fabs(b-k*k)>0.1));
        float delta;
        answ[0]=pow(2,k-1)*b*log(2.0)/k;
        answ[1]=pow(2,k-1)*b;
        answ[2]=pow(2,k)*log(2);
        answ[3]=pow(2,k)*(b/k*log(2)+k*a*pi/2);
        done=true;
        for(int i=0; i<4; ++i)
            for(int j=0; j<4; ++j)
                if (i!=j && fabs(answ[i]-answ[j])<0.1)
                {
                    done=false;
                    break;
                }
    }while(!done);
    int ai=a, bi=b, ki=k;
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(1+sin(%s))^sqrt(%s)", polynomial(buf[0],1,ai,"pi*x"), poly2ns(buf[1],2, bi,1,1,1,"x", -bi+2*ai*ki*ki,2*ai,1,1,""));
    catprintf(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],1,1,2*ai));
    catprintf(deriv, "%s%s", SEP,SEP);
    for(int i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.2f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv50104v (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    float a,b,k;
    bool done;
    float answ[4];
    do{
        do{
            a=rndr(r);
            b=rndr(r);
            k=rndr(range(2,4));
        }while(!(fabs(a)>0.1 && fabs(k)>0.1 && fabs(b-k*k)>0.1));
        float delta;
        answ[0]=pow(3.0/2.0,k)*(b/(2*k)*log(1.5)+k*a*pi*sqrt(3)/3.0);
        answ[1]=pow(3.0/2.0,k-1)*(b/k*log(1.5)+k*a*pi*sqrt(3));
        answ[2]=pow(1.0/2.0,k)*(1.0/k+2*k*a*pi/3);
        answ[3]=pow(1.5,k-1)*(b/(2*k)+k*a*pi/sqrt(3));
        done=true;
        for(int i=0; i<4; ++i)
            for(int j=0; j<4; ++j)
                if (i!=j && fabs(answ[i]-answ[j])<0.1)
                {
                    done=false;
                    break;
                }
    }while(!done);
    int ai=a, bi=b, ki=k;
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(1+sin(%s))^sqrt(%s)", polynomial(buf[0],1,ai,"pi*x"), poly2ns(buf[1],2, bi,1,1,1,"x", -bi+6*ai*ki*ki,6*ai,1,1,""));
    catprintf(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],1,1,6*ai));
    catprintf(deriv, "%s%s", SEP,SEP);
    for(int i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.2f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv50105v (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    float a,b,k;
    bool done;
    float answ[4];
    do{
        do{
            a=rndr(r);
            b=rndr(r);
            k=rndr(range(2,4));
        }while(!(fabs(a)>0.1 && fabs(k)>0.1 && fabs(b-k*k)>0.1));
        float delta;
        answ[0]=pow(2,k-1)*b*log(2)/k;
        answ[1]=0;
        answ[2]=pow(2,k)*log(2)*b/k;
        answ[3]=b/(2*k)*log(2);
        done=true;
        for(int i=0; i<4; ++i)
            for(int j=0; j<4; ++j)
                if (i!=j && fabs(answ[i]-answ[j])<0.1)
                {
                    done=false;
                    break;
                }
    }while(!done);
    int ai=a, bi=b, ki=k;
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(1+sin(%s))^sqrt(%s)", polynomial(buf[0],1,ai,"pi*x"), poly2ns(buf[1],2, bi,1,1,1,"x", -bi+2*ai*ki*ki,2*ai,1,1,""));
    catprintf(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],1,1,2*ai));
    catprintf(deriv, "%s%s", SEP,SEP);
    for(int i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.2f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv50201v (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int ai, ci, ip;
    float answ[4];
    {
    float a,c,p;
    bool done;
    do{
        do{
            a=rndr(r);
            c=rndr(r);
            p=rndr(range(2,4));
        }while(!(fabs(a)>0.1 && fabs(c)>0.1 && fabs(c)>0.1));
        float delta;
        answ[0]=exp(p/2.0)*(pi*c*p*sqrt(3.0)/48.0+4.0*a/(c*exp(p)));
        answ[1]=exp(-p/2)*4*a/c;
        answ[2]=exp(-p/2)*(pi*c*p*sqrt(3)/24+a/(c*exp(p)));
        answ[3]=exp(p/2)*pi*c*p*sqrt(3)/48;
        done=true;
        for(int i=0; i<4; ++i)
            for(int j=0; j<4; ++j)
                if (i!=j && fabs(answ[i]-answ[j])<0.1)
                {
                    done=false;
                    break;
                }
    }while(!done);
    ai=a, ci=c, ip=p;
    }
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(%s)^sin(%s)", polynomial(buf[0],2, ai,"x^2", 1,chprintf(buf[8],"%s",poly2ns(buf[7],2, 1,1,ip,1,"e", -ai*16,ci*ci,1,1,""))), poly2ns(buf[1],1, ci,24,1,1,"pi*x"));
    catprintf(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],4,1,ci));
    catprintf(deriv, "%s%s", SEP,SEP);
    for(int i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.2f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

//?
/*
char *deriv50202v (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int ai, ci, ip;
    float answ[4];
    {
    float a,c,p;
    bool done;
    do{
        do{
            a=rndr(r);
            c=rndr(r);
            p=rndr(range(2,4));
        }while(!(fabs(a)>0.1 && fabs(c)>0.1));
        float delta;
        answ[0]=6*a/c;
        answ[1]=6*a/c*exp(p);
        answ[2]=2*a/c*exp(p);
        answ[3]=p*pi*c/24;
        done=true;
        for(int i=0; i<4; ++i)
            for(int j=0; j<4; ++j)
                if (i!=j && fabs(answ[i]-answ[j])<0.1)
                {
                    done=false;
                    break;
                }
    }while(!done);
    ai=a, ci=c, ip=p;
    }
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(%s)^sin(%s)", polynomial(buf[0],2, ai,"x^2", 1,chprintf(buf[8],"%s",poly2ns(buf[7],2, ip,1,1,1,"", -ai*144,ci*ci,1,1,""))), poly2ns(buf[1],1, ci,24,1,1,"pi*x"));
    catprintf(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],12,1,ci));
    catprintf(deriv, "%s%s", SEP,SEP);
    for(int i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.2f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}
*/

char *deriv050201v (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,c,i,j,p;
    float answ[4];
    bool done;
    do{
        do{
            a=rndr(r);
            c=rndr(r);
            p=rndr(range(2,4));
        }while(!(c!=0 && a>0));
        answ[0]=exp(p/2.0)*(pi*c*p*sqrt(3)/48.0+4.0*a/(c*exp(p)));
        answ[1]=exp(-p/2.0)*4.0*a/c;
        answ[2]=exp(p/2.0)*(pi*c*p*sqrt(3)/24+a/(c*exp(p)));
        answ[3]=exp(p/2.0)*pi*c*p*sqrt(3)/48;
        for(done=true, i=0; i<4; ++i)
            for(j=i+1; j<4; ++j)
                if (fabs(answ[i]-answ[j])<0.3)
                    done=false;
    }while(!done);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(%s)^sin(%s)",
        poly2ns(buf[0],3, a,1,1,1,"x^2", 1,1,p,1,"e", -a*4*4,c*c,1,1,""),
        memb(buf[1], c,24,1,1,"pi*x",false)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],4,1,c));
    catprintf(deriv, "%s%s", SEP, SEP);
    for(i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.4f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv050202v (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,c,p,j,i;
    float answ[4];
    bool done;
    do{
        do{
            a=rndr(r);
            c=rndr(r);
            p=rndr(range(2,4));
        }while(!(c!=0 && a>0));
        answ[0]=24.0*a/c;
        answ[1]=6*a*exp(p)/c;
        answ[2]=2*a*exp(p)/c;
        answ[3]=p*pi*c/24.0;
        for(done=true, i=0; i<4; ++i)
            for(j=i+1; j<4; ++j)
                if (fabs(answ[i]-answ[j])<0.3)
                    done=false;
    }while(!done);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(%s)^sin(%s)",
        poly2ns(buf[0],2, a,1,1,1,"x^2", -a*12*12 + p*c*c,c*c,1,1,""),
        memb(buf[1], c,24,1,1,"pi*x",false)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],12,1,c));
    catprintf(deriv, "%s%s", SEP, SEP);
    for(i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.4f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

/*
char *deriv050301v (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b,p,q,j,i;
    float answ[4];
    bool done;
    do{
        do{
            a=rndr(r);
            b=rndr(r);
            p=rndr(range(2,4));
            q=rndr(range(2,4));
        }while(!(a>0 && b!=0 && q!=0));
        answ[0]=b*pow(q,b*pow(a/2.0,p))*pow(a/2.0,p-1)*(p*log(q)+b*sqrt(3)/(3.0*q));
        answ[1]=pow(q,b*pow(a/2.0,p))*b*p*pow(a/2.0,p-1)*log(q);
        answ[2]=1/pi*(b*pow(a/2.0,p)-1)*pow(q,b*pow(a/2.0,p)-1)*2/(a*sqrt(3));
        answ[3]=pow(1/pi*2/(a*sqrt(3)), b*p*pow(a/2.0,p-1));
        for(done=true, i=0; i<4; ++i)
            for(j=i+1; j<4; ++j)
                if (fabs(answ[i]-answ[j])<0.3)
                    done=false;
    }while(!done);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((1/pi)*arcsin(%s)%s)^(%s)",
        poly2ns(buf[0], 1,a,1,1,"x"),
        poly2s(buf[1],1, q*b-1,b,1,1,""),
        poly2ns(buf[2],1, b,1,p,1,"x")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],a,1,2));
    catprintf(deriv, "%s%s", SEP, SEP);
    for(i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.4f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv050302v (const range& r, char *deriv);
char *deriv050303v (const range& r, char *deriv);
//(it won't work!)

*/



// sometimes falls
char *deriv050401v (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b,d,p, j,i;
    float answ[4];
    bool done;
    do{
        do{
            a=rndr(r);
            b=rndr(r);
            p=rndr(range(2,4));
            d=rndr(r);
        }while(!(d!=0 && a>0));
        answ[0]=p*(pi*d*log(p)/6+(6*a+b*d)/(p*d));
        answ[1]=pi*p*d*log(p)/6;
        answ[2]=6*a/d+b;
        answ[3]=pow((6*a+b*d)/6, 2*pi*d);
        for(done=true, i=0; i<4; ++i)
            for(j=i+1; j<4; ++j)
                if (fabs(answ[i]-answ[j])<0.3)
                    done=false;
    }while(!done);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(%s)^tg(%s)",
        poly2ns(buf[0],3, a,1,2,1,"x", b,1,1,1,"x", p*d*d-a*3*3-b*3*d,d*d,1,1,""),
        memb(buf[1], d,12,1,1,"pi*x",false)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],3,1,d));
    catprintf(deriv, "%s%s", SEP, SEP);
    for(i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.4f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv050501v (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b,d,p, j,i;
    float answ[4];
    bool done;
    do{
        do{
            a=rndr(r);
            b=rndr(r);
            p=rndr(range(2,4));
            d=rndr(r);
        }while(!(d!=0 && a>0 && a*d*d+b*d+p-a*d*d-b*d!=0));
        answ[0]=pow(1.0/4.0, log(p))*(2*log(p)/(d*pi)-(2*a*d+b)*log(4)/(a*d*d+b*d+p-a*d*d-b*d));
        answ[1]=-pow(1.0/4.0, log(p))*((2*a*d+b)*log(4)/(a*d*d+b*d+p-a*d*d-b*d));
        answ[2]=pow(1.0/4.0, log(a*d*d+b*d+p-a*d*d-b*d)-1)*log(a*d*d+b*d+p-a*d*d-b*d)*2*log(p)/(d*pi);
        answ[3]=pow(1.0/4.0, log(p))*(4*log(p)/d-(2*a*d+b)*log(4)/(a*d*d+b*d+p-a*d*d-b*d));
        for(done=true, i=0; i<4; ++i)
            for(j=i+1; j<4; ++j)
                if (fabs(answ[i]-answ[j])<0.1)
                    done=false;
    }while(!done);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((1/pi)*arctg(%s))^ln(%s)",
        memb(buf[0], 1,d,1,1,"x",false),
        poly2ns(buf[1],3, a,1,2,1,"x", b,1,1,1,"x", p-a*d*d-b*d,1,1,1,"")
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "x_0=%d", d);
    catprintf(deriv, "%s%s", SEP, SEP);
    for(i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.4f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv050601v (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,b,p,m, j,i;
    float answ[4];
    bool done;
    do{
        do{
            a=rndr(r);
            b=rndr(r);
            p=rndr(r);
        }while(!(a!=0 && p>0));
        answ[0]=-p*pow(1.0/2.0,p)*(b*log(2)+pi*a*sqrt(3));
        answ[1]=-p*b*pow(1.0/2.0,p)*log(2);
        answ[2]=-pi*a*p*pow(1.0/2.0,p)*sqrt(3);
        answ[3]=p*a*pow(1.0/2.0,p)*sqrt(3);
        for(done=true, i=0; i<4; ++i)
            for(j=i+1; j<4; ++j)
                if (fabs(answ[i]-answ[j])<0.1)
                    done=false;
    }while(!done);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=!(cos(%s))&String(\"^\")&!(e^(%s))",
        polynomial(buf[0],1, a,"pi*x"),
        poly2ns(buf[1],3, b,1,1,1,"x", 1,1,1,1,chprintf(buf[2],"ln(%d)",p), b,3*a,1,1,"")
//        polynomial(buf[1],3, b,"x", 1,chprintf(buf[2],"ln(%d)",p), 1,fraction(buf[3],b,1,3*a))
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],1,1,3*a));
    catprintf(deriv, "%s%s", SEP, SEP);
    for(i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.4f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv050701v (const range& r, char *deriv)
{
    char buf[20][BUFSZ]; chprintf(deriv, "");
    int a,c,p,m, j,i;
    float answ[4];
    bool done;
    do{
        do{
            a=rndr(r);
            c=rndr(r);
            p=rndr(r);
            m=rndr(r);
        }while(!(a>0 && c!=0 && m>0));
        answ[0]=m*a*pow(c,m-1)/pow(4,m-1)-2*pi*p*log(p)/c;
        answ[1]=m*a*pow(c,m-1)/pow(4,m)+2.0*pi*p*log(p)/3.0;
        answ[2]=-2*pi*p*log(p)/c;
        answ[3]=pow(m*a*pow(c/4.0,m-1),-2*pi/c);
        for(done=true, i=0; i<4; ++i)
            for(j=i+1; j<4; ++j)
                if (fabs(answ[i]-answ[j])<0.1)
                    done=false;
    }while(!done);
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(%s)^ctg(%s)",
        poly2ns(buf[0],2, a,1,m,1,"x", p*pow(4,m)-a*pow(c,m),pow(4,m),1,1,""),
        memb(buf[1], 1,c,1,1,"pi*x", false)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],c,1,4));
    catprintf(deriv, "%s%s", SEP, SEP);
    for(i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.4f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}

char *deriv050801v (const range& r, char *deriv)
{
    char buf[20][BUFSZ];
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(false);
    sprintf(deriv, "%1.4f", pow(2*a*a,b+0.25)*(a/pi*log(2*a*a)+2*a*b+0.5*a));
    return deriv;
}

char *deriv0601 (const range& r, char *deriv)
{
    char buf[20][BUFSZ];
    int a,b,c,d,p,q,k,n,m;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
        p=rndr(r);
        q=rndr(r);
        k=rndr(r);
        n=rndr(r);
        m=rndr(r);
    }while(!(n>1 && m>1 && k>1 && a>0 && c>0 && p>0 && b*d*q!=0));
    catprintf(deriv, "y=(%s)*(%s)",
        memb(buf[0], 1,1,m,n, polynomial(buf[1],2, a,"x", b,""), false),
        memb(buf[2], 1,1,k,1, chprintf(buf[3], "(%s)/(%s)", polynomial(buf[4], c,"x", d,""), polynomial(buf[5],2, p,"x",q,"")), false)
    );
    return deriv;
}

char *deriv0602 (const range& r, char *deriv);




void make_answers (float right, float other[])
{
    for(int i=0; i<3; ++i)
    {
        float newvalue;
        bool skip;
        do{
            newvalue = right-(rand()%10000-5000)/200.0;
            skip=(fabs(newvalue-right)<1.0);
            for(int j=0; j<i && !skip; ++j)
                if (fabs(other[j]-newvalue)<1.0)
                    skip=true;
        }while(skip);
        other[i]=newvalue;
    }
}





char *deriv71 (const range &r, char *deriv)
{
    int a,b,c,d,n,m,x0;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
        n=rndr(r);
        m=rndr(r);
        x0=rndr(r);
    }while(!(a!=0 && c>0 && b!=0 && d>0 && m*n!=1 && x0>0 && (m>=2 && m<=3) && (n>=2 && n<=3)));
    float result =
        pow(a*x0+b,m-1)*(a*c*(m*n-1)*x0+a*m*n*d-c*b) / (n*pow(c*x0+d,1.0/n)*(c*x0+d));
    float invalid[3];
    make_answers(result, invalid);

    char buf[20][BUFSZ];
    strcpy(deriv,"");
    catprintf(deriv, "String(\"����� �������� ����������� � ��������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv,
        n==1?
            "y=(%s)/(%s)"
          : n==2?
            "y=(%s)/sqrt(%s)"
          : chprintf(buf[2],"y=(%%s)/root(%d,%%s)",n),
        polynomial(buf[0], 2, a,"x",b,""), polynomial(buf[1], 2, c,"x",d,"")
    );
    catprintf(deriv, ",x_0=%d", x0);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2lf", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2lf", invalid[i]);
    }
    return deriv;
}

char *deriv72 (const range& r, char *deriv)
{
    int a,b,c,k,x0;
    char buf[10][BUFSZ];
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        k=rndr(r);
        x0=rndr(r);
    }while(!((k!=2 && k>0) && a>0 && c>=1 && x0!=0));

    float result = tan(pi/k)*(2*a*x0*cos(a*x0*x0+b)*(pow(cos(x0),2)+c)+sin(2*x0)*sin(a*x0*x0+b))/pow((pow(cos(x0),2)+c),2);
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv,"");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(sin(%s)/(cos(x)^2+%d))*tg(%s),x_0=%d",polynomial(buf[0],2,a,"x^2",b,""),c,fraction(buf[2],1,1,k),x0);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv73 (const range &r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,c,x,b;
    do{
        a=rndr(r);
        c=rndr(r);
        x=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && c!=0 && -a<x && x<a && x!=0));

    float result = ((sqrt(a*a-x*x)+x*(asin((float)x/a)+c))/sqrt(pow(a*a-x*x,3)))*atan(b);
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/sqrt(%d-x^2))*arctg(%d),x_0=%d",
        polynomial(buf[0],2, 1,chprintf(buf[1],"arcsin(%s)",divisor(buf[3],a,"x")), c,""),
        a*a,
        b,
        x
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }

    return deriv;
}

char *deriv74 (const range &r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,n,x;
    do{
        a=rndr(r);
        n=rndr(r);
        x=rndr(r);
    }while(!(a!=0 && x!=a && n>=1 && (-a<x && x<a) && n<=3));

    float result = pow(acos((float)x/a),n-1)*(x*acos((float)x/a)-n*sqrt(a*a-x*x))/sqrt(pow(a*a-x*x,3));
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(%s)/sqrt(%d-x^2),x_0=%d",
        poly2ns(buf[0], 1, 1,1,n,1,chprintf(buf[1], "arccos(%s)", divisor(buf[3],a,"x"))),
        a*a,
        x
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }

    return deriv;
}

char *deriv75 (const range &r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,c,b,x;
    do{
        a=rndr(r);
        c=rndr(r);
        b=rndr(r);
        x=rndr(r);
    }while(!(a!=0 && abs(a)!=1 && b!=0 && ((-1<=b && b<0) || (0<b && b<=1)) && x!=0));

    float result = (a-4*x*(atan((float)x/a)+c))/pow(a*a+x*x,3);
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/((%d+x^2)^2))*arcsin(%d),x_0=%d",
        poly2ns(buf[0], 2, 1,1,1,1,chprintf(buf[1], "arctg(%s)", divisor(buf[3],a,"x")), c,1,1,1,""),
        a*a,
        b,
        x
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv76 (const range &r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,n,x;
    do{
        a=rndr(r);
        n=rndr(r);
        x=rndr(r);
    }while(!(a!=0 && abs(a)!=1 && x!=0 && (n==1 || n==2 || n==3)));

    float result = (a-2*n*x*atan((float)x/a))/pow(a*a+x*x,n+1);
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/(%s)),x_0=%d",
        polynomial(buf[0], 1, 1, chprintf(buf[1], "arctg(%s)", divisor(buf[4], a, "x"))),
        poly2ns(buf[2], 1, 1,1,n,1,chprintf(buf[3], "%d+x^2",a*a)),
        x
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv77 (const range &r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,b,c,x;
    do{
        a=rndr(r);
        c=rndr(r);
        b=rndr(r);
        x=rndr(r);
    }while(!(a!=0 && x!=0 && c!=0 && b>0));

    float result = (a-x*(atan((float)x/a)+c))/sqrt(pow(a*a+x*x,3))*log(b);
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/sqrt(%d+x^2))*ln(%d),x_0=%d",
        polynomial(buf[0], 2,1,chprintf(buf[1], "arctg(%s)", divisor(buf[6],a,"x")), c,""),
        a*a,
        b,
        x
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv78 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,b,c,d,x;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
        x=rndr(r);
    }while(!(a>0 && c!=0 && b>0 && x!=0));

    float result = a*x*(2-c-log(a*x*x+b))/sqrt(pow(a*x*x+b,3))*cos(d);
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/sqrt(%s))*cos(%d),x_0=%d",
        polynomial(buf[0], 2,1,chprintf(buf[1], "ln(%s)", polynomial(buf[5],2,a,"x^2",b,"")),c,""),
        polynomial(buf[3], 2, a,"x^2",b,""),
        d,
        x
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv79 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,c,d,x0;
    float x;
    do{
        a=rndr(r);
        c=rndr(r);
        d=rndr(r);
        x0=rndr(range(1,3));
    }while(!(a!=0 && c>0));

    int arr[] = {6,4,3}; x0=arr[x0-1]; x=(float)a/x0;
    float result = pi*tan(d)*(log(cos(pi*x/a)) + c - pow(sin(pi*x/a),2))/(a*pow(cos(pi*x/a),2))*tan(d);
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/ctg(%s))*tg(%d),x_0=%s",
        polynomial(buf[0], 2,1,chprintf(buf[1], "ln(cos(%s))", divisor(buf[5], a, "(pi*x)")),c,""),
        divisor(buf[6],a,"(pi*x)"),
        d,
        fraction(buf[9], a,1,x0)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);

    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv710 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,f,c,d,x0;
    float x;
    do{
        a=rndr(r);
        c=rndr(r);
        d=rndr(r);
        f=rndr(r);
        x0=rndr(range(1,3));
    }while(!(a>0 && a!=0 && c!=0 && d>0 && f>0 && f!=1));

    int arr[] = {6,4,3}; x0=arr[x0-1]; x=(float)a/x0;
    float result = pi*(pow(cos(pi*x/a),2)-log(sin(pi*x/a))+c)/(a*pow(sin(pi*x/a),2))*(log(a)/log(f));
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/tg(%s))*log(%d,%d),x_0=%s",
        polynomial(buf[0], 2,1,chprintf(buf[1], "ln(sin(%s))", divisor(buf[4], a, "(pi*x)")),-c,""),
        divisor(buf[7],a,"(pi*x)"),
        f,
        d,
        fraction(buf[9], a,1,x0)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);

    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv711 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,b,c,x0;
    float x;
    do{
        a=rndr(r);
        c=rndr(r);
        b=rndr(r);
        x0=rndr(range(1,3));
    }while(!(a!=0 && c!=0));

    int arr[] = {6,4,3}; x0=arr[x0-1]; x=(float)a/x0;
    float result = (pi*sin(pi*x/a)*(pow(4,cos(pi*x/a))*(1.0-cos(pi*x/a))*log(4)*log(cos(pi*x/a))+c))/(a*pow(log(cos(pi*x/a)),2))*tan(b);
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/ln(cos(%s)))*tg(%d),x_0=%s",
        polynomial(buf[0], 2,1,chprintf(buf[1], "4^cos(%s)", divisor(buf[5],a,"(pi*x)")),c,""),
        divisor(buf[7],a,"(pi*x)"),
        b,
        fraction(buf[9], a,1,x0)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);

    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv712 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,c,x0;
    float x;
    do{
        a=rndr(r);
        c=rndr(r);
        x0=rndr(range(1,3));
    }while(!(a!=0 && c!=0));

    int arr[] = {6,4,3}; x0=arr[x0-1]; x=(float)a/x0;
    float result = -pi*(pow(4,cos(pi*x/a))*(pow(sin(pi*x/a),2)*log(4)+2*cos(pi*x/a))+c*cos(pi*x/a))/(a*pow(sin(pi*x/a),3));
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/(sin(%s)^2)),x_0=%s",
        polynomial(buf[0], 2,1,chprintf(buf[1], "4^cos(%s)", divisor(buf[6],a,"(pi*x)")),c,""),
        divisor(buf[7],a,"(pi*x)"),
        fraction(buf[9], a,1,x0)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);

    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv713 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,b,m,x0;
    float x;
    do{
        a=rndr(r);
        b=rndr(r);
        m=rndr(range(1,3));
        x0=rndr(range(1,3));
    }while(!(a>0 && b!=1 && b>0));

    int arr[] = {6,4,3}; x0=arr[x0-1]; x=(float)a/x0;
    float result = (-pi/a)*(pow(b,cos(pi*x/a))*pow(sin(pi*x/a),m-1)*(pow(sin(pi*x/a),2)*log(b)+m*cos(pi*x/a)))/(pow(sin(pi*x/a),2*m));
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/(%s)),x_0=%s",
        polynomial(buf[0], 1,1,chprintf(buf[1], "(%d)^cos(%s)", b,divisor(buf[7],a,"(pi*x)"))),
        poly2ns(buf[2], 1, 1,1,m,1,chprintf(buf[4],"sin(%s)",divisor(buf[8],a,"(pi*x)"))),
        fraction(buf[9], a,1,x0)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);

    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv714 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,b,m,x0;
    float x;
    do{
        a=rndr(r);
        b=rndr(r);
        m=rndr(range(1,3));
        x0=rndr(range(1,3));
    }while(!(a>0 && b!=1 && b>0));

    int arr[] = {6,4,3}; x0=arr[x0-1]; x=(float)a/x0;
    float result = pi*pow(b,tan(pi*x/a))*(log(b)+m/2.0*sin(2*pi*x/a))/(a*pow(cos(pi*x/a),2*m-2));
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=((%s)/(%s)),x_0=%s",
        polynomial(buf[0], 1,1,chprintf(buf[1], "(%d)^tg(%s)", b,divisor(buf[7],a,"(pi*x)"))),
        poly2ns(buf[2], 1, 1,1,m,1,chprintf(buf[4],"cos(%s)",divisor(buf[8],a,"(pi*x)"))),
        fraction(buf[9], a,1,x0)
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);

    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv715 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,b,c,n,x0;
    float x;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        n=rndr(range(2,4));
        x=rndr(r);
    }while(!(a>0 && x!=0 && c>0 && b!=1 && b>0));

    float result = (2*a*x*pow(b,a*x*x+c)*(n*(a*x*x+c)*log(b)-1))/(n*(a*x*x+c)*sqrt(a*x*x+c));
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv,
        n==2?
            "y=((%d)^(%s))/sqrt(%s)"
          : "y=((%d)^(%s))/root(%s,%d)",
        b,
        polynomial(buf[0], 2, a,"x^2",c,""),
        polynomial(buf[1], 2, a,"x^2",c,"")
    );
    catprintf(deriv, ",x_0=%d", x);
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);

    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

char *deriv716 (const range& r, char *deriv)
{
    char buf[10][BUFSZ];
    int a,b,c,p,n,x;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        n=rndr(range(1,3));
        p=rndr(r);
        x=rndr(r);
    }while(!(p>1 && a>0 && b>0 && c>0 && x>0));

    float result = (2*a*x+b)*(1/log(p)-n*log(a*x*x+b*x+c)/log(p))/pow(a*x*x+b*x+c,n+1);
    float answers[3];
    make_answers(result, answers);

    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� ������� � �������� �����:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=log(%d,%s)/(%s),x_0=%d",
        p,
        polynomial(buf[0], 3, a,"x^2",b,"x",c,""),
        poly2ns(buf[2], 1,1,1,n,1,polynomial(buf[1], 3, a,"x^2",b,"x",c,"")),
        x
    );
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "%s", SEP);

    catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", result);
    for(int i=0; i<3; ++i)
    {
        catprintf(deriv, "%s", SEP);
        catprintf(deriv, "y&string(\"`\")&!(x_0)=%2.2f", answers[i]);
    }
    return deriv;
}

/** ----------------------------------------------------------------------- **/

char *derivb119 (const range &r, char *deriv)
{
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(a!=0 && b!=0 && p!=0 && p>1));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=%s", poly2ns(buf[0], 1, 1,1,p,1, chprintf(buf[1], "1/(%s)", polynomial(buf[2], 2,a,"x",b,""))));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)*.(%s)*.((-1)/((%s)^2))*.(%d)", p, poly2ns(buf[9], 1, 1,1,p-1,1,polynomial(buf[0],2,a,"x",b,"")), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)*.(%s)*.((-1)/((%s)^2))", p-1, poly2ns(buf[9], 1, 1,1,p-1,1,polynomial(buf[0],2,a,"x",b,"")), polynomial(buf[1],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)*.(%s)*.(1/((%s)^2))", p+1, poly2ns(buf[9], 1, 1,1,p-1,1,polynomial(buf[0],2,a,"x",b,"")), polynomial(buf[1],2,a,"x",b,""));
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)*.(%s)*.(%d)", p-1, poly2ns(buf[9], 1, 1,1,p+1,1,polynomial(buf[0],2,a,"x",b,"")), a);
    return deriv;
}

char *derivb120 (const range &r, char *deriv)
{
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(a!=0 && b!=0 && p>1));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%d)^(1/(%s))", p, polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(1/(%s))*.ln(%d)*.((-1)/((%s)^2))*.(%d)", p, polynomial(buf[0],2,a,"x",b,""), p, polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(1/(%s))*.((-1)/((%s)^2))*.(%d)", p, polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(1/(%s))*.ln(%d)*.(%d)", p, polynomial(buf[0],2,a,"x",b,""), p, a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(1/(%s))*.ln(%d)", p, polynomial(buf[0],2,a,"x",b,""), p);
    return deriv;
}

char *derivb121 (const range &r, char *deriv)
{
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(a!=0 && b!=0 && p>1));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,1/(%s))", p, polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=-(%s)*.(%d)", polynomial(buf[0],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%s)*.(%d)", polynomial(buf[0],2,a,"x",b,""), b);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%s)/(%d)", polynomial(buf[0],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%s)/(%d)", polynomial(buf[0],2,a,"x",b,""), b);
    return deriv;
}

char *derivb122 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=sin(1/(%s))", polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=cos(1/(%s))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=-cos(1/(%s))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=-sin(1/(%s))*.(1/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/cos(1/(%s))^2)*.(1/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    return deriv;
}

char *derivb123 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=cos(1/(%s))", polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=-sin(1/(%s))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=sin(1/(%s))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=-cos(1/(%s))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/sin(1/(%s))^2)*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    return deriv;
}

char *derivb124 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=tg(1/(%s))", polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(cos(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(sin(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/(cos(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/(sin(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    return deriv;
}

char *derivb125 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=ctg(1/(%s))", polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/(sin(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(sin(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(cos(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/(cos(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    return deriv;
}

char *derivb126 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arcsin(1/(%s))", polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/sqrt(1-(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/sqrt(1-(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/sqrt(1-(1/(%s))^2))*.(1/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/sqrt(1+(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    return deriv;
}

char *derivb127 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arccos(1/(%s))", polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/sqrt(1-(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/sqrt(1-(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/sqrt(1-(1/(%s))^2))*.(1/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/sqrt(1+(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    return deriv;
}

char *derivb128 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arctg(1/(%s))", polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(1+(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(1+(1/(%s))^2))*.(1/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(1-(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/(1+(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    return deriv;
}

char *derivb129 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arcctg(1/(%s))", polynomial(buf[2], 2,a,"x",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/(1+!(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(1+!(1/(%s))^2))*.((-1)/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/(1+!(1/(%s))^2))*.(1/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(1+!(1/(%s))^2))*.(1/((%s)^2))*.(%d)", polynomial(buf[0],2,a,"x",b,""), polynomial(buf[1],2,a,"x",b,""), a);
    return deriv;
}





char *derivb219 (const range &r, char *deriv)
{
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(a!=0 && b!=0 && p!=0 && p>1));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=%s", poly2ns(buf[0], 1, 1,1,p,1, chprintf(buf[1], "1/(%s)", polynomial(buf[2], 2,a,"x^2",b,""))));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)*.(%s)*.((-1)/((%s)^2))*.(%s)", p, poly2ns(buf[9], 1, 1,1,p-1,1,polynomial(buf[0],2,a,"x^2",b,"")), polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb220 (const range &r, char *deriv)
{
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(a!=0 && b!=0 && p>1));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=(%d)^(1/(%s))", p, polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(1/(%s))*.ln(%d)*.((-1)/((%s)^2))*.(%s)", p, polynomial(buf[0],2,a,"x^2",b,""), p, polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb221 (const range &r, char *deriv)
{
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(a!=0 && b!=0 && p>1));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=log(%d,1/(%s))", p, polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=-(1/(%s))*.ln(%d)*.(%s)", polynomial(buf[0],2,a,"x^2",b,""), p, polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb222 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=sin(1/(%s))", polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=cos(1/(%s))*.((-1)/(!(%s)^2))*.(%s)", polynomial(buf[0],2,a,"x^2",b,""), polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb223 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=cos(1/(%s))", polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=-sin(1/(%s))*.((-1)/(!(%s)^2))*.(%s)", polynomial(buf[0],2,a,"x^2",b,""), polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb224 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=tg(1/(%s))", polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(cos(1/(%s))^2))*.((-1)/(!(%s)^2))*.(%s)", polynomial(buf[0],2,a,"x^2",b,""), polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb225 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=ctg(1/(%s))", polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/(sin(1/(%s))^2))*.((-1)/(!(%s)^2))*.(%s)", polynomial(buf[0],2,a,"x^2",b,""), polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb226 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arcsin(1/(%s))", polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/sqrt(1-!(1/(%s))^2))*.((-1)/(!(%s)^2))*.(%s)", polynomial(buf[0],2,a,"x^2",b,""), polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb227 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arccos(1/(%s))", polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/sqrt(1-!(1/(%s))^2))*.((-1)/(!(%s)^2))*.(%s)", polynomial(buf[0],2,a,"x^2",b,""), polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb228 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arctg(1/(%s))", polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(1/(1+!(1/(%s))^2))*.((-1)/(!(%s)^2))*.(%s)", polynomial(buf[0],2,a,"x^2",b,""), polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    strcat(deriv, SEP);
    catprintf(deriv, "under_construction");
    return deriv;
}

char *derivb229 (const range &r, char *deriv)
{
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a!=0 && b!=0));
    char buf[10][BUFSZ];
    strcpy(deriv, "");
    catprintf(deriv, "String(\"����� ����������� �������:\")");
    strcat(deriv, SEP);
    catprintf(deriv, "y=arcctg(1/(%s))", polynomial(buf[2], 2,a,"x^2",b,""));
    strcat(deriv, SEP);
    strcat(deriv, SEP);
    catprintf(deriv, "y`=(-1/(1+!(1/(%s))^2))*.((-1)/(!(%s)^2))*.(%s)", polynomial(buf[0],2,a,"x^2",b,""), polynomial(buf[1],2,a,"x^2",b,""), polynomial(buf[3],1, 2*a,"x"));
    strcat(deriv, SEP);
    catprintf(deriv, "");
    strcat(deriv, SEP);
    catprintf(deriv, "");
    strcat(deriv, SEP);
    catprintf(deriv, "");
    return deriv;
}

/** ------------------------------------------------------------------------- */



char *derivb301 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(p>1 && abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=(%s)^(%d)", poly, p);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%s*.(1/(2*%s))*.(%d)", poly2ns(buf[1], 1, p,1,p-1,1,poly), poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%s*.(1/(%s))*.(%d)", poly2ns(buf[1], 1, p,1,p-1,1,poly), poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%s*.(1/(2*%s))", poly2ns(buf[1], 1, p,1,p-1,1,poly), poly);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%s*.(1/(%s))", poly2ns(buf[1], 1, p,1,-(p-1),1,poly), poly);

    return deriv;
}



char *derivb302 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(p>1 && abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=(%d)^(%s)", p, poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(%s)*.ln(%d)*.(1/(2*(%s)))*.(%d)", p, poly, p, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%s*.(%d)^(%s-1)*.ln(%d)*.(%d)", poly, p, poly, p, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(%d)^(%s)*.(1/ln(%d))*.(1/(2*(%s)))*.(%d)", p, poly, p, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%s*.(%d)^(%s-1)*.(1/ln(%d))*.(%d)", poly, p, poly, p, a);

    return deriv;
}




char *derivb303 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(p>1 && abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=log(%d,%s)", p, poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(%s)*.1/ln(%d)*.(1/(2*%s))*.(%d)", poly, p, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(%s)*.ln(%d)*.(1/(2*%s))*.(%d)", poly, p, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(%s)*.ln(%d)*.(1/(%s))*.(%d)", poly, p, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(%s)*.1/ln(%d)*.(1/(%s))*.(%d)", poly, p, poly, a);

    return deriv;
}




char *derivb304 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=sin(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=cos(%s)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-cos(%s)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-cos(%s)*.(1/(%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=cos(%s)*.(1/(%s))*.(%d)", poly, poly, a);

    return deriv;
}




char *derivb305 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=cos(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-sin(%s)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=sin(%s)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=sin(%s)*.(1/(%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-sin(%s)*.(1/(%s))*.(%d)", poly, poly, a);

    return deriv;
}



char *derivb306 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=tg(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(cos(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/(cos(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/(cos(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(cos(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    return deriv;
}




char *derivb307 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=ctg(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/(sin(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(sin(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(sin(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/(sin(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    return deriv;
}



char *derivb308 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=arcsin(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/sqrt(1-(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/sqrt(1-(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/sqrt(1-(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/sqrt(1-(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    return deriv;
}




char *derivb309 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=arccos(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/sqrt(1-(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/sqrt(1-(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/sqrt(1-(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/sqrt(1-(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    return deriv;
}




char *derivb310 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=arctg(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(1+(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/(1+(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/(1+(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(1+(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    return deriv;
}




char *derivb311 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "sqrt(%s)", polynomial(buf[0], 2, a,"x",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=arcctg(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/(1+(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(1+(%s)^2)*.(1/(2*%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(1+(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-1/(1+(%s)^2)*.(1/(%s))*.(%d)", poly, poly, a);

    return deriv;
}



char *derivb401 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=(%s)^(%d)", poly, p);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d*.(%s)*.(%d)*x", p, poly2ns(buf[1], 1, 1,1,p-1,1,poly), 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d*.(%s)*.(%d)*x", p, poly2ns(buf[1], 1, 1,1,p-1,1,poly), a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d*.(%s)*.(%d)*x", p, poly2ns(buf[1], 1, 1,1,1-p,1,poly), a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d*.(%s)*.(%d)*x", p, poly2ns(buf[1], 1, 1,1,1-p,1,poly), 2*a);

    return deriv;
}




char *derivb402 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=(%d)^(%s)", p, poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d^(%s)*.ln(%d)*.(%d)*x", p, poly, p, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d^(%s)*.(1/ln(%d))*.(%d)*x", p, poly, p, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d^(%s)*.(1/ln(%d))*.(%d)*x", p, poly, p, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=%d^(%s)*.ln(%d)*.(%d)*x", p, poly, p, 2);

    return deriv;
}




char *derivb403 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b,p;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
    }while(!(abs(a)>1 && p>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=log(%d,%s)", p, poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(%s)*.(1/ln(%d))*.(%d)*x", poly, p, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(%s)*.(ln(%d))*.(%d)*x", poly, p, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(%s)*.(ln(%d))*.(%d)*x", poly, p, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=1/(%s)*.(1/ln(%d))*.(%d)*x", poly, p, a);

    return deriv;
}




char *derivb404 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=sin(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=cos(%s)*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-cos(%s)*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-cos(%s)*.(%d)*x", poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=cos(%s)*.(%d)*x", poly, a);

    return deriv;
}




char *derivb405 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=cos(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-sin(%s)*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=sin(%s)*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=sin(%s)*.(%d)*x", poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-sin(%s)*.(%d)*x", poly, a);

    return deriv;
}



char *derivb406 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=tg(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(cos(%s)^2))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(cos(%s)^2))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(cos(%s)^2))*.(%d)*x", poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(cos(%s)^2))*.(%d)*x", poly, a);

    return deriv;
}




char *derivb407 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=ctg(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(sin(%s)^2))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(sin(%s)^2))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(sin(%s)^2))*.(%d)*x", poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(sin(%s)^2))*.(%d)*x", poly, a);

    return deriv;
}




char *derivb408 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=arcsin(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(sqrt(1-(%s)^2)))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(sqrt(1-(%s)^2)))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(sqrt(1-(%s)^2)))*.(%d)*x", poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(sqrt(1-(%s)^2)))*.(%d)*x", poly, a);

    return deriv;
}




char *derivb409 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=arccos(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(sqrt(1-(%s)^2)))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(sqrt(1-(%s)^2)))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(sqrt(1-(%s)^2)))*.(%d)*x", poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(sqrt(1-(%s)^2)))*.(%d)*x", poly, a);

    return deriv;
}




char *derivb410 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=arctg(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(1+(%s)^2))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(1+(%s)^2))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(1+(%s)^2))*.(%d)*x", poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(1+(%s)^2))*.(%d)*x", poly, a);

    return deriv;
}




char *derivb411 (const range &r, char *deriv)
{
    chprintf(deriv, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(abs(a)>1));

    char buf[10][BUFSZ];
    char poly[BUFSZ];
    chprintf(poly, "%s", polynomial(buf[0], 2, a,"x^2",b,""));

    catprintf(deriv, "String(\"����� ����������� ��������� �������:\")");
    catprintf(deriv, SEP);
    catprintf(deriv, "y=arcctg(%s)", poly);
    catprintf(deriv, SEP);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(1+(%s)^2))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(1+(%s)^2))*.(%d)*x", poly, 2*a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=(1/(1+(%s)^2))*.(%d)*x", poly, a);

    catprintf(deriv, SEP);
    catprintf(deriv, "y`=-(1/(1+(%s)^2))*.(%d)*x", poly, a);

    return deriv;
}






/*
int main (int argc, char* argv[])
{
    int index;
    char input[100];
    char exercise[100], a[4][100];
    char solution[100];
    range r;
    int key;

    if (argc!=9)
    {
        printf("syntax: deriv7xx index input exercise 1 2 3 4 solution\n");
        exit(1);
    }

    sscanf(argv[1], "%d", &index);
    printf("index=%d\n", index);
    strcpy(input, argv[2]);
    strcpy(exercise, argv[3]);
    strcpy(a[0], argv[4]);
    strcpy(a[1], argv[5]);
    strcpy(a[2], argv[6]);
    strcpy(a[3], argv[7]);
    strcpy(solution, argv[8]);

    FILE *f = fopen(input, "rt");
    fscanf(f, "%d", &key);
    srand(GetTickCount());
    key=rndr(range(1,100000));
    printf("%d\n", key);
    fscanf(f, "%d", &r.f);
    fscanf(f, "%d", &r.t);
    fclose(f);

    srand(key);
    char buf[BUFSZ];
    switch(index)
    {
        default:
            printf("error: unknown index\n");
            exit(2);
    }

    char lines[20][BUFSZ], text[BUFSZ], answer[10][BUFSZ];
    int nansw = split_text(buf, text, answer); if (nansw!=4) printf("error: answers are too few\n"), exit(3);

    f = fopen(exercise, "wt"), fprintf(f, "%s", text), fclose(f);
    for(int i=0; i<4; ++i)
        f = fopen(a[i],"wt"), fprintf(f, "%s", answer[i]), fclose(f);

    f = fopen(solution,"wt"), fprintf(f, "%s\n%s", text, answer[0]); 
    printf("generation complete.\n");
    return 0;
}




/*
char *deriv50301v (const range& r, char *deriv)
{
    char buf[10][BUFSZ]; strcpy(deriv, "");
    int ai, ci, bi, ip, qi;
    float answ[4];
    {
        float a,c,b,p,q;
        bool done;
        do{
            do{
                a=rndr(r);
                c=rndr(r);
                b=rndr(r);
                q=rndr(range(-2,2));
                p=rndr(range(2,4));
            }while(!(a>=1 && fabs(b)>0.1));
            float delta;
            answ[0]=(pow(2,q*b*pow(a/2,p))*b*pow(a,p-1))/pow(2,p-1)*(q*p*log(2)+1/(pow(2,q)*sqrt(3)));
            answ[1]=pow(2,q*b*pow(a/2,p))*b*p*q*pow(a/2,p-1)*log(2);
            answ[2]=(1/pi)*(b*pow(a/2,p)-1)*pow(2,q*(b*pow(a/2,p)-1))*2/(a*sqrt(3));
            answ[3]=pow((1/pi)*2/(a*sqrt(3)),b*p*pow(a/2,p-1));
            done=true;
            for(int i=0; i<4; ++i)
                for(int j=0; j<4; ++j)
                    if (i!=j && fabs(answ[i]-answ[j])<0.1)
                    {
                        done=false;
                        break;
                    }
        }while(!done);
        ai=a, ci=c, bi=b, ip=p, qi=q;
    }
    catprintf(deriv, "%s", "String(\"����� ����������� �������� ������� ����� �������������� ���� ��������� ������:\")");
    catprintf(deriv, "%s", SEP);
    catprintf(deriv, "y=(%s)^(%s)",
        polynomial(buf[0],2, 1,chprintf(buf[2],"arcsin(%s)", poly2ns(buf[1],1,1,ai,1,1,"x")), ci,""),
        memb(buf[3], bi,1,ip,1,"x",false)
    );
    catprintf(deriv, SEP);
    catprintf(deriv, "x_0=%s", fraction(buf[0],ai,1,2));
    catprintf(deriv, "%s%s", SEP,SEP);
    for(int i=0; i<4; ++i)
        catprintf(deriv, "y`&!(x_0)=%1.2f%s", answ[i], (i!=3?SEP:""));
    return deriv;
}
*/

















/*#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "mc_deriv.h"

char *draw_expr01 (int a, int b, char *res)
{
    char buf[10][BUFSZ];
    if (b<0)
    {
        if (b==-1) sprintf(res, "%d/x",a);
        else sprintf(res, "%d/(x^%d)",a,-b);
    }
    else
    {
        if (b==1)
            sprintf(res, "%s", polynomial(buf[0], 1,a,"x"));
        else if (b==0)
            sprintf(res, "%d", a);
        else
        {
            sprintf(buf[1], "x^(%d)", b);
            sprintf(res, "%s", polynomial(buf[0], 1,a,buf[1]));
        }
    }
    return res;
}

int deriv01 (int&a,int&p, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        p=rnd(r.f,r.t);
    }while (a==0 || p==0);

    sprintf(buf[1], "sin(%s)", polynomial(buf[0],1,p,"x"));
    sprintf(func, "y=%s",polynomial(buf[0],1, a,buf[1]));

    sprintf(buf[1], "cos(%s)", polynomial(buf[0], 1,p,"x"));
    sprintf(deriv, "y`=%s", polynomial(buf[0],1,a*p,buf[1]));
    return true;
}

int deriv02 (int&a,int&b, const range r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f,r.t);
    }while (a==0 || b==0);

    sprintf(buf[1], "e^(%s)", polynomial(buf[0],1,b,"x"));
    sprintf(func, "y=%s",polynomial(buf[0],1, a,buf[1]));

    sprintf(buf[1], "e^(%s)", polynomial(buf[0], 1,b,"x"));
    sprintf(deriv, "y`=%s", polynomial(buf[0],1,a*b,buf[1]));
    return true;
}

int deriv03 (int&a,int&p, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        p=rnd(r.f,r.t);
    }while (a==0 || p==0);

    sprintf(buf[1], "cos(%s)", polynomial(buf[0],1,p,"x"));
    sprintf(func, "y=%s",polynomial(buf[0],1, a,buf[1]));

    sprintf(buf[1], "sin(%s)", polynomial(buf[0], 1,p,"x"));
    sprintf(deriv, "y`=%s", polynomial(buf[0],1,-a*p,buf[1]));
    return true;
}

int deriv04 (int&a,int&b, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f,r.t);
    }while (a==0 || b==0);

    sprintf(buf[1], "tg(%s)", polynomial(buf[0],1,b,"x"));
    sprintf(func, "y=%s",polynomial(buf[0],1, a,buf[1]));

    sprintf(deriv, "y`=%d/(cos(%s)^2)", a*b, polynomial(buf[0], 1,b,"x"));
    //sprintf(deriv, "y`=%s", polynomial(buf[0],1,a*b,buf[1]));
    return true;
}

int deriv05 (int&a,int&b, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f,r.t);
    }while(a==0 || b==0);
    sprintf(buf[1], "ln(%s)", polynomial(buf[0],1,b,"x"));
    sprintf(func, "y=%s",polynomial(buf[0],1, a,buf[1]));
    sprintf(deriv,"y`=%d/x",a);
    return true;
}

int deriv06 (int&a,int&b, const range&r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f,r.t);
    }while(a==0 || b==0);
    sprintf(func, "y=%s", draw_expr01(a,b, buf[0]));
    sprintf(deriv, "y`=%s", draw_expr01(a*b,b-1,buf[0]));
    return true;
}

char *powerexpr (char *buf, const char *expr, int pow)
{
    if (pow==0) sprintf(buf, "1");
    else if (pow==1) sprintf(buf, "%s", expr);
    else if (pow==-1) sprintf(buf, "1/%s", expr);
    else if (pow>0) sprintf(buf, "%s^%d", expr,pow);
    else sprintf(buf, "1/(%s^%d)", expr, pow);
    return buf;
}

//a*(b^(kx))
int deriv07 (int&a,int&b,int&k, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f, r.t);
        k=rnd(r.f,r.t);
    }while (a==0 || b<=1 || k==0);

    polynomial(buf[2], 1,k,"x");
    sprintf(buf[1],"(%d)^(%s)", b, buf[2]);
    polynomial(buf[0], 1,a,buf[1]);
    sprintf(func, "y=%s", buf[0]);
    sprintf(deriv, "y`=%s*ln(%d)", polynomial(buf[0], 1,a*k,buf[1]), b);
    return true;
}

int deriv08 (int&a,int&b, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f,r.t);
    }while (a==0 || b==0);

    sprintf(buf[1], "ctg(%s)", polynomial(buf[0],1,b,"x"));
    sprintf(func, "y=%s",polynomial(buf[0],1, a,buf[1]));

    sprintf(deriv, "y`=%d/(sin(%s)^2)", -a*b, polynomial(buf[0], 1,b,"x"));
    //sprintf(deriv, "y`=%s", polynomial(buf[0],1,a*b,buf[1]));
    return true;
}

int deriv09 (int&a,int&b, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f,r.t);
    }while(a==0 || b==0);
    sprintf(buf[1],"arcsin(%s)", polynomial(buf[2],1,b,"x"));
    sprintf(func, "y=%s", polynomial(buf[0],1,a,buf[1]));
    sprintf(deriv,"y`=%d/sqrt(%s)", a*b, polynomial(buf[0], 2,1,"",-b*b,"x^2"));
    return true;
}

int deriv10 (int&a,int&b, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f,r.t);
    }while(a==0 || b==0);
    sprintf(buf[1],"arccos(%s)", polynomial(buf[2],1,b,"x"));
    sprintf(func, "y=%s", polynomial(buf[0],1,a,buf[1]));
    sprintf(deriv,"y`=%d/sqrt(%s)", -a*b, polynomial(buf[0], 2,1,"",-b*b,"x^2"));
    return true;
}

int deriv11 (int&a,int&b, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f,r.t);
    }while (a==0 || b==0);
    sprintf(buf[1], "arctg(%s)", polynomial(buf[2],1,b,"x"));
    sprintf(func, "y=%s", polynomial(buf[0],1,a,buf[1]));
    sprintf(deriv, "y`=%d/(%s)", a*b, polynomial(buf[0], 2,1,"",b*b,"x^2"));
    return true;
}

int deriv12 (int&a,int&b, const range& r, char *func, char *deriv)
{
    char buf[10][BUFSZ];
    do{
        a=rnd(r.f,r.t);
        b=rnd(r.f,r.t);
    }while (a==0 || b==0);
    sprintf(buf[1], "arcctg(%s)", polynomial(buf[2],1,b,"x"));
    sprintf(func, "y=%s", polynomial(buf[0],1,a,buf[1]));
    sprintf(deriv, "y`=%d/(%s)", -a*b, polynomial(buf[0], 2,1,"",b*b,"x^2"));
    return true;
}
*/
