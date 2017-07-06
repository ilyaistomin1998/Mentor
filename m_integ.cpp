#include "m_integ.h"

char *integral_ambp01 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && a!=-1 && a!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s)*Diff(x)=...%s%s...=%s",
        memb(buf[1],1,1,-2,1,polynomial(buf[0],2,a,"x",b,""),false),
        SEP,SEP,
        memb(buf[2],-1,a,-1,1,polynomial(buf[0],2,a,"x",b,""),false)
    );
    catprintf(integ, "%s", SEP);
    catprintf(integ, "...=%s", memb(buf[2],1,a,-1,1,polynomial(buf[0],2,a,"x",b,""),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],-1,1,-1,1,polynomial(buf[0],2,a,"x",b,""),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],a,1,-1,1,polynomial(buf[0],2,a,"x",b,""),false));
    return integ;
}

char *integral_ambp02 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && a!=1 && a!=-1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s)*Diff(x)=...%s%s...=%s",
        memb(buf[1],1,1,-1,1,polynomial(buf[0],2,a,"x",b,""),false),
        SEP,SEP,
        memb(buf[2],1,a,1,1,chprintf(buf[3],"ln(%s)", polynomial(buf[0],2,a,"x",b,"")),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],a,1,1,1,chprintf(buf[3],"ln(%s)", polynomial(buf[0],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],a,1,-1,1,chprintf(buf[3],"ln(%s)", polynomial(buf[0],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],1,a,-1,1,chprintf(buf[3],"ln(%s)", polynomial(buf[0],2,a,"x",b,"")),false));
    return integ;
}

char *integral_ambp03 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && a!=1 && a!=-1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s)*Diff(x)=...%s%s...=%s",
        memb(buf[1],1,1,-1,2,polynomial(buf[0],2,a,"x",b,""),false),
        SEP,SEP,
        memb(buf[2],2,a,1,2,polynomial(buf[0],2,a,"x",b,""),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],1,2*a,1,2,polynomial(buf[0],2,a,"x",b,""),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],2*a,1,1,2,polynomial(buf[0],2,a,"x",b,""),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],2,a,-1,2,polynomial(buf[0],2,a,"x",b,""),false));
    return integ;
}

char *integral_ambp04 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b,n;
    do{
        a=rndr(r);
        b=rndr(r);
        n=rndr(r);
    }while(!(a>0 && b>0 && n!=0 && n!=1 && n!=-1 && a!=1 && a!=-1 && abs(n+1)!=abs(a) && abs(n+1)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s)*Diff(x)=...%s%s...=%s",
        memb(buf[1],1,1,n,1,polynomial(buf[0],2,a,"x",b,""),false),
        SEP,SEP,
        memb(buf[2],1,a*(n+1),n+1,1,chprintf(buf[4],"(%s)", polynomial(buf[0],2,a,"x",b,"")),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],a,(n+1),n+1,1,chprintf(buf[4],"(%s)", polynomial(buf[0],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],(n+1),a,n+1,1,chprintf(buf[4],"(%s)", polynomial(buf[0],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2],a*(n+1),1,n+1,1,chprintf(buf[4],"(%s)", polynomial(buf[0],2,a,"x",b,"")),false));
    return integ;
}

/*
char *integral_ambp05 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
        q=rndr(r);
    }while(!(a>0 && b>0 && q!=0 && p%q!=0));
    catprintf(integ, "Int(%s)*Diff(x)=(%s)/(%s)",
        memb(buf[0], 1,1,p,q, polynomial(buf[9],2,a,"x",b,""),false),
        polynomial(buf[1], 3, 1,memb(buf[6],1,1,p,q,polynomial(buf[7],2,a,"x",b,""),false), -a,"x", -b,""),
        memb(buf[2], a*(n-1),1,p,q, polynomial(buf[3],2,a,"x",b,""), false)
    );
    return integ;
}
*/

char *integral_ambp06 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && b!=1 && a!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(e^(%s))*Diff(x)=...%s%s...=%s",
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[1], 1,a,1,1, chprintf(buf[7],"e^(%s)", polynomial(buf[1],2,a,"x",b,"")),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1], a,1,1,1, chprintf(buf[7],"e^(%s)", polynomial(buf[1],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1], a,1,-1,1, chprintf(buf[7],"e^(%s)", polynomial(buf[1],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1], a*b,1,1,1, chprintf(buf[7],"e^(%s)", polynomial(buf[1],2,a,"x",b,"")),false));
    return integ;
}

