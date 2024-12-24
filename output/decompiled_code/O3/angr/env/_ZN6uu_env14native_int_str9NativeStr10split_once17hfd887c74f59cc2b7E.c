long long uu_env::native_int_str::NativeStr::split_once::hfd887c74f59cc2b7(unsigned long long a0[6], unsigned long long a1[3], unsigned int *a2)
{
    char v0;  // [sp-0x89]
    int v1;  // [sp-0x88], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x80]
    unsigned long long v3;  // [sp-0x78]
    int v4;  // [sp-0x70]
    unsigned long long v5;  // [sp-0x60]
    char v6;  // [bp-0x50]
    char v7;  // [bp-0x40]
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    char v11;  // dl
    unsigned long long v12;  // r15
    unsigned long long v13;  // rdx
    int v14;  // xmm0

    if (((char)uu_env::native_int_str::get_single_native_int_value::h99fe4584b4b428dc(a2) & 1))
    {
        v0 = v11;
        v12 = a1[2];
        v1 = a1[1];
        v2 = v1 + v12;
        if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h36806ba27ece2e31(&v1, &v0))
        {
            uu_env::native_int_str::NativeStr::slice::h9d927c006b19d53a(&v6, a1, 0, v13);
            uu_env::native_int_str::NativeStr::slice::h9d927c006b19d53a(&v8, a1, v13 + 1, v12);
            v3 = *((long long *)&v7);
            v14 = *((int128_t *)&v6);
            v1 = v14;
            v5 = *((long long *)&v9);
            *((int128_t *)&v4) = *((int128_t *)&v8);
            *((void*)&a0[0]) = v14;
            a0[4] = (long long)(&v4)[8];
            a0[5] = v5;
            a0[2] = v3;
            a0[3] = (long long)v4;
            return a0;
        }
    }
    a0[0] = 9223372036854775809;
    return a0;
}
