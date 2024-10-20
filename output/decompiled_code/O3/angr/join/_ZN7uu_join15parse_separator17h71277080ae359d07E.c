long long uu_join::parse_separator::h71277080ae359d07(struct_3 *a0, char *a1, unsigned long long a2)
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long, unsigned long long
    char v1[4];  // [sp-0x80], Other Possible Types: unsigned long long
    struct struct_2 **v2;  // [sp-0x78], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0x70]
    void* v4;  // [sp-0x68]
    char v5[4];  // [sp-0x58]
    unsigned long long v6;  // [sp-0x50]
    struct struct_1 **v7;  // [sp-0x48]
    unsigned long long v8;  // [sp-0x40]
    char v9;  // [bp-0x38]
    char v10;  // [bp-0x28]
    unsigned int v11;  // [sp-0x20]
    unsigned long long v13;  // rax
    struct_0 *v14;  // rax
    char v15[4];  // rsi
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rax
    struct_0 *v19;  // rbx
    unsigned long long v20[3];  // rax
    char v21[4];  // r8
    unsigned int v22;  // r9d
    unsigned int v23;  // r11d
    unsigned int v24;  // r10d
    unsigned long long v25;  // rcx
    unsigned int v26;  // edx
    unsigned int v27;  // r9d
    unsigned int v28;  // esi
    int v29;  // xmm0

    if (a2 == 1)
    {
        v13 = *(a1);
        a0->field_0 = 0x8000000000000000;
        a0->field_8 = v13;
        return v13;
    }
    else if (a2)
    {
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1, a2);
        if (!v0)
        {
            v15 = v1;
            v16 = v2;
            *(&v5) = v15;
            v6 = v16;
            if (!v16)
                core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
            v17 = &v15[v16];
            v18 = v15[0];
            if ((char)v18 < 0)
            {
                v22 = (unsigned int)v18 & 31;
                v23 = v15[1] & 63;
                if ((v18 & 255) <= 223)
                {
                    v21 = &v15[2];
                    v18 = v22 * 64 | v23;
                    if (v21 == v17)
                    {
                        vvar_346{reg 16} = _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h4f184cf760c10fc8(a0, v15, v16);
                        return v13;
                    }
                }
                else
                {
                    v24 = v15[2] & 63 | v23 * 64;
                    if ((v18 & 255) < 240)
                    {
                        v21 = &v15[3];
                        v18 = v24 | v22 * 0x1000;
                        if (v21 == v17)
                        {
                            vvar_341{reg 16} = _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h4f184cf760c10fc8(a0, v15, v16);
                            return v13;
                        }
                    }
                    else
                    {
                        v21 = v15 + 1;
                        v18 = v15[3] & 63 | v24 * 64 | (v22 & 7) * 0x40000;
                        if (v21 == v17)
                        {
                            v13 = _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h4f184cf760c10fc8(a0, v15, v16);
                            return v13;
                        }
                    }
                }
            }
            else
            {
                v21 = &v15[1];
                if (v21 == v17)
                {
                    vvar_336{reg 16} = _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h4f184cf760c10fc8(a0, v15, v16);
                    return v13;
                }
            }
            v25 = v21[0];
            if ((char)v25 < 0)
            {
                v26 = (unsigned int)v25 & 31;
                v27 = v21[1] & 63;
                if ((v25 & 255) <= 223)
                {
                    v25 = v26 * 64 | v27;
                }
                else
                {
                    v28 = v21[2] & 63 | v27 * 64;
                    v25 = ((v25 & 255 & 255) < 240 ? v21[3] & 63 | v28 * 64 | (v26 & 7) * 0x40000 : v28 | v26 * 0x1000);
                }
            }
            if ((unsigned int)v18 == 92 && (unsigned int)v25 == 48)
            {
                a0->field_0 = 0x8000000000000000;
                a0->field_8 = 0;
                return 0x8000000000000000;
            }
            v7 = &v5;
            v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he7746ce7cb90bda8;
            v0 = &g_4fdd60;
            v1 = 1;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v9, &v0);
            v11 = 1;
            v20 = __rust_alloc(32, 8);
            if (!v20)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v29 = *((int128_t *)&v9);
            *((int128_t *)&v20[2]) = *((int128_t *)&v10);
            *((void*)&v20[0]) = v29;
        }
        else
        {
            v14 = __rust_alloc(24, 1);
            if (!v14)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v19 = v14;
            v14->field_0 = 60362812332964617531427533093191184238;
            v19->field_10 = 7089074970947778914;
            v20 = __rust_alloc(32, 8);
            if (!v20)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v20[0] = 24;
            v20[1] = v19;
            v20[2] = 24;
            *((int *)&v20[1]) = 1;
        }
        *((unsigned long long *[3])&a0->field_8) = v20;
        a0->field_10 = &g_4fdb88;
        a0->field_0 = 9223372036854775812;
        return 9223372036854775812;
    }
    else
    {
        a0->field_0 = 9223372036854775810;
        return 9223372036854775810;
    }
}
