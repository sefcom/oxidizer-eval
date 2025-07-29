long long uu_tr::operation::Sequence::from_str(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x89]
    unsigned long long v1;  // [bp-0x88]
    int v2;  // [bp-0x88]
    int v3;  // [bp-0x80]
    int v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    int v7;  // [bp-0x60]
    int v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x40]
    char v10;  // [bp-0x38]

    v6.process(&v0, a1, a2);
    if ((v6 & 1))
    {
        v4 = v8;
        v2 = v7;
    }
    else
    {
        v5 = v9;
        v3 = v8;
        v1 = 3;
    }
    v6.unwrap(&(char)v2);
    v10.into_iter(&v6);
    return core::iter::adapters::try_process(a0, &v10);
}
