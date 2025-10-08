long long uu_tail::paths::Input::is_tailable(unsigned long long a0[6])
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3[6];  // rsi
    unsigned long long v4;  // rbx

    v3 = a0;
    if (!((char)(((0 ^ a0[3]) & (0 ^ -(a0[3]))) >> 63)))
        return uu_tail::paths::path_is_tailable(a0[4], a0[5]);
    v1 = v4;
    v0.resolve(a0);
    if (*((long long *)&v0) != 0x8000000000000000)
        return uu_tail::paths::Input::is_tailable::{{closure}}(&v0);
    return 0;
}
