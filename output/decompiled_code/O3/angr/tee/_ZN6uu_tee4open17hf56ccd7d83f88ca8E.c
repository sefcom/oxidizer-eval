long long uu_tee::open::hf56ccd7d83f88ca8(unsigned long long a0[5], void* a1, unsigned long a2, unsigned int a3, char *a4)
{
    unsigned long long v0;  // [sp-0xe0]
    unsigned long long v1;  // [sp-0xd8]
    unsigned int v2;  // [bp-0xd0]
    char v3;  // [sp-0xcf]
    char v4;  // [sp-0xce]
    char v5;  // [sp-0xcd]
    char v6;  // [bp-0xcc], Other Possible Types: unsigned short
    char v7;  // [bp-0xc8]
    char v8;  // [bp-0xc0]
    char v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    char v11;  // [bp-0xac]
    char v12;  // [bp-0xa8]
    unsigned long v13;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x98]
    unsigned long long v15;  // [sp-0x90]
    unsigned long long v16;  // [sp-0x88]
    void* v17;  // [sp-0x80]
    unsigned long v18;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x68]
    unsigned long long v20;  // [sp-0x60]
    unsigned long long v21;  // [sp-0x58]
    int v22;  // [bp-0x50], Other Possible Types: void*
    unsigned long long v23;  // [sp-0x48]
    unsigned long long v24;  // [sp-0x40]
    char v25;  // [sp-0x38]
    unsigned int *v28;  // rax
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rsi
    unsigned long long v32;  // r13

    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v7, a1, a2);
    v1 = 0x1b600000000;
    v2 = 0;
    v6 = 0;
    if (a3)
        v4 = 1;
    else
        v5 = 1;
    v3 = 1;
    v6 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v10, &v1, *((long long *)&v8), *((long long *)&v9));
    if (*((int *)&v10))
    {
        v0 = *((long long *)&v12);
        if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
            once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
        *((uint128_t *)&v22) = g_4ec6b0;
        v18 = &v22;
        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h896ab9823276905c;
        v13 = &anon.53ff2aae8c1b62ba59dc209553c8e3d7.39.llvm.2604383847107207927;
        v14 = 2;
        v17 = 0;
        v15 = &v18;
        v16 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v29, v30);
        v22 = 0;
        v23 = a1;
        v24 = a2;
        v25 = 0;
        v18 = &v22;
        v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v20 = &v0;
        v21 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v13 = &g_4e7a50;
        v14 = 3;
        v17 = 0;
        v15 = &v18;
        v16 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v31, v30);
        if (!a4 || *(a4) <= 1)
        {
            a0[0] = 9223372036854775809;
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h8612a0a8f6b9ee91E.llvm.2604383847107207927(v0);
        }
        else
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v0;
        }
    }
    else
    {
        v28 = __rust_alloc(4, 4);
        if (!v28)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v28) = *((int *)&v11);
        if (!a2)
        {
            v32 = 1;
        }
        else if (a2 < 0)
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            v32 = __rust_alloc(a2, 1);
            if (!v32)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        memcpy(v32, a1, a2);
        a0[0] = a2;
        a0[1] = v32;
        a0[2] = a2;
        a0[3] = v28;
        a0[4] = &g_4e79e0;
    }
    if (*((long long *)&v7))
        __rust_dealloc(*((long long *)&v8));
    return a0;
}