char *integral_ambp07 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && abs(a)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(sin(%s))*Diff(x)=...%s%s...=%s",
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[1],-1,a,1,1,chprintf(buf[3],"cos(%s)",polynomial(buf[7],2,a,"x",b,"")),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],a,1,1,1,chprintf(buf[3],"cos(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],-a,1,1,1,chprintf(buf[3],"cos(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],1,a,1,1,chprintf(buf[3],"cos(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    return integ;
}

char *integral_ambp08 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && abs(a)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(cos(%s))*Diff(x)=...%s%s...=%s",
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[1],1,a,1,1,chprintf(buf[3],"sin(%s)",polynomial(buf[7],2,a,"x",b,"")),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],a,1,1,1,chprintf(buf[3],"sin(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],-a,1,1,1,chprintf(buf[3],"sin(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],1,-a,1,1,chprintf(buf[3],"sin(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    return integ;
}

char *integral_ambp09 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && abs(a)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(1/(cos(%s)^2))*Diff(x)=...%s%s...=%s",
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[1],1,a,1,1,chprintf(buf[3],"tg(%s)",polynomial(buf[7],2,a,"x",b,"")),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],-1,a,1,1,chprintf(buf[3],"tg(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],a,1,1,1,chprintf(buf[3],"tg(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],-a,1,1,1,chprintf(buf[3],"tg(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    return integ;
}

char *integral_ambp10 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && a!=b && abs(a)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(1/(sin(%s)^2))*Diff(x)=...%s%s...=%s",
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[1],-1,a,1,1,chprintf(buf[3],"ctg(%s)",polynomial(buf[7],2,a,"x",b,"")),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],1,a,1,1,chprintf(buf[3],"ctg(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],a,1,1,1,chprintf(buf[3],"ctg(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[1],-a,1,1,1,chprintf(buf[3],"ctg(%s)",polynomial(buf[7],2,a,"x",b,"")),false));
    return integ;
}

