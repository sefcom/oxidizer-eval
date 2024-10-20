int uu_tee::process_error::h07c9f5182a896fb9()
{
    char v0;  // [bp-0x98]
    unsigned long v1;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x88]
    unsigned long long v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    void* v5;  // [sp-0x70]
    unsigned long v6;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x58]
    unsigned long long v8;  // [sp-0x50]
    unsigned long long v9;  // [sp-0x48]
    int v10;  // [bp-0x40], Other Possible Types: void*
    int v11;  // [sp-0x38]
    char v12;  // [sp-0x28]
    unsigned long v14;  // rdi
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rsi
    struct_0 *v17;  // rdx
    unsigned long long *v18;  // rcx
    unsigned long long v19;  // r15

    if (v14)
    {
        goto *((int *)(4298048 + *((char *)vvar_32{reg 72}) * 4)) + 4298048;
    }
    else
    {
        if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v15) != 11)
        {
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v10) = g_4ec6b0;
            v6 = &v10;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h896ab9823276905c;
            v1 = &anon.53ff2aae8c1b62ba59dc209553c8e3d7.39.llvm.2604383847107207927;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v16, v17);
            v10 = 0;
            *((int128_t *)&v11) = *((int128_t *)&(&v17->padding_0)[1]);
            v12 = 0;
            v6 = &v10;
            v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v8 = &v0;
            v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v1 = &g_4e7a50;
            v2 = 3;
            v5 = 0;
            v3 = &v6;
            v4 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v15, v17);
            *(v18) = *(v18) + 1;
        }
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h8612a0a8f6b9ee91E.llvm.2604383847107207927(v19);
        return;
    }
}
