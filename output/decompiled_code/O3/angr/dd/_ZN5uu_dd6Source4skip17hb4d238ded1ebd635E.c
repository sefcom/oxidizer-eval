long long uu_dd::Source::skip::hb4d238ded1ebd635(unsigned int *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x60]
    struct struct_0 **v4;  // [sp-0x58], Other Possible Types: unsigned long long
    int v5;  // [sp-0x50], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x48]
    char *v7;  // [sp-0x38]
    unsigned long long v8;  // [sp-0x30]
    unsigned long v9;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x20]
    unsigned int v12;  // eax
    unsigned long long v13;  // r15
    void* v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rsi

    v12 = *(a0);
    v13 = a0 + 1;
    if (!v12)
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(a1 >> 63, &g_561048);
        v14 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(v13, 2);
    }
    else if (v12 != 1)
    {
        v2 = v13;
        v3 = a1;
        v14 = std::io::copy::generic_copy::h94e6c8f4c841e7c1();
    }
    else
    {
        uu_dd::try_get_len_of_block_device::hf00af9fe29cc4b56(&v0, v13);
        if (*((int *)&v0) == 1 && v1 < a1)
        {
            v9 = uucore::util_name::h60d842bf27b05e82();
            v10 = v15;
            v7 = &v9;
            v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v2 = &g_561008;
            v3 = 2;
            v6 = 0;
            v4 = &v7;
            v5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v16, v15);
            v2 = &g_561028;
            v3 = 1;
            v4 = 8;
            *((int128_t *)&v5) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v16, v15);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::h7e0cb750979df1d6(&v0);
            return 0;
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$u64$GT$$C$std..io..error..Error$GT$$GT$::h7e0cb750979df1d6(&v0);
        v0 = v13;
        v1 = a1;
        v14 = std::io::copy::generic_copy::h94e6c8f4c841e7c1();
        if (v14)
        {
            return v14;
        }
        else if (v17 >= a1)
        {
            return v14;
        }
        else
        {
            v9 = uucore::util_name::h60d842bf27b05e82();
            v10 = v17;
            v7 = &v9;
            v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v2 = &g_561008;
            v3 = 2;
            v6 = 0;
            v4 = &v7;
            v5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v18, v17);
            v2 = &g_561038;
            v3 = 1;
            v4 = 8;
            *((int128_t *)&v5) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v18, v17);
            return v14;
        }
    }
    return v14;
}
