long long uu_join::Input<Sep>::compare(char a0, void* a1, unsigned long a2, void* a3, unsigned long a4)
{
    void* v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    void* v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v5;  // rbx
    unsigned long v6;  // 4096
    unsigned long v7;  // rax
    unsigned long v8;  // rax

    if (!(a3 & a1))
    {
        return (!a1 ? -(0 < a3) : 1);
    }
    else if ((a0 & 1))
    {
        v0 = a1;
        v1 = a2;
        v2 = a3;
        v3 = a4;
        return v0.cmp(&v2);
    }
    else
    {
        v5 = a2 - a4;
        if (a2 < a4)
            v6 = a2;
        else
            v6 = a4;
        v7 = memcmp(a1, a3, v6);
        if ((unsigned int)v7)
            v8 = v7;
        else
            v8 = v5;
        return v7 & 0xffffff00 | (v8 > 0) - (v8 < 0);
    }
}
