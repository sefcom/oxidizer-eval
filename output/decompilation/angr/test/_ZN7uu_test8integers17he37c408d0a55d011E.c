long long uu_test::integers::he37c408d0a55d011(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x78]
    unsigned long v2;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x68], Other Possible Types: unsigned long long
    char v4;  // [sp-0x60]
    unsigned long long v5;  // [sp-0x58]
    unsigned long long v6;  // [sp-0x50]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long v9;  // [bp+0x8]
    unsigned long long v10;  // r13
    unsigned long long v11;  // rbp
    unsigned long long v12;  // r15
    int v13;  // xmm0
    unsigned long long v14;  // rax
    unsigned long long v15;  // r12
    unsigned long long v16;  // r15
    char v18;  // al
    unsigned long long v20;  // rax
    unsigned long long v21;  // 4098
    unsigned long long v22;  // cc_dep1
    unsigned long long v23;  // cc_dep2
    unsigned long long v24;  // cc_ndep
    unsigned long long v25;  // rax
    unsigned long long v26;  // cc_dep1
    unsigned long long v27;  // cc_dep2
    unsigned long long v28;  // cc_ndep
    unsigned long long v29;  // 4098

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1, a2);
    if (v0 || (core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i128$GT$::from_str::hc8dce56db4b142c5(&v0, v2, v3), v0))
    {
        v1 = 1;
        v2 = a1;
        v3 = a2;
    }
    else
    {
        v10 = v3;
        v11 = *((long long *)&v4);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a3, a4);
        if (!v0)
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i128$GT$::from_str::hc8dce56db4b142c5(&v0, v2, v3);
            if (!v0)
            {
                v12 = *((long long *)&v4);
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a5, v9);
                if (v0)
                {
                    v0 = 1;
                    v2 = a5;
                    v3 = v9;
                    v4 = 1;
                    v14 = ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&a0->field_8, &v0);
                    a0->field_0 = 4;
                    return v14;
                }
                v5 = v3;
                v6 = v12;
                v15 = v2;
                v16 = v3;
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v15, v16, "-eq", 3))
                {
                    v18 = !(v11 ^ v6) && !(v10 ^ v5);
                    a0->field_8 = v18;
                    a0->field_0 = 7;
                    return v14;
                }
                else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v15, v16, "-ne", 3))
                {
                    v20 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v15, v16, "-gt", 3);
                    if ((char)v20)
                    {
                        v21 = v5;
                        v6 = v6 - v11 - (v21 < v10);
                        v22 = v6;
                        v23 = v11 ^ v21 < v10;
                        v24 = v21 < v10;
                        goto LABEL_4ad024;
                    }
                    v25 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v15, v16, "-ge", 3);
                    if ((char)v25)
                    {
                        v26 = v11;
                        v27 = v6 ^ v10 < v5;
                        v28 = v10 < v5;
                        goto LABEL_4ad04e;
                    }
                    else
                    {
                        v20 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v15, v16, "-lt", 3);
                        if ((char)v20)
                        {
                            v22 = v11;
                            v23 = v6 ^ v10 < v5;
                            v24 = v10 < v5;
LABEL_4ad024:
                            v14 = v20 & 0xffffffffffffff00 | amd64g_calculate_condition(12, 16, v22, v23, v24) & 255;
                        }
                        else
                        {
                            v25 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v15, v16, "-le", 3);
                            if (!(char)v25)
                            {
                                vvar_353{stack -120} = 1;
                                vvar_354{stack -112} = a5;
                                vvar_355{stack -104} = v9;
                                vvar_356{stack -96} = 1;
                                ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&a0->field_8, &v0);
                                a0->field_0 = 4;
                                return v14;
                            }
                            v29 = v5;
                            v6 = v6 - v11 - (v29 < v10);
                            v26 = v6;
                            v27 = v11 ^ v29 < v10;
                            v28 = v29 < v10;
LABEL_4ad04e:
                            v14 = v25 & 0xffffffffffffff00 | amd64g_calculate_condition(13, 16, v26, v27, v28) & 255;
                        }
                        a0->field_8 = v18;
                        a0->field_0 = 7;
                        return v14;
                    }
                }
                else
                {
                    a0->field_8 = v18;
                    a0->field_0 = 7;
                    return v14;
                }
            }
        }
        v1 = 1;
        v2 = a3;
        v3 = a4;
    }
    v4 = 1;
    ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&v7, &v0);
    v13 = *((int128_t *)&v7);
    v14 = *((long long *)&v8);
    a0->field_0 = 5;
    *((void*)&a0->field_8) = v13;
    a0->field_18 = v14;
    return v14;
}
