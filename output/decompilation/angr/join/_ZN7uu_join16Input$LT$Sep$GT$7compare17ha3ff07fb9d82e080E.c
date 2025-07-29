long long uu_join::Input<Sep>::compare(char a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]

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
        return a1.compare(a2, a3, a4);
    }
}
