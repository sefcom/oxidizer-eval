long long bat::style::StyleComponentList::expand_into(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r14
    char *v4;  // r12
    unsigned long long v5;  // rax
    unsigned long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v0 = v2;
    if (!a0[2])
        return v2;
    v3 = a0[2] * 2;
    v4 = 0;
    while (true)
    {
        v5 = (unsigned long long)v4[1 + a0[1]].components();
        if (v4[a0[1]] < 2)
        {
            v7 = a1.extend(v5, v5 + v6);
            v4 += 2;
            if (v3 == v4)
                return v7;
        }
        else
        {
            v8 = a1.retain(v5, a2);
            v4 += 2;
            if (v3 == v4)
                return v8;
        }
    }
}
