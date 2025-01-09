long long uu_env::native_int_str::NativeStr::match_cow::h3a8b8e3880da14e4(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v3;  // [sp-0x28]
    int v4;  // [sp-0x20]
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx

    if (a1[0] != 0x8000000000000000)
    {
        v8 = uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h033cea41decbbfeb(&v0, a4, a5, a1[1], a1[2]);
        if (*((long long *)&v0) != 0x8000000000000000)
        {
            core::ops::function::FnOnce::call_once::h63e4e715c9d610ef(&v1, &v0);
            *((int128_t *)&v4) = *((int128_t *)&v2);
            v3 = *((long long *)&v1);
            v8 = core::ops::function::FnOnce::call_once::hac7f13179b0dca92(a0, &v3);
            return v8;
        }
    }
    else
    {
        v8 = uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h1d1e8395e04fa064(a2, a3);
        if (v8)
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v8;
            a0[2] = v9;
            return v8;
        }
    }
    a0[0] = 9223372036854775809;
    return v8;
}
