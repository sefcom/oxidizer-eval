long long uu_od::parse_inputs::parse_inputs_traditional::h2788ba0cc89acb8c(struct_1 *a0, unsigned long long a1[6], unsigned long a2)
{
    unsigned long long v0;  // [sp-0xa8]
    int v1;  // [bp-0xa8], Other Possible Types: char, unsigned long
    unsigned long long v2[6];  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x98]
    unsigned long v4;  // [bp-0x90], Other Possible Types: char
    unsigned long long v5;  // [sp-0x88]
    char *v6;  // [sp-0x80], Other Possible Types: unsigned long
    unsigned long long v7;  // [sp-0x78]
    void* v8;  // [sp-0x70]
    char v9;  // [bp-0x60]
    char v10;  // [bp-0x58]
    char v11;  // [bp-0x50]
    char v12;  // [bp-0x48]
    char v13;  // [bp-0x40]
    char v14;  // [bp-0x38]
    char v15;  // [bp-0x30]
    char v16;  // [bp-0x28]
    unsigned long long v18[6];  // r14
    unsigned long long v19;  // rax
    struct_0 *v20;  // rax
    unsigned long long v21;  // r15
    unsigned long long v22;  // r12
    struct_0 *v23;  // r14
    unsigned long long v24;  // rax
    int v25;  // xmm0
    unsigned long long v26;  // rax
    unsigned long long v28;  // r15
    unsigned long long v31;  // r12

    v18 = a1;
    switch (a2)
    {
    case 0:
        v20 = ::0x4d2b90::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (v20)
        {
            v23 = v20;
            ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v4, "-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
            v3 = v6;
            v25 = *((int128_t *)&v4);
            v1 = v25;
            v23->field_10 = v3;
            *((void*)&v23->field_0) = v25;
            v26 = alloc::slice::hack::into_vec::h371cf1993c745829(a0, v23, 1);
            a0->field_20 = 2;
            return v26;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
    case 1:
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v1, a1[0], a1[1]);
        if (!v1)
        {
            v18 = v2;
            ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v4, "-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
            v26 = 0;
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h20a08bdd9390469f(&v4, a1, &a1[2]);
            v26 = 2;
        }
        a0->field_10 = v6;
        a0->field_0 = *((int128_t *)&v4);
        a0->field_18 = v18;
        a0->field_20 = v26;
        return v26;
    case 2:
        v21 = a1[0];
        v22 = a1[1];
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v11, v21, v22);
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v9, a1[2], a1[3]);
        v24 = *((long long *)&v9);
        if (!*((long long *)&v11) && !v24)
        {
            v28 = *((long long *)&v10);
            v26 = ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(a0, "-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
            a0->field_18 = *((long long *)&v12);
            a0->field_20 = 1;
            a0->field_28 = v28;
            return v26;
        }
        else if (!v24)
        {
            v26 = ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(a0, v21, v22);
            a0->field_18 = *((long long *)&v10);
            a0->field_20 = 0;
            return v26;
        }
LABEL_4d2fb0:
        v0 = &a1[2];
        v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        v19 = &g_541ed0;
        break;
    case 3:
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v13, a1[2], a1[3]);
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v15, a1[4], a1[5]);
        if (!(!*((long long *)&v13)))
            goto LABEL_4d2fb0;
        if (!*((long long *)&v15))
        {
            v31 = *((long long *)&v16);
            v26 = ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(a0, a1[0], a1[1]);
            a0->field_18 = *((long long *)&v14);
            a0->field_20 = 1;
            a0->field_28 = v31;
            return v26;
        }
        v0 = &a1[4];
        v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        v19 = &g_541ee0;
        break;
    default:
        v0 = a1 + 1;
        v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        v19 = &g_541ef0;
        break;
    }
    v4 = v19;
    v5 = 1;
    v8 = 0;
    v6 = &v1;
    v7 = 1;
    v26 = ::0x4d2a90::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(a0, &v4);
    a0->field_20 = 3;
    return v26;
}
