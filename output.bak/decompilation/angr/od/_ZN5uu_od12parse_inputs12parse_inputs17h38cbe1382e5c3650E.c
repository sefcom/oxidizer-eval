long long uu_od::parse_inputs::parse_inputs::h38cbe1382e5c3650(struct_0 *a0, unsigned long long a1, struct struct_1 *a2[5])
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    unsigned int v3;  // [sp-0x48]
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x28]
    struct struct_1 **v8;  // r15
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rdx
    unsigned long long *v11;  // rax
    unsigned long long v12;  // r12
    unsigned long long v13[2];  // rax
    unsigned long long v16[2];  // rax

    a2[3](&v0);
    v8 = a2[4];
    if ((char)v8(a1, &g_541e48, 1))
    {
        uu_od::parse_inputs::parse_inputs_traditional::h2788ba0cc89acb8c(a0, *((long long *)&v1), *((long long *)&v2));
        ::0x4d29f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h74e9455f611cd62b(&v0);
        return a0;
    }
    v9 = *((long long *)&v2);
    if (v9 - 1 < 2 && (v9 = *((long long *)&v2), !(char)(unsigned long long)v8(a1, &g_541e58, 6)))
    {
        v10 = v9 - 1;
        if (v9 < 1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v10, 0, &g_541eb8); /* do not return */
        v11 = *((long long *)&v1);
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v5, v11[2 * v10], v11[1 + 2 * v10]);
        v9 = *((long long *)&v2);
        if (!*((long long *)&v5))
        {
            v12 = *((long long *)&v6);
            if (v9 != 1)
            {
LABEL_4d2d88:
                if (!(v9 == 2))
                    goto LABEL_4d2cca;
                v16 = *((long long *)&v1);
                ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v3, v16[0], v16[1]);
            }
            else
            {
                v13 = *((long long *)&v1);
                v3 = 0;
                if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v13[0], v13[1], ::0x4d2a80::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v3), 1))
                {
                    v9 = *((long long *)&v2);
                    goto LABEL_4d2d88;
                }
                else
                {
                    ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v3, "-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
                }
            }
            a0->field_10 = *((long long *)&v4);
            a0->field_0 = *((int128_t *)&v3);
            a0->field_18 = v12;
            a0->field_20 = 0;
            ::0x4d29f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h74e9455f611cd62b(&v0);
            return a0;
        }
    }
LABEL_4d2cca:
    if (!v9)
        alloc::vec::Vec$LT$T$C$A$GT$::push::hef5220248dbc45bb(&v0);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hff0e80f7eaa39b66(&v3, *((long long *)&v1), *((long long *)&v2) * 16 + *((long long *)&v1));
    a0->field_10 = *((long long *)&v4);
    a0->field_0 = *((int128_t *)&v3);
    a0->field_20 = 2;
    ::0x4d29f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h74e9455f611cd62b(&v0);
    return a0;
}
