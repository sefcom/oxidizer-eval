int uu_tee::process_error::hffeccccb656e6fac()
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
    void* v10;  // [sp-0x40], Other Possible Types: unsigned long, unsigned long long
    int v11;  // [bp-0x38], Other Possible Types: struct_0 *
    char v12;  // [sp-0x28]
    unsigned long v14;  // rdi
    unsigned long long v15;  // rsi
    struct_0 *v16;  // rdx
    unsigned long long *v17;  // rcx
    unsigned long long v18;  // r15

    if (v14)
    {
        goto *((int *)(4315004 + *((char *)vvar_28{reg 72}) * 4)) + 4315004;
    }
    else
    {
        if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v15) != 11)
        {
            v10 = uucore::util_name::h412db5e565a079f3();
            v11 = v16;
            v6 = &v10;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he69afc6e69987fb8;
            v1 = &g_520338;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v15, v16);
            v10 = 0;
            *((int128_t *)&v11) = *((int128_t *)&(&v16->padding_0)[1]);
            v12 = 0;
            v6 = &v10;
            v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v8 = &v0;
            v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v1 = &g_520358;
            v2 = 3;
            v5 = 0;
            v3 = &v6;
            v4 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v15, v16);
            *(v17) = *(v17) + 1;
        }
        ::0x4b1cd0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h49b06029efa5deec(v18);
        return;
    }
}
