long long uu_env::apply_unset_env_vars::h8afb57340744dec6(unsigned long long a0[6], unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0xd8]
    unsigned long v1;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xc8]
    unsigned long long v3;  // [sp-0xc0]
    unsigned long long v4;  // [sp-0xb8]
    unsigned long long v5;  // [sp-0xb0]
    int v6;  // [sp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0xa0]
    unsigned long long v8;  // [sp-0x98]
    unsigned int v9;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x88]
    unsigned long v11;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x70]
    unsigned long long v13;  // [sp-0x68]
    unsigned long long v14;  // [sp-0x60]
    unsigned long long v15;  // [sp-0x58]
    char v16;  // [sp-0x50]
    char v17;  // [bp-0x48]
    char v18;  // [bp-0x38]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rsi
    unsigned int v25;  // eax

    v1 = a0[4];
    v2 = a0[5] * 16 + v1;
    v20 = ::0x4cc040::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf5736879435dc993(&v1);
    if (!v20)
        return 0;
    v0 = &g_549368;
    do
    {
        v3 = 0x8000000000000000;
        v4 = v14;
        v5 = v15;
        if (!v5)
        {
LABEL_4ceea9:
            v13 = 1;
            v14 = v4;
            v15 = v5;
            v16 = 1;
            v11 = &v13;
            v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v6 = &g_549398;
            v7 = 2;
            v10 = 0;
            v8 = &v11;
            v9 = 1;
            ::0x4cb2e0::core::option::Option$LT$T$GT$::map_or_else::hc0527ddab4d2c9e4(&v17, &v6);
            v9 = 125;
            *((int128_t *)&v6) = *((int128_t *)&v17);
            v8 = *((long long *)&v18);
            core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::h8485834d925345c0(&v3);
            return alloc::boxed::Box$LT$T$GT$::new::h5d579e58798cc40b(&v6);
        }
        v22 = uu_env::native_int_str::NativeStr::contains::h3f8cb9d43726c9a3(&v3, &g_41778c, v21);
        if ((char)v22)
        {
            v25 = v22;
            goto LABEL_4ceea0;
        }
        else
        {
            v23 = uu_env::native_int_str::NativeStr::contains::h3f8cb9d43726c9a3(&v3, "=", v21);
            if ((char)v23)
            {
                v25 = v23;
                v0 = &g_549380;
LABEL_4ceea0:
                if (v25 == 2)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                goto LABEL_4ceea9;
            }
        }
        std::env::remove_var::h86ed310b8487f9e3(v20, v24, v21);
        core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::h8485834d925345c0(&v3);
        v20 = ::0x4cc040::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf5736879435dc993(&v1);
    } while (v20);
}
