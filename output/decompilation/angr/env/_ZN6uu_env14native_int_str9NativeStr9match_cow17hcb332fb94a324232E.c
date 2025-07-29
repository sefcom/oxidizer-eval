long long uu_env::native_int_str::NativeStr::match_cow(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x40], Other Possible Types: unsigned long long
    char v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    unsigned long long v6;  // rax
    unsigned long v7;  // rdx

    if ((char)(((0 ^ a1[0]) & (0 ^ -(a1[0]))) >> 63))
    {
        v6 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a2, a3, a1[1], a1[2]);
        if (v6)
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v6;
            a0[2] = v7;
            return v6;
        }
    }
    else
    {
        v6 = uu_env::native_int_str::NativeStr::slice::{{closure}}(&v0, a4, a5, a1[1], a1[2]);
        if (*((long long *)&v0) != 0x8000000000000000)
        {
            v1.call_once(&v0);
            memcpy(&v4, &v2, 16);
            v3 = v1;
            return a0.call_once(&v3);
        }
    }
    a0[0] = 9223372036854775809;
    return v6;
}