char *integral_ambp11 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && a!=b && b!=1 && abs(a)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(1/(%s))*Diff(x)=...%s%s...=arctg((%s)*x)/(%s)",
        poly2ns(buf[0],2, a,1,1,1,"", b,1,2,1,"x"),
        SEP,SEP,
        fraction(buf[1],1,a*b,a),
        fraction(buf[2],1,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=(%s)*arctg((%s)*x)/(%s)",
        fraction(buf[3],1,a,1),
        fraction(buf[1],1,a*b,a),
        fraction(buf[2],1,b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=(%s)*arctg((%s)*x)/(%s)",
        fraction(buf[3],1,b,1),
        fraction(buf[1],1,a*b,a),
        fraction(buf[2],1,a,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=(%s)*arctg((%s)*x)",
        fraction(buf[3],1,a*b,1),
        fraction(buf[1],1,a*b,a)
    );
    return integ;
}

char *integral_ambp12 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && abs(b)!=1 && a!=b && abs(a)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(1/(%s))*Diff(x)=...%s%s...=-ln(((%s)*x-(%s))/((%s)*x+(%s)))/(%s)",
        poly2ns(buf[0],2, a,1,1,1,"", -b,1,2,1,"x"),
        SEP,SEP,
        fraction(buf[1],1,b,1), fraction(buf[2],1,a,1),
        fraction(buf[3],1,b,1), fraction(buf[4],1,a,1),
        fraction(buf[9],2,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=ln(((%s)*x-(%s))/((%s)*x+(%s)))/(%s)",
        fraction(buf[1],1,b,1), fraction(buf[2],1,a,1),
        fraction(buf[3],1,b,1), fraction(buf[4],1,a,1),
        fraction(buf[9],2,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=ln(((%s)*x-(%s))/((%s)*x+(%s)))*(%s)",
        fraction(buf[1],1,b,1), fraction(buf[2],1,a,1),
        fraction(buf[3],1,b,1), fraction(buf[4],1,a,1),
        fraction(buf[9],2,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=ln(((%s)*x-(%s))/((%s)*x+(%s)))*(%s)",
        fraction(buf[1],1,b,1), fraction(buf[2],1,a,1),
        fraction(buf[3],1,b,1), fraction(buf[4],1,a,1),
        fraction(buf[9],2,a*b,b)
    );
    return integ;
}

char *integral_ambp13 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && a!=b && abs(a)!=1 && abs(b)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(1/(%s))*Diff(x)=...%s%s...=ln(((%s)*x-(%s))/((%s)*x+(%s)))/(%s)",
        poly2ns(buf[0],2, -a,1,1,1,"", b,1,2,1,"x"),
        SEP,SEP,
        fraction(buf[1],1,b,1), fraction(buf[2],1,a,1),
        fraction(buf[3],1,b,1), fraction(buf[4],1,a,1),
        fraction(buf[9],2,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=-ln(((%s)*x-(%s))/((%s)*x+(%s)))/(%s)",
        fraction(buf[1],1,b,1), fraction(buf[2],1,a,1),
        fraction(buf[3],1,b,1), fraction(buf[4],1,a,1),
        fraction(buf[9],2,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=-ln(((%s)*x-(%s))/((%s)*x+(%s)))*(%s)",
        fraction(buf[1],1,b,1), fraction(buf[2],1,a,1),
        fraction(buf[3],1,b,1), fraction(buf[4],1,a,1),
        fraction(buf[9],2,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=-ln(((%s)*x-(%s))/((%s)*x+(%s)))*(%s)",
        fraction(buf[1],1,b,1), fraction(buf[2],1,a,1),
        fraction(buf[3],1,b,1), fraction(buf[4],1,a,1),
        fraction(buf[9],2,a*b,b)
    );
    return integ;
}

char *integral_ambp14 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>0 && a!=b && abs(a)!=1 && abs(b)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(1/(%s))*Diff(x)=...%s%s...=-arctg((%s)*x)/(%s)",
        poly2ns(buf[0],2, -a,1,1,1,"", -b,1,2,1,"x"),
        SEP,SEP,
        fraction(buf[1],1,a*b,a),
        fraction(buf[2],1,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=arctg((%s)*x)/(%s)",
        fraction(buf[1],1,a*b,a),
        fraction(buf[2],1,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=arctg((%s)*x)*(%s)",
        fraction(buf[1],1,a*b,a),
        fraction(buf[2],1,a*b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=arctg((%s)*x)/(%s)",
        fraction(buf[1],1,a*b,a),
        fraction(buf[2],1,a*b,b)
    );
    return integ;
}

char *integral_ambp15 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>1 && a!=b && abs(a)!=1 && abs(b)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(1/sqrt(%s))*Diff(x)=...%s%s...=ln(sqrt(%s)+(%s)*x)/(%s)",
        poly2ns(buf[0],2, a,1,1,1,"", b,1,2,1,"x"),
        SEP,SEP,
        poly2ns(buf[1],2, b,1,2,1,"x", a,1,1,1,""),
        fraction(buf[2],1,b,1),
        fraction(buf[9],1,b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=ln(sqrt(%s)+(%s)*x)*(%s)",
        poly2ns(buf[1],2, b,1,2,1,"x", a,1,1,1,""),
        fraction(buf[2],1,b,1),
        fraction(buf[9],1,b,1)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=ln(sqrt(%s)+(%s)*x)*(%s)",
        poly2ns(buf[1],2, b,1,2,1,"x", a,1,1,1,""),
        fraction(buf[2],1,b,1),
        fraction(buf[9],2,a*b,a*b)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=ln(sqrt(%s)+(%s)*x)/(%s)",
        poly2ns(buf[1],2, b,1,2,1,"x", a,1,1,1,""),
        fraction(buf[2],1,b,1),
        fraction(buf[9],2,a*b,1)
    );
    return integ;
}

/*
char *integral_ambp16 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>1));
    catprintf(integ, "Int(1/sqrt(%s))*Diff(x)=ln(sqrt(%s)+(%s)*x)/(%s)",
        poly2ns(buf[0],2, -a,1,1,1,"", b,1,2,1,"x"),
        poly2ns(buf[1],2, b,1,2,1,"x", -a,1,1,1,""),
        fraction(buf[2],1,b,1),
        fraction(buf[9],1,b,1)
    );
    return integ;
}

char *integral_ambp17 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ,"");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while(!(a>0 && b>1));
    catprintf(integ, "Int(1/sqrt(%s))*Diff(x)=arctg((%s)*x/sqrt(%s))/(%s)",
        poly2ns(buf[0],2, -a,1,1,1,"", -b,1,2,1,"x"),
        fraction(buf[2],1,b,1),
        poly2ns(buf[1],2, -b,1,2,1,"x", -a,1,1,1,""),
        fraction(buf[9],1,b,1)
    );
    return integ;
}
*/

char *integral_ambp18 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ, "");
    int a,b,l,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        l=rndr(r);
        p=rndr(r);
        q=rndr(r);
    }while (!(a!=0 && b!=0 && q!=-p && q!=0 && p!=0 && p+q!=0 && l+1!=0
        && abs(l+1)!=1
        && abs(a*(p+q))!=abs(a*q)
        && abs(q)!=abs(p+q)
        && abs(q)!=1
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s)*Diff(x)=...%s%s...=%s",
        poly2ns(buf[1],2, a,1,p,q,"x", b,1,l,1,"x"),
        SEP,SEP,
        poly2ns(buf[3],2,
            a*q,p+q,p+q,q,"x",
            b,l+1,l+1,1,"x"
        )
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", poly2ns(buf[3],2, a*(p+q),q,p+q,q,"x", b,l+1,l+1,1,"x"));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", poly2ns(buf[3],2, a*q,p+q,p+q,q,"x", b*(l+1),1,l+1,1,"x"));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", poly2ns(buf[3],2, a,q*(p+q),p+q,q,"x", b*(l+1),1,l+1,1,"x"));
    return integ;
}

