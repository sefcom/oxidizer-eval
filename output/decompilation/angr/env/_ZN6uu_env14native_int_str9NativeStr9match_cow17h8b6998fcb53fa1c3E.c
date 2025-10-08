long long uu_env::native_int_str::NativeStr::match_cow(void* a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long long
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax

    if ((char)(((0 ^ a1[0]) & (0 ^ -(a1[0]))) >> 63))
    {
        v3 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a2, a3, a1[1], a1[2]);
        if (!v3)
        {
            *((unsigned long long *)a0) = 9223372036854775809;
            return 0;
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        *((unsigned long long *)&a0[8]) = v3;
        *((unsigned long *)&a0[16]) = v4;
        return v3;
    }
    else
    {
        uu_env::native_int_str::NativeStr::slice::{{closure}}(&v0, a4, a5, a1[1], a1[2]);
        v5 = v0;
        if (v0 == 0x8000000000000000)
            v5 = 9223372036854775809;
        else
            *((int128_t *)&a0[8]) = *((int128_t *)&v1);
        *((unsigned long long *)a0) = v5;
        return v5;
    }
}
