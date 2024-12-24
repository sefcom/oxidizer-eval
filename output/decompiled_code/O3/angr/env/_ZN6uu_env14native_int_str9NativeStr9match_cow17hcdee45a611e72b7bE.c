long long uu_env::native_int_str::NativeStr::match_cow::hcdee45a611e72b7b(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v3;  // [sp-0x28]
    int v4;  // [sp-0x20]
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx

    v6 = a1[1];
    v7 = a1[2];
    if (a1[0] != 0x8000000000000000)
    {
        v8 = uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::hb97312e89a4255cc(&v0, a4, a5, v6, v7);
        if (*((long long *)&v0) != 0x8000000000000000)
        {
            core::ops::function::FnOnce::call_once::hf6afacebfc9c882c(&v1, &v0);
            *((int128_t *)&v4) = *((int128_t *)&v2);
            v3 = *((long long *)&v1);
            v8 = core::ops::function::FnOnce::call_once::h2f1bd91e8390128d(a0, &v3);
            return v8;
        }
    }
    else
    {
        v8 = uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::he36c9ccb0dcc1075(a2, a3, v6, v7);
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