char *integral_ambp19 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ, "");
    int a,b,k,l;
    do{
        a=rndr(r);
        b=rndr(r);
        k=rndr(r);
        l=rndr(r);
    }while (!(a!=0 && l>0 && k!=0 && k+l!=0
        && abs(a)!=abs(l*(k+l))
        && abs(a)!=abs(a*(k+l))
        && abs(l)!=abs(a)
        && abs(k+l)!=1
        && abs(l)!=abs(a*(k+l))
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    if (k*l<0)
    {
        catprintf(integ, "Int(1/((%s)*(%s)))*Diff(x)=...%s%s...=%s",
            memb(buf[1], 1,1,-k,l, chprintf(buf[3], "ln(%s)", polynomial(buf[0],2,a,"x",b,"")), false),
            polynomial(buf[0],2, a,"x",b,""),
            SEP,SEP,
            memb(buf[2], l,a*(k+l),k+l,l, chprintf(buf[4],"ln(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
        );
        catprintf(integ, SEP);
        catprintf(integ, "...=%s", memb(buf[2], a,l*(k+l),k+l,l, chprintf(buf[4],"ln(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
        catprintf(integ, SEP);
        catprintf(integ, "...=%s", memb(buf[2], l*(k+l),a,k+l,l, chprintf(buf[4],"ln(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
        catprintf(integ, SEP);
        catprintf(integ, "...=%s", memb(buf[2], a*(k+l),l,k+l,l, chprintf(buf[4],"ln(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    }
    else
    {
        catprintf(integ, "Int((%s)/(%s))*Diff(x)=...%s%s...=%s",
            memb(buf[1], 1,1,k,l, chprintf(buf[3], "ln(%s)", polynomial(buf[0],2,a,"x",b,"")), false),
            polynomial(buf[0],2, a,"x",b,""),
            SEP,SEP,
            memb(buf[2], l,a*(k+l),k+l,l, chprintf(buf[4],"ln(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
        );
        catprintf(integ, SEP);
        catprintf(integ, "...=%s", memb(buf[2], a,l*(k+l),k+l,l, chprintf(buf[4],"ln(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
        catprintf(integ, SEP);
        catprintf(integ, "...=%s", memb(buf[2], l*(k+l),a,k+l,l, chprintf(buf[4],"ln(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
        catprintf(integ, SEP);
        catprintf(integ, "...=%s", memb(buf[2], a*(k+l),l,k+l,l, chprintf(buf[4],"ln(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    }
    return integ;
}

char *integral_ambp20 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ, "");
    int a,b;
    do{
        a=rndr(r);
        b=rndr(r);
    }while (!(a!=0 && abs(a)!=1 && abs(a)!=2));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(x*e^(%s))*Diff(x)=...%s%s...=%s",
        poly2ns(buf[1],2, a,1,2,1,"x", b,1,1,1,""),
        SEP,SEP,
        memb(buf[2], 1,2*a,1,1, chprintf(buf[3],"e^(%s)", poly2ns(buf[1],2, a,1,2,1,"x", b,1,1,1,"")), false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2], 2*a,1,1,1, chprintf(buf[3],"e^(%s)", poly2ns(buf[1],2, a,1,2,1,"x", b,1,1,1,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2], 2,a,1,1, chprintf(buf[3],"e^(%s)", poly2ns(buf[1],2, a,1,2,1,"x", b,1,1,1,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2], a,2,1,1, chprintf(buf[3],"e^(%s)", poly2ns(buf[1],2, a,1,2,1,"x", b,1,1,1,"")), false));
    return integ;
}

char *integral_ambp21 (const range& r, char *integ)
{
    char buf[12][BUFSZ]; chprintf(integ, "");
    int a,b,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        q=rndr(r);
        p=rndr(r);
    }while(!(a!=0 && q!=-p && q!=0 && p!=0
        && strcmp(fraction(buf[0],q,1,a*(p+q)), fraction(buf[1],p+q,1,a*q))
        && strcmp(fraction(buf[2],q,1,a*(p+q)), fraction(buf[3],a*q,1,p+q))
        && strcmp(fraction(buf[4],q,1,a*(p+q)), fraction(buf[5],a*(p+q),1,q))

        && strcmp(fraction(buf[6],a*q,1,p+q), fraction(buf[7],p+q,1,a*q))
        && strcmp(fraction(buf[8],a*q,1,p+q), fraction(buf[9],a*(p+q),1,q))

        && strcmp(fraction(buf[10],p+q,1,a*q), fraction(buf[11],a*(p+q),1,q))
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int((%s)*sin(%s))*Diff(x)=...%s%s...=%s",
        memb(buf[1], 1,1,p,q, chprintf(buf[2],"cos(%s)",polynomial(buf[0],2,a,"x",b,"")), false),
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[3], -q,a*(p+q),p+q,q, chprintf(buf[5], "cos(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -a*q,(p+q),p+q,q, chprintf(buf[5], "cos(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -(p+q),a*q,p+q,q, chprintf(buf[5], "cos(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -a*(p+q),q,p+q,q, chprintf(buf[5], "cos(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    return integ;
}

char *integral_ambp22 (const range& r, char *integ)
{
    char buf[20][BUFSZ]; chprintf(integ, "");
    int a,b,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
        q=rndr(r);
    }while(!(a!=0 && q!=-p && q!=0 && p!=0
        && strcmp(fraction(buf[0],q,1,a*(p+q)), fraction(buf[1],p+q,1,a*q))
        && strcmp(fraction(buf[2],q,1,a*(p+q)), fraction(buf[3],a*q,1,p+q))
        && strcmp(fraction(buf[4],q,1,a*(p+q)), fraction(buf[5],a*(p+q),1,q))

        && strcmp(fraction(buf[6],a*q,1,p+q), fraction(buf[7],p+q,1,a*q))
        && strcmp(fraction(buf[8],a*q,1,p+q), fraction(buf[9],a*(p+q),1,q))

        && strcmp(fraction(buf[10],p+q,1,a*q), fraction(buf[11],a*(p+q),1,q))
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int((%s)*cos(%s))*Diff(x)=...%s%s...=%s",
        memb(buf[1], 1,1,p,q, chprintf(buf[2],"sin(%s)",polynomial(buf[0],2,a,"x",b,"")), false),
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[3], q,a*(p+q),p+q,q, chprintf(buf[5], "sin(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], a*q,(p+q),p+q,q, chprintf(buf[5], "sin(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], (p+q),a*q,p+q,q, chprintf(buf[5], "sin(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], a*(p+q),q,p+q,q, chprintf(buf[5], "sin(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    return integ;
}

char *integral_ambp23 (const range& r, char *integ)
{
    char buf[20][BUFSZ]; chprintf(integ, "");
    int a,b,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
        q=rndr(r);
    }while(!(a!=0 && q!=-p && q!=0 && p!=0
        && strcmp(fraction(buf[0],q,1,a*(p+q)), fraction(buf[1],p+q,1,a*q))
        && strcmp(fraction(buf[2],q,1,a*(p+q)), fraction(buf[3],a*q,1,p+q))
        && strcmp(fraction(buf[4],q,1,a*(p+q)), fraction(buf[5],a*(p+q),1,q))

        && strcmp(fraction(buf[6],a*q,1,p+q), fraction(buf[7],p+q,1,a*q))
        && strcmp(fraction(buf[8],a*q,1,p+q), fraction(buf[9],a*(p+q),1,q))

        && strcmp(fraction(buf[10],p+q,1,a*q), fraction(buf[11],a*(p+q),1,q))
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s/cos(%s)^2)*Diff(x)=...%s%s...=%s",
        depar(rmvpar(memb(buf[1], 1,1,p,q, chprintf(buf[2],"tg(%s)",polynomial(buf[0],2,a,"x",b,"")), false),buf[1])),
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[3], q,a*(p+q),p+q,q, chprintf(buf[5], "tg(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], a*q,(p+q),p+q,q, chprintf(buf[5], "tg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], p+q,a*q,p+q,q, chprintf(buf[5], "tg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], a*(p+q),q,p+q,q, chprintf(buf[5], "tg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    return integ;
}

char *integral_ambp24 (const range& r, char *integ)
{
    char buf[20][BUFSZ]; chprintf(integ, "");
    int a,b,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
        q=rndr(r);
    }while(!(a!=0 && q!=-p && q!=0 && p!=0
        && strcmp(fraction(buf[0],q,1,a*(p+q)), fraction(buf[1],p+q,1,a*q))
        && strcmp(fraction(buf[2],q,1,a*(p+q)), fraction(buf[3],a*q,1,p+q))
        && strcmp(fraction(buf[4],q,1,a*(p+q)), fraction(buf[5],a*(p+q),1,q))

        && strcmp(fraction(buf[6],a*q,1,p+q), fraction(buf[7],p+q,1,a*q))
        && strcmp(fraction(buf[8],a*q,1,p+q), fraction(buf[9],a*(p+q),1,q))

        && strcmp(fraction(buf[10],p+q,1,a*q), fraction(buf[11],a*(p+q),1,q))
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s/sin(%s)^2)*Diff(x)=...%s%s...=%s",
        depar(rmvpar(buf[1],memb(buf[1], 1,1,p,q, chprintf(buf[2],"ctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false))),
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[3], -q,a*(p+q),p+q,q, chprintf(buf[5], "ctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -a*q,(p+q),p+q,q, chprintf(buf[5], "ctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -(p+q),a*q,p+q,q, chprintf(buf[5], "ctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -a*(p+q),q,p+q,q, chprintf(buf[5], "ctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    return integ;
}

char *integral_ambp25 (const range& r, char *integ)
{
    char buf[20][BUFSZ]; chprintf(integ, "");
    int a,b,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
        q=rndr(r);
    }while(!(a!=0 && q!=-p && q!=0 && p!=0
        && strcmp(fraction(buf[0],q,1,a*(p+q)), fraction(buf[1],p+q,1,a*q))
        && strcmp(fraction(buf[2],q,1,a*(p+q)), fraction(buf[3],a*q,1,p+q))
        && strcmp(fraction(buf[4],q,1,a*(p+q)), fraction(buf[5],a*(p+q),1,q))

        && strcmp(fraction(buf[6],a*q,1,p+q), fraction(buf[7],p+q,1,a*q))
        && strcmp(fraction(buf[8],a*q,1,p+q), fraction(buf[9],a*(p+q),1,q))

        && strcmp(fraction(buf[10],p+q,1,a*q), fraction(buf[11],a*(p+q),1,q))
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s/sqrt(1-(%s)^2))*Diff(x)=...%s%s...=%s",
        depar(rmvpar(buf[1],memb(buf[1], 1,1,p,q, chprintf(buf[2],"arcsin(%s)",polynomial(buf[0],2,a,"x",b,"")), false))),
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[3], q,a*(p+q),p+q,q, chprintf(buf[5], "arcsin(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], a*q,(p+q),p+q,q, chprintf(buf[5], "arcsin(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], p+q,a*q,p+q,q, chprintf(buf[5], "arcsin(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], a*(p+q),q,p+q,q, chprintf(buf[5], "arcsin(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    return integ;
}

char *integral_ambp26 (const range& r, char *integ)
{
    char buf[20][BUFSZ]; chprintf(integ, "");
    int a,b,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
        q=rndr(r);
    }while(!(a!=0 && q!=-p && q!=0 && p!=0
        && strcmp(fraction(buf[0],q,1,a*(p+q)), fraction(buf[1],p+q,1,a*q))
        && strcmp(fraction(buf[2],q,1,a*(p+q)), fraction(buf[3],a*q,1,p+q))
        && strcmp(fraction(buf[4],q,1,a*(p+q)), fraction(buf[5],a*(p+q),1,q))

        && strcmp(fraction(buf[6],a*q,1,p+q), fraction(buf[7],p+q,1,a*q))
        && strcmp(fraction(buf[8],a*q,1,p+q), fraction(buf[9],a*(p+q),1,q))

        && strcmp(fraction(buf[10],p+q,1,a*q), fraction(buf[11],a*(p+q),1,q))
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s/sqrt(1-(%s)^2))*Diff(x)=...%s%s...=%s",
        depar(rmvpar(buf[1],memb(buf[1], 1,1,p,q, chprintf(buf[2],"arccos(%s)",polynomial(buf[0],2,a,"x",b,"")), false))),
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[3], -q,a*(p+q),p+q,q, chprintf(buf[5], "arccos(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -a*q,(p+q),p+q,q, chprintf(buf[5], "arccos(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -(p+q),a*q,p+q,q, chprintf(buf[5], "arccos(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -a*(p+q),q,p+q,q, chprintf(buf[5], "arccos(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    return integ;
}

char *integral_ambp27 (const range& r, char *integ)
{
    char buf[20][BUFSZ]; chprintf(integ, "");
    int a,b,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
        q=rndr(r);
    }while(!(a!=0 && q!=-p && q!=0 && p!=0
        && strcmp(fraction(buf[0],q,1,a*(p+q)), fraction(buf[1],p+q,1,a*q))
        && strcmp(fraction(buf[2],q,1,a*(p+q)), fraction(buf[3],a*q,1,p+q))
        && strcmp(fraction(buf[4],q,1,a*(p+q)), fraction(buf[5],a*(p+q),1,q))

        && strcmp(fraction(buf[6],a*q,1,p+q), fraction(buf[7],p+q,1,a*q))
        && strcmp(fraction(buf[8],a*q,1,p+q), fraction(buf[9],a*(p+q),1,q))

        && strcmp(fraction(buf[10],p+q,1,a*q), fraction(buf[11],a*(p+q),1,q))
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s/(1+(%s)^2))*Diff(x)=...%s%s...=%s",
        depar(rmvpar(buf[1],memb(buf[1], 1,1,p,q, chprintf(buf[2],"arctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false))),
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[3], q,a*(p+q),p+q,q, chprintf(buf[5], "arctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], a*q,(p+q),p+q,q, chprintf(buf[5], "arctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], p+q,a*q,p+q,q, chprintf(buf[5], "arctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], a*(p+q),q,p+q,q, chprintf(buf[5], "arctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    return integ;
}

char *integral_ambp28 (const range& r, char *integ)
{
    char buf[20][BUFSZ]; chprintf(integ, "");
    int a,b,p,q;
    do{
        a=rndr(r);
        b=rndr(r);
        p=rndr(r);
        q=rndr(r);
    }while(!(a!=0 && q!=-p && q!=0 && p!=0
        && strcmp(fraction(buf[0],q,1,a*(p+q)), fraction(buf[1],p+q,1,a*q))
        && strcmp(fraction(buf[2],q,1,a*(p+q)), fraction(buf[3],a*q,1,p+q))
        && strcmp(fraction(buf[4],q,1,a*(p+q)), fraction(buf[5],a*(p+q),1,q))

        && strcmp(fraction(buf[6],a*q,1,p+q), fraction(buf[7],p+q,1,a*q))
        && strcmp(fraction(buf[8],a*q,1,p+q), fraction(buf[9],a*(p+q),1,q))

        && strcmp(fraction(buf[10],p+q,1,a*q), fraction(buf[11],a*(p+q),1,q))
    ));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(%s/(1+(%s)^2))*Diff(x)=...%s%s...=%s",
        depar(rmvpar(buf[1],memb(buf[1], 1,1,p,q, chprintf(buf[2],"arcctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false))),
        polynomial(buf[0],2,a,"x",b,""),
        SEP,SEP,
        memb(buf[3], -q,a*(p+q),p+q,q, chprintf(buf[5], "arcctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -a*q,(p+q),p+q,q, chprintf(buf[5], "arcctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -(p+q),a*q,p+q,q, chprintf(buf[5], "arcctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], -a*(p+q),q,p+q,q, chprintf(buf[5], "arcctg(%s)",polynomial(buf[0],2,a,"x",b,"")), false));
    return integ;
}


char *integral_ambp29 (const range& r, char *integ)
{
    char buf[20][BUFSZ]; chprintf(integ, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while(!(a*b!=0 && d>0 && c>0 && abs(a)!=1 && abs(c)!=1));
    polynomial(buf[0],2, a,"x",b,"");
    polynomial(buf[1],2, c*c,"x^2",d*d,"");
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int((%s)/(%s))*Diff(x)=...%s%s...=%s%s",
        buf[0],
        buf[1],
        SEP,SEP,
        memb(buf[3],a,2*c*c,1,1,chprintf(buf[4],"ln(%s)",buf[1]),false),
        memb(buf[5],b,c*d,1,1,chprintf(buf[6],"arctg(%s)", memb(buf[7],c,d,1,1,"x",false)),true)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s%s",
        memb(buf[3],2*a,c*c,1,1,chprintf(buf[4],"ln(%s)",buf[1]),false),
        memb(buf[5],b,c*d,1,1,chprintf(buf[6],"arctg(%s)", memb(buf[7],c,d,1,1,"x",false)),true)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s%s",
        memb(buf[3],2*a*c*c,1,1,1,chprintf(buf[4],"ln(%s)",buf[1]),false),
        memb(buf[5],b,c*d,1,1,chprintf(buf[6],"arctg(%s)", memb(buf[7],c,d,1,1,"x",false)),true)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s%s",
        memb(buf[3],2*a*c*c,1,1,1,chprintf(buf[4],"ln(%s)",buf[1]),false),
        memb(buf[5],b*c,d,1,1,chprintf(buf[6],"arctg(%s)", memb(buf[7],c,d,1,1,"x",false)),true)
    );
    return integ;
}

char *integral_ambp30 (const range& r, char *integ)
{
    char buf[20][BUFSZ]; chprintf(integ, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while(!(c>0 && c!=1 && a!=0 && b!=0 && abs(c)!=1 && abs(c)!=1));
    poly2ns(buf[1],2, c*c,1,2,1,"x", d*d,1,1,1,"");
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int((%s)/sqrt(%s))*Diff(x)=...%s%s...=%s%s",
        polynomial(buf[0],2,a,"x",b,""),
        buf[1],
        SEP,SEP,
        memb(buf[2],a,c*c,1,2,buf[1],false),
        memb(buf[3],b,c,1,1,chprintf(buf[5],"ln(|%s|)",polynomial(buf[6],2,c,"x",1,chprintf(buf[9],"sqrt(%s)", buf[1]))),true)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s%s",
        memb(buf[2],a*c*c,1,1,2,buf[1],false),
        memb(buf[3],b,c,1,1,chprintf(buf[5],"ln(|%s|)",polynomial(buf[6],2,c,"x",1,chprintf(buf[9],"sqrt(%s)", buf[1]))),true)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s%s",
        memb(buf[2],a*c*c,1,1,2,buf[1],false),
        memb(buf[3],b*c,1,1,1,chprintf(buf[5],"ln(|%s|)",polynomial(buf[6],2,c,"x",1,chprintf(buf[9],"sqrt(%s)", buf[1]))),true)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s%s",
        memb(buf[2],a,c*c,1,2,buf[1],false),
        memb(buf[3],b*c,1,1,1,chprintf(buf[5],"ln(|%s|)",polynomial(buf[6],2,c,"x",1,chprintf(buf[9],"sqrt(%s)", buf[1]))),true)
    );
    return integ;
}

char *integral_ambp31 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while(!(c!=0 && a!=0 && b!=0 && c>0 && d>0 && abs(c)!=1 && c!=d));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int((%s)/sqrt(%s))*Diff(x)=...%s%s...=%s",
        polynomial(buf[0],2,a,"x",b,""),
        poly2ns(buf[1],2, d,1,1,1,"", -c*c,1,2,1,"x"),
        SEP,SEP,
        poly2ns(buf[2],2,
            -a,c*c,1,2,polynomial(buf[6],2,d,"",-c*c,"x^2"),
            b,c,1,1,chprintf(buf[7], "arcsin((%s)*x)", fraction(buf[8],1,c*d,d))
        )
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s",
        poly2ns(buf[2],2,
            -a*c*c,1,1,2,polynomial(buf[6],2,d,"",-c*c,"x^2"),
            b,c,1,1,chprintf(buf[7], "arcsin((%s)*x)", fraction(buf[8],1,c*d,d))
        )
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s",
        poly2ns(buf[2],2,
            a*c*c,1,1,2,polynomial(buf[6],2,d,"",-c*c,"x^2"),
            b*c,1,1,1,chprintf(buf[7], "arcsin((%s)*x)", fraction(buf[8],1,c*d,d))
        )
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s",
        poly2ns(buf[2],2,
            -a*c*c,1,1,2,polynomial(buf[6],2,d,"",-c*c,"x^2"),
            -b*c,1,1,1,chprintf(buf[7], "arcsin((%s)*x)", fraction(buf[8],1,c*d,d))
        )
    );
    return integ;
}

char *integral_ambp32 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ, "");
    int a,b,c,d;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        d=rndr(r);
    }while(!(a!=0 && d!=0 && abs(d)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int(sin(%s)/(%s))*Diff(x)=...%s%s...=%s",
        polynomial(buf[0],2,a,"x",b,""),
        polynomial(buf[1],2,c,"",d,chprintf(buf[7],"cos(%s)",polynomial(buf[0],2,a,"x",b,""))),
        SEP,SEP,
        memb(buf[8], -1,a*d,1,1, chprintf(buf[9],"ln(%s)", polynomial(buf[1],2,c,"",d,chprintf(buf[7],"cos(%s)",polynomial(buf[0],2,a,"x",b,"")))),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[8], a,d,1,1, chprintf(buf[9],"ln(%s)", polynomial(buf[1],2,c,"",d,chprintf(buf[7],"cos(%s)",polynomial(buf[0],2,a,"x",b,"")))),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[8], a*d,1,1,1, chprintf(buf[9],"ln(%s)", polynomial(buf[1],2,c,"",d,chprintf(buf[7],"cos(%s)",polynomial(buf[0],2,a,"x",b,"")))),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[8], -a*d,1,1,1, chprintf(buf[9],"ln(%s)", polynomial(buf[1],2,c,"",d,chprintf(buf[7],"cos(%s)",polynomial(buf[0],2,a,"x",b,"")))),false));
    return integ;
}

char *integral_ambp33 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ, "");
    int a,b,c,k;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
        k=rndr(r);
    }while(!(k>0 && a!=0 && b!=0 && c!=0 && abs(b)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int((%s)/(%s))*Diff(x)=...%s%s...=%s",
        memb(buf[1],a,1,k,1,"x",false),
        poly2ns(buf[2],2, b,1,k+1,1,"x", c,1,1,1,""),
        SEP,SEP,
        memb(buf[3], a,b,1,1,chprintf(buf[4],"ln(%s)",poly2ns(buf[2],2, b,1,k+1,1,"x", c,1,1,1,"")),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[3], a*b,1,1,1,chprintf(buf[4],"ln(%s)",poly2ns(buf[2],2, b,1,k+1,1,"x", c,1,1,1,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", poly2ns(buf[3],2, a,b,1,1,"ln(x)", a,c*(k+1),k+1,1,"x"));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", poly2ns(buf[3],2, a,b,1,1,chprintf(buf[9],"ln(%s)",poly2ns(buf[8],1, b,1,k+1,1,"x")), a,c*(k+1),k+1,1,"x"));
    return integ;
}

char *integral_ambp34 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while(!(a!=0 && b!=0 && c!=0 && abs(b)!=1));
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int((%s)/(%s))*Diff(x)=...%s%s...=%s",
        polynomial(buf[0],1, a,"e^x"),
        polynomial(buf[1],2, b,"e^x",c,""),
        SEP,SEP,
        memb(buf[2], a,b,1,1,chprintf(buf[3],"ln(%s)", polynomial(buf[4],2,b,"e^x",c,"")),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2], a*b,1,1,1,chprintf(buf[3],"ln(%s)", polynomial(buf[4],2,b,"e^x",c,"")),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", poly2ns(buf[2],2, a,b,1,1,"x", a,c,1,1,"e^x"));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", poly2ns(buf[2],1,a,b,1,1,chprintf(buf[4],"%s",polynomial(buf[7],2, 1,"e^(-x)",c,""))));
    return integ;
}

char *integral_ambp35 (const range& r, char *integ)
{
    char buf[10][BUFSZ]; chprintf(integ, "");
    int a,b,c;
    do{
        a=rndr(r);
        b=rndr(r);
        c=rndr(r);
    }while(!(a!=0 && b!=0 && c!=0 && abs(b)!=1 && abs(a)!=1 && abs(a)!=abs(b)));
    chprintf(buf[1],"e^(%s)", polynomial(buf[0],1,a,"x"));
    polynomial(buf[3],2, b,buf[1], c,""),
    catprintf(integ, "Найдите интеграл:%s", SEP);
    catprintf(integ, "Int((%s)/(%s))*Diff(x)=...%s%s...=%s",
        buf[1],
        buf[3],
        SEP,SEP,
        memb(buf[2], 1,a*b,1,1,chprintf(buf[4],"ln(%s)",buf[3]),false)
    );
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2], a,b,1,1,chprintf(buf[4],"ln(%s)",buf[3]),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2], a*b,1,1,1,chprintf(buf[4],"ln(%s)",buf[3]),false));
    catprintf(integ, SEP);
    catprintf(integ, "...=%s", memb(buf[2], b,a,1,1,chprintf(buf[4],"ln(%s)",buf[3]),false));
    return integ;
}

 