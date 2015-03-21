#ifndef IDENTIFIERS_H
#define IDENTIFIERS_H

namespace Identifiers{

struct from{
    from(unsigned interval) : interval(interval) {};

    unsigned interval;
};

struct to{
    to(unsigned interval) : interval(interval) {};

    unsigned interval;
};

unsigned* operator, (from from_interval, to to_interval)
{
    unsigned* ret = new unsigned[2];

    ret[0] = from_interval.interval;
    ret[1] = to_interval.interval;

    return ret;
}
}

#endif // IDENTIFIERS_H
