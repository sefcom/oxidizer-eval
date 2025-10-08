long long zoxide::db::stream::Stream::filter_by_exists(char a0, char a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0xbf]
    unsigned long long v2;  // [bp-0xb8]
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0x78]
    unsigned long v7;  // r8
    char v8;  // al
    unsigned long v9;  // rax

    if (!(a0 & 1))
        return v9 & 0xffffffffffffff00 | 1;
    v7 = ((a1 & 1) ? std::fs::symlink_metadata : std::fs::metadata);
    ((a1 & 1) ? std::fs::symlink_metadata : std::fs::metadata)();
    if (*((int *)&v3) == 2)
    {
        v2 = *((long long *)&v4);
        v8 = 1;
    }
    else
    {
        v1 = (0xf000 & *((int *)&v5)) == 0x4000;
    }
    v0 = v8;
    return v0.unwrap_or_default();
}
