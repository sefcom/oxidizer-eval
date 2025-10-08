long long fish::ast::is_keyword_char(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v3;  // rax
    unsigned int v4;  // ebx
    unsigned int v5;  // ebx
    unsigned long v6;  // rax

    v1 = v3;
    v5 = v4 & 0xffffff00 | 1;
    if ((char)"a".contains(a0))
    {
        return v5;
    }
    else if ((char)"A".contains(a0))
    {
        return v5;
    }
    else if (!(char)"0".contains(a0))
    {
        v6 = a0 - 33;
        if ((unsigned int)v6 <= 59)
        {
            v0 = 576460752303423555;
            if ((*((char *)&v0 + ((v6 & 63) >> 3)) >> ((char)v6 & 63 & 7) & 1))
                return v5;
        }
        if (a0 == 10)
            return v5;
        return 0;
    }
    else
    {
        return v5;
    }
}
