long long uu_tr::operation::Sequence::from_str(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x88]
    int v1;  // [bp-0x88]
    int v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    char v5;  // [bp-0x60]
    int v6;  // [bp-0x58]
    int v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x38]
    char v9;  // [bp-0x30]

    v5.process(a1, a2);
    if (*((int *)&v5) == 1)
    {
        v3 = v7;
        v1 = v6;
    }
    else
    {
        v4 = v8;
        v2 = v7;
        v0 = 3;
    }
    v9.unwrap(&(char)v0);
    v5.into_iter(&v9);
    return a0.collect(&v5);
}
