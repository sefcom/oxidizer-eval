long long uu_rmdir::remove::h6b95edc6976a278a(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long v0;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa8]
    unsigned long long v2;  // [sp-0xa0]
    unsigned long long v3;  // [sp-0x98]
    unsigned long long v4;  // [sp-0x90]
    unsigned long long v5;  // [sp-0x88]
    unsigned long long v6;  // [sp-0x80]
    char v7;  // [sp-0x78]
    unsigned long v8;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x68]
    unsigned long long v10;  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    void* v12;  // [sp-0x50]
    int v13;  // [sp-0x40]
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    unsigned long long v17;  // 4096
    int v18;  // xmm0
    int v19;  // ymm0
    int v20;  // ymm0
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rsi
    int v29;  // xmm0

    v15 = a2;
    v16 = a1;
    if ((a3 & 0x10000))
    {
        if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
            once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
        v18 = g_4e0a38;
        v20 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
        v13 = v18;
        v4 = 1;
        v5 = a1;
        v6 = a2;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfdf7e310e0c353b9;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v8 = &g_4dc078;
        v9 = 3;
        v12 = 0;
        v10 = &v0;
        v11 = 2;
        std::io::stdio::_print::he918bceb0c89db46(&v8, v17, a2);
    }
    v21 = std::sys::pal::unix::fs::rmdir::h028ffaebae6b55a1(a1, a2);
    if (v21)
    {
        a0[0] = v21;
        a0[1] = v16;
        a0[2] = v15;
        return a0;
    }
    if (((unsigned short)a3 & 0x100))
    {
        if ((a3 & 0x10000))
        {
            while (true)
            {
                v27 = std::path::Path::parent::h65c9a340a6266f2d(v16, v15, v25, v26);
                if (!(v27) || !((v15 = v25, v25)))
                    break;
                v16 = v27;
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                v29 = g_4e0a38;
                v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
                v13 = v29;
                v4 = 1;
                v5 = v16;
                v6 = v25;
                v7 = 1;
                v0 = &v13;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfdf7e310e0c353b9;
                v2 = &v4;
                v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v8 = &g_4dc078;
                v9 = 3;
                v12 = 0;
                v10 = &v0;
                v11 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&v8, v28, v25);
                v21 = std::sys::pal::unix::fs::rmdir::h028ffaebae6b55a1(v16, v25);
                if (v21)
                {
                    a0[0] = v21;
                    a0[1] = v16;
                    a0[2] = v15;
                    return a0;
                }
            }
        }
        else
        {
            while (true)
            {
                v24 = std::path::Path::parent::h65c9a340a6266f2d(v16, v15, v22, v23);
                if (!(v24) || !((v15 = v22, v22)))
                    break;
                v16 = v24;
                v21 = std::sys::pal::unix::fs::rmdir::h028ffaebae6b55a1(v24, v22);
                if (v21)
                {
                    a0[0] = v21;
                    a0[1] = v16;
                    a0[2] = v15;
                    return a0;
                }
            }
        }
    }
    a0[0] = 0;
    return a0;
}
