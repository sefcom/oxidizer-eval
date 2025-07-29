long long uu_tail::paths::Input::is_tailable(unsigned long long a0[6])
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6[6];  // rsi
    unsigned long long v7;  // rbx

    v6 = a0;
    if (!((char)(((0 ^ a0[3]) & (0 ^ -(a0[3]))) >> 63)))
        return uu_tail::paths::path_is_tailable(a0[4], a0[5]);
    v4 = v7;
    v0.resolve(a0);
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        v3 = v1;
        memcpy(&v2, &v0, 16);
        return uu_tail::paths::Input::is_tailable::{{closure}}(&v2);
    }
    return 0;
}
