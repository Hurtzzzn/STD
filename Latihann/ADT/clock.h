using Hour = int{23};
using Minute = int{59};
using Second = int{59};

struct Clock {
    Hour HH;
    Minute MM;
    Second SS;
};

bool isValid(int HH, int MM, int SS);

Clock MakeClock(int HH, int MM, int SS);

Hour GetHour(Clock c);

Minute GetMinute(Clock c);

Second GetSecond(Clock c);

void SetHour(Clock *c, int newHH);

void SetMinute(Clock *c, int newMM);

void SetSecond(Clock *c, int newSS);

bool isEqual(Clock c1, Clock c2);

Clock AddClock(Clock c1, Clock c2);

void PrintClock(Clock c);
