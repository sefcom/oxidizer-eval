long long uu_test::integers::he37c408d0a55d011(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long, unsigned long long
    unsigned long v1;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x68], Other Possible Types: unsigned long long
    char v3;  // [bp-0x60]
    unsigned long long v4;  // [sp-0x58]
    unsigned long long v5;  // [sp-0x50]
    char v6;  // [bp-0x48]
    char v7;  // [bp-0x38]
    unsigned long long v8;  // [bp+0x8]
    unsigned long long v9;  // r13
    unsigned long long v10;  // rbp
    unsigned long long v11;  // r15
    int v12;  // xmm0
    unsigned long long v13;  // rax
    unsigned long long v14;  // r12
    unsigned long long v15;  // r15
    char v17;  // al
    unsigned long long v19;  // rax
    unsigned long long v20;  // 4098
    unsigned long long v21;  // cc_dep2
    unsigned long long v22;  // cc_ndep
    unsigned long long v23;  // rax
    unsigned long long v24;  // cc_dep2
    unsigned long long v25;  // cc_ndep
    unsigned long long v26;  // rbp
    unsigned long long v27;  // 4098

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1, a2);
    if (v0 || (core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i128$GT$::from_str::hc8dce56db4b142c5(&v0, v1, v2), v0))
    {
        v0 = 1;
        v1 = a1;
        v2 = a2;
    }
    else
    {
        v9 = v2;
        v10 = *((long long *)&v3);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a3, a4);
        if (!v0)
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i128$GT$::from_str::hc8dce56db4b142c5(&v0, v1, v2);
            if (!v0)
            {
                v11 = *((long long *)&v3);
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a5, v8);
                if (v0)
                {
                    v0 = 1;
                    v1 = a5;
                    v2 = v8;
                    v3 = 1;
                    v13 = ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&a0->field_8, &v0);
                    a0->field_0 = 4;
                    return v13;
                }
                v4 = v2;
                v5 = v11;
                v14 = v1;
                v15 = v2;
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v14, v15, "-eq", 3))
                {
                    v17 = !(v10 ^ v5) && !(v9 ^ v4);
                    a0->field_8 = v17;
                    a0->field_0 = 7;
                    return v13;
                }
                else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v14, v15, "-ne", 3))
                {
                    v19 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v14, v15, "-gt", 3);
                    if ((char)v19)
                    {
                        v20 = v4;
                        v5 = v5 - v10 - (v20 < v9);
                        v21 = v10 ^ v20 < v9;
                        v22 = v20 < v9;
                        v5 = v5;
                        goto LABEL_4ad024;
                    }
                    v23 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v14, v15, "-ge", 3);
                    if ((char)v23)
                    {
                        v24 = v5 ^ v9 < v4;
                        v25 = v9 < v4;
                        goto LABEL_4ad04e;
                    }
                    else
                    {
                        v19 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v14, v15, "-lt", 3);
                        if ((char)v19)
                        {
                            v21 = v5 ^ v9 < v4;
                            v22 = v9 < v4;
LABEL_4ad024:
                            v13 = v19 & 0xffffffffffffff00 | amd64g_calculate_condition(12, 16, v5, v21, v22) & 255;
                        }
                        else
                        {
                            v23 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v14, v15, "-le", 3);
                            if (!(char)v23)
                            {
                                vvar_363{stack -120} = 1;
                                vvar_364{stack -112} = a5;
                                vvar_365{stack -104} = v8;
                                vvar_366{stack -96} = 1;
                                ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&a0->field_8, &v0);
                                a0->field_0 = 4;
                                return v13;
                            }
                            v27 = v4;
                            v5 = v5 - v10 - (v27 < v9);
                            v24 = v10 ^ v27 < v9;
                            v25 = v27 < v9;
                            v26 = v5;
LABEL_4ad04e:
                            v13 = v23 & 0xffffffffffffff00 | amd64g_calculate_condition(13, 16, v26, v24, v25) & 255;
                        }
                        a0->field_8 = v17;
                        a0->field_0 = 7;
                        return v13;
                    }
                }
                else
                {
                    a0->field_8 = v17;
                    a0->field_0 = 7;
                    return v13;
                }
            }
        }
        v0 = 1;
        v1 = a3;
        v2 = a4;
    }
    v3 = 1;
    ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&v6, &v0);
    v12 = *((int128_t *)&v6);
    v13 = *((long long *)&v7);
    a0->field_0 = 5;
    *((void*)&a0->field_8) = v12;
    a0->field_18 = v13;
    return v13;
}
