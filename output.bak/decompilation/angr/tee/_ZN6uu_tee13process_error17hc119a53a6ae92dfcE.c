long long uu_tee::process_error::hc119a53a6ae92dfc(unsigned long a0, unsigned long long a1, struct_1 *a2, unsigned long long *a3)
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x88]
    struct struct_0 **v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    void* v5;  // [sp-0x70]
    char *v6;  // [sp-0x60]
    unsigned long long v7;  // [sp-0x58]
    char *v8;  // [sp-0x50]
    unsigned long long v9;  // [sp-0x48]
    void* v10;  // [sp-0x40], Other Possible Types: unsigned long, unsigned long long
    int v11;  // [bp-0x38], Other Possible Types: unsigned long
    char v12;  // [sp-0x28]
    unsigned long v14;  // rdx

    v0 = a1;
    if (a0)
    {
        goto *((int *)(4274940 + *((char *)a0) * 4)) + 4274940;
    }
    else
    {
        if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(a1) != 11)
        {
            v10 = uucore::util_name::h60d842bf27b05e82();
            v11 = v14;
            v6 = &v10;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
            v1 = &g_51f9a8;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            v10 = 0;
            *((int128_t *)&v11) = *((int128_t *)&(&a2->padding_0)[1]);
            v12 = 0;
            v6 = &v10;
            v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v8 = &v0;
            v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v1 = &g_51f9c8;
            v2 = 3;
            v5 = 0;
            v3 = &v6;
            v4 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            *(a3) = *(a3) + 1;
        }
        ::0x4b1ad0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d();
        return 0;
    }
}
