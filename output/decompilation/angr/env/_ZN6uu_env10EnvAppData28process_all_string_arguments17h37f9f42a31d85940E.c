long long uu_env::EnvAppData::process_all_string_arguments::h37f9f42a31d85940(unsigned long long a0[3], struct_0 *a1, unsigned long long a2[3])
{
    char v0;  // [bp-0x98]
    char v1;  // [sp-0x90]
    char v2;  // [bp-0x88]
    void* v3;  // [sp-0x78]
    unsigned long long v4;  // [sp-0x70]
    void* v5;  // [sp-0x68]
    unsigned long v6;  // [sp-0x58]
    unsigned long long v7;  // [sp-0x50]
    int v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x38]
    unsigned long long v11[3];  // rax
    unsigned long long v12[3];  // rbx
    int v13;  // ymm0
    unsigned long long v14;  // rax
    int v15;  // xmm0
    unsigned long long v16;  // rcx
    unsigned long long v17[3];  // rbx

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v6 = a2[1];
    v7 = v6 + a2[2] * 24;
    v11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h318b604434d12f7c(&v6);
    if (v11)
    {
        v12 = v11;
        do
        {
            uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&v0, v12[1], v12[2], "--split-string", 14, &v3, NULL);
            v14 = *((long long *)&v0);
            if (v14)
            {
                v16 = *((long long *)&(&v0)[8]);
                v17 = a0;
                v17[1] = v14;
                v17[2] = v16;
                v17[0] = 0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he51afd1c6657a772(&v3);
                return v17;
            }
            if (v1)
            {
LABEL_4cdd76:
                *((char *)&a1->field_0 + 1) = 1;
            }
            else
            {
                uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&v0, v12[1], v12[2], "-S", 2, &v3, NULL);
                v14 = *((long long *)&v0);
                if (v14)
                {
                    vvar_274{reg 24} = *((long long *)&(&v0)[8]);
                    vvar_275{reg 40} = a0;
                    v17[1] = v14;
                    v17[2] = v16;
                    v17[0] = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he51afd1c6657a772(&v3);
                    return v17;
                }
                if (!(!v1))
                    goto LABEL_4cdd76;
                uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&v0, v12[1], v12[2], "-vSargv0:     executing: [0]= []= unknown error: ", 3, &v3, NULL);
                v14 = *((long long *)&v0);
                if (v14)
                {
                    vvar_280{reg 24} = *((long long *)&(&v0)[8]);
                    vvar_281{reg 40} = a0;
                    v17[1] = v14;
                    v17[2] = v16;
                    v17[0] = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he51afd1c6657a772(&v3);
                    return v17;
                }
                if (v1)
                {
                    a1->field_0 = 257;
                }
                else
                {
                    uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&v0, v12[1], v12[2], "-vvSAuto", 4, &v3, a2);
                    v14 = *((long long *)&v0);
                    if (v14)
                    {
                        vvar_286{reg 24} = *((long long *)&(&v0)[8]);
                        vvar_287{reg 40} = a0;
                        v17[1] = v14;
                        v17[2] = v16;
                        v17[0] = 0x8000000000000000;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he51afd1c6657a772(&v3);
                        return v17;
                    }
                    else if (v1)
                    {
                        a1->field_0 = 257;
                        a1->field_2 = 0;
                    }
                    else
                    {
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h220e028d5ab62681(&v0, v12);
                        v9 = *((long long *)&v2);
                        v15 = *((int128_t *)&v0);
                        v13 = v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15;
                        v8 = v15;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hc5b0859d542897ba(&v3, &v8);
                    }
                }
            }
        } while ((v12 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h318b604434d12f7c(&v6), v12));
    }
    v17 = a0;
    v17[2] = v5;
    *((int128_t *)&v17[0]) = *((int128_t *)&v3);
    return v17;
}
