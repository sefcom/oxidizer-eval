long long uu_env::apply_unset_env_vars::hc3a5ba6187e1f001(unsigned long long a0[6])
{
    unsigned long long v0;  // [sp-0xd8]
    unsigned long v1;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xc8]
    unsigned long long v3;  // [sp-0xc0]
    unsigned long long v4;  // [sp-0xb8]
    unsigned long long v5;  // [sp-0xb0]
    int v6;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xa0]
    struct struct_0 **v8;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned int v9;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x88]
    char *v11;  // [sp-0x78]
    unsigned long long v12;  // [sp-0x70]
    unsigned long long v13;  // [sp-0x68]
    unsigned long long v14;  // [sp-0x60]
    unsigned long long v15;  // [sp-0x58]
    char v16;  // [sp-0x50]
    char v17;  // [bp-0x48]
    char v18;  // [bp-0x38]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned int v23;  // eax

    v1 = a0[4];
    v2 = a0[5] * 16 + v1;
    v20 = ::0x4cbf10::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&v1);
    if (!v20)
        return 0;
    v0 = &g_548bc8;
    do
    {
        v3 = 0x8000000000000000;
        v4 = v14;
        v5 = v15;
        if (!v5)
        {
LABEL_4ced79:
            v13 = 1;
            v14 = v4;
            v15 = v5;
            v16 = 1;
            v11 = &v13;
            v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v6 = &g_548ba8;
            v7 = 2;
            v10 = 0;
            v8 = &v11;
            v9 = 1;
            ::0x4cb1b0::core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d();
            v9 = 125;
            *((int128_t *)&v6) = *((int128_t *)&v17);
            v8 = *((long long *)&v18);
            core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::hef710a318dedb98d(&v3);
            return alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&v6);
        }
        v21 = uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(&v3, &g_417568);
        if ((char)v21)
        {
            v23 = v21;
            goto LABEL_4ced70;
        }
        else
        {
            v22 = uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(&v3, "=");
            if ((char)v22)
            {
                v23 = v22;
                v0 = &g_548be0;
LABEL_4ced70:
                if (v23 == 2)
                    core::option::unwrap_failed::h0e11329e76906eaa(v0); /* do not return */
                goto LABEL_4ced79;
            }
        }
        std::env::remove_var::h15b89aa0b6126639(v20);
        core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::hef710a318dedb98d(&v3);
        v20 = ::0x4cbf10::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&v1);
    } while (v20);
}
