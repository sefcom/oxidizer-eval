long long uu_env::EnvAppData::process_all_string_arguments::h174ba6a6cfbb3495(unsigned long long a0[3], struct_0 *a1, unsigned long long a2[3])
{
    unsigned long long v0[3];  // [sp-0xa8], Other Possible Types: void*
    char v1;  // [bp-0x98]
    char v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    void* v4;  // [sp-0x78]
    unsigned long long v5;  // [sp-0x70]
    void* v6;  // [sp-0x68]
    unsigned long v7;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x50]
    int v9;  // [sp-0x48]
    unsigned long long v10;  // [sp-0x38]
    unsigned long long v12[3];  // rax
    int v13;  // ymm0
    unsigned long long v14;  // rax
    int v15;  // xmm0
    unsigned long long v16;  // rcx
    unsigned long long v17[3];  // rbx

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v7 = a2[1];
    v8 = v7 + a2[2] * 24;
    v12 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd56a2f9500c72283(&v7);
    if (v12)
    {
        do
        {
            v0 = 0;
            uu_env::check_and_handle_string_args::hed3622534bd9b3ff(&v1, v12[1], v12[2], "--split-string", 14, &v4);
            v14 = *((long long *)&v1);
            if (v14)
            {
                v16 = *((long long *)&(&v1)[8]);
                v17 = a0;
                v17[1] = v14;
                v17[2] = v16;
                v17[0] = 0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hdb99ebf8572fc985(&v4);
                return v17;
            }
            if (v2)
            {
LABEL_4cdea6:
                *((char *)&a1->field_0 + 1) = 1;
            }
            else
            {
                v0 = 0;
                uu_env::check_and_handle_string_args::hed3622534bd9b3ff(&v1, v12[1], v12[2], "-S", 2, &v4);
                v14 = *((long long *)&v1);
                if (v14)
                {
                    vvar_277{reg 24} = *((long long *)&(&v1)[8]);
                    vvar_278{reg 40} = a0;
                    v17[1] = v14;
                    v17[2] = v16;
                    v17[0] = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hdb99ebf8572fc985(&v4);
                    return v17;
                }
                if ((v12 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd56a2f9500c72283(&v7), v12))
                    goto LABEL_4cdea6;
                v0 = 0;
                uu_env::check_and_handle_string_args::hed3622534bd9b3ff(&v1, v12[1], v12[2], "-vSargv0:     executing: ", 3, &v4);
                v14 = *((long long *)&v1);
                if (v14)
                {
                    vvar_283{reg 24} = *((long long *)&(&v1)[8]);
                    vvar_284{reg 40} = a0;
                    v17[1] = v14;
                    v17[2] = v16;
                    v17[0] = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hdb99ebf8572fc985(&v4);
                    return v17;
                }
                if (v2)
                {
                    a1->field_0 = 257;
                }
                else
                {
                    v0[0] = a2;
                    uu_env::check_and_handle_string_args::hed3622534bd9b3ff(&v1, v12[1], v12[2], "-vvSAuto", 4, &v4);
                    v14 = *((long long *)&v1);
                    if (v14)
                    {
                        vvar_289{reg 24} = *((long long *)&(&v1)[8]);
                        vvar_290{reg 40} = a0;
                        v17[1] = v14;
                        v17[2] = v16;
                        v17[0] = 0x8000000000000000;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hdb99ebf8572fc985(&v4);
                        return v17;
                    }
                    else if (!v2)
                    {
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h66cde354b2381e7e(&v1, v12);
                        v10 = *((long long *)&v3);
                        v15 = *((int128_t *)&v1);
                        v13 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15;
                        v9 = v15;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h7c4f886ea6e23a5a(&v4, &v9);
                    }
                    else
                    {
                        a1->field_0 = 257;
                        a1->field_2 = 0;
                    }
                }
            }
        } while ((v12 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd56a2f9500c72283(&v7), v12));
    }
    v17 = a0;
    v17[2] = v6;
    *((int128_t *)&v17[0]) = *((int128_t *)&v4);
    return v17;
}
