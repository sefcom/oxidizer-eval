long long uu_od::parse_inputs::parse_inputs_traditional::h2788ba0cc89acb8c(struct_1 *a0, unsigned long long a1[6], unsigned long a2)
{
    int v0;  // [sp-0xa8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v1[6];  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x98]
    char v3;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x88]
    char *v5;  // [sp-0x80], Other Possible Types: unsigned long
    unsigned long long v6;  // [sp-0x78]
    void* v7;  // [sp-0x70]
    char v8;  // [bp-0x60]
    char v9;  // [bp-0x58]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x38]
    char v14;  // [bp-0x30]
    char v15;  // [bp-0x28]
    unsigned long long v17;  // rax
    struct_0 *v18;  // rax
    unsigned long long v19;  // r15
    unsigned long long v20;  // r12
    struct_0 *v21;  // r14
    unsigned long long v22;  // rax
    int v23;  // xmm0
    unsigned long long v24;  // rax
    unsigned long long v26;  // r15
    unsigned long long v27[6];  // 4096
    unsigned long long v30;  // r12

    switch (a2)
    {
    case 0:
        v18 = ::0x4d2b90::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (v18)
        {
            v21 = v18;
            ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v3, "-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
            v2 = v5;
            v23 = *((int128_t *)&v3);
            v0 = v23;
            v21->field_10 = v2;
            *((void*)&v21->field_0) = v23;
            v24 = alloc::slice::hack::into_vec::h371cf1993c745829(a0, v21, 1);
            a0->field_20 = 2;
            return v24;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
    case 1:
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v0, a1[0], a1[1]);
        if (!v0)
        {
            ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v3, "-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
            v24 = 0;
            v27[0] = v1;
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h20a08bdd9390469f(&v3, a1, &a1[2]);
            v24 = 2;
        }
        a0->field_10 = v5;
        a0->field_0 = *((int128_t *)&v3);
        a0->field_18 = v27;
        a0->field_20 = v24;
        return v24;
    case 2:
        v19 = a1[0];
        v20 = a1[1];
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v10, v19, v20);
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v8, a1[2], a1[3]);
        v22 = *((long long *)&v8);
        if (!*((long long *)&v10) && !v22)
        {
            v26 = *((long long *)&v9);
            v24 = ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(a0, "-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
            a0->field_18 = *((long long *)&v11);
            a0->field_20 = 1;
            a0->field_28 = v26;
            return v24;
        }
        else if (!v22)
        {
            v24 = ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(a0, v19, v20);
            a0->field_18 = *((long long *)&v9);
            a0->field_20 = 0;
            return v24;
        }
LABEL_4d2fb0:
        v0 = &a1[2];
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        v17 = &g_541ed0;
        break;
    case 3:
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v12, a1[2], a1[3]);
        uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&v14, a1[4], a1[5]);
        if (!(!*((long long *)&v12)))
            goto LABEL_4d2fb0;
        if (!*((long long *)&v14))
        {
            v30 = *((long long *)&v15);
            v24 = ::0x4d2aa0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(a0, a1[0], a1[1]);
            a0->field_18 = *((long long *)&v13);
            a0->field_20 = 1;
            a0->field_28 = v30;
            return v24;
        }
        v0 = &a1[4];
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        v17 = &g_541ee0;
        break;
    default:
        v0 = a1 + 1;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        v17 = &g_541ef0;
        break;
    }
    v3 = v17;
    v4 = 1;
    v7 = 0;
    v5 = &v0;
    v6 = 1;
    v24 = ::0x4d2a90::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf();
    a0->field_20 = 3;
    return v24;
}
