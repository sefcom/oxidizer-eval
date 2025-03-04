long long uu_tail::paths::Input::resolve::h81e1f38162942b9d(unsigned long long a0[3], unsigned long long a1[6])
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    int v3;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x68]
    int v5;  // [sp-0x58]
    unsigned long long v6;  // [sp-0x48]
    char v7;  // [bp-0x40]
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x30]
    unsigned long long v11;  // r14
    unsigned long long v12;  // r15

    if (a1[3] != 0x8000000000000000)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, "/dev/stdin/dev/fd/0 <==\n\n", 10);
        v11 = a1[4];
        v12 = a1[5];
        ::0x50fce0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
        if (!(char)::0x5105d0::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(v11, v12, *((long long *)&v1), *((long long *)&v2)))
        {
            std::fs::canonicalize::hd214f5c614fa2ecb(&v0, v11, v12);
            if (*((long long *)&v0) != 0x8000000000000000)
            {
                a0[2] = *((long long *)&v2);
                *((int128_t *)&a0[0]) = *((int128_t *)&v0);
                return a0;
            }
            a0[0] = 0x8000000000000000;
            ::0x510010::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2718b16a2e13a805(&v0);
            return a0;
        }
    }
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v7, "/dev/stdin/dev/fd/0 <==\n\n", 10);
    std::fs::canonicalize::hd214f5c614fa2ecb(&v0, *((long long *)&v8), *((long long *)&v9));
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v4 = *((long long *)&v2);
        if ((long long)v3 == 0x8000000000000000)
            goto LABEL_511105;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, "/dev/fd/0 <==\n\n", 9);
        v6 = *((long long *)&v2);
        *((int128_t *)&v5) = *((int128_t *)&v0);
        if (!(char)::0x5105d0::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7((long long)(&v3)[8], v4, (long long)(&v5)[8], *((long long *)&v2)))
        {
            ::0x50fce0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v5);
            a0[2] = v4;
            *((int128_t *)&a0[0]) = (int128_t)v3;
        }
        else
        {
            ::0x50fce0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v5);
            a0[0] = 0x8000000000000000;
            if ((long long)v3 != 0x8000000000000000)
                ::0x50fce0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v3);
        }
    }
    else
    {
        v3 = 0x8000000000000000;
        ::0x510010::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2718b16a2e13a805(&v0);
LABEL_511105:
        a0[0] = 0x8000000000000000;
    }
    ::0x50fce0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v7);
    return a0;
}
