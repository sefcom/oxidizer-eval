long long uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::ha32981d3360f251e(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [sp-0xa8]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    char v3;  // [bp-0x80]
    unsigned long v4;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x70]
    unsigned long long v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x60]
    char v8;  // [bp-0x58]
    unsigned long long v10;  // r13
    unsigned long long v11[12];  // r12
    unsigned long long v12;  // r14
    unsigned long long v15;  // r13
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rbp
    unsigned long long v19;  // rdx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rbx
    struct_0 *v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // r15
    void* v26;  // r15
    unsigned long long v27;  // rax
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rdx

    v10 = a1->field_10;
    v0 = a1->field_20;
    if (v10 < v0)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    v11 = a1->field_18;
    v12 = a1->field_8;
    v16 = v15;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h07fe518204574d06(v12, v16, v11[10], v16, &g_5004a8);
    v17 = &v11[9];
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h6e158952f4d05766(&v8, v17, v16);
    _$LT$alloc..vec..drain..Drain$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcfac84dc6e298f2e(&v8);
    v22 = v21;
    if (_$LT$uu_od..partialreader..PartialReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h0725fa53ea6f7a6e(v11, v12 + v16, v10 - v16))
    {
        v23 = a0;
        v23->field_0 = v19;
    }
    else
    {
        v24 = v10 - v22;
        v25 = v0;
        v26 = v25 - v24;
        if (v25 <= v24)
        {
            v26 = 0;
        }
        else
        {
            v27 = v22;
            v0 = v27 - v26;
            if (v27 < v26)
                core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
            if (v10 < v22)
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            alloc::vec::Vec$LT$T$C$A$GT$::drain::h993b33a6d9d86611(&v8, v17, v19);
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h2ac1c6a18ac1bdc5(&v1, &v8);
            v28 = v11[11];
            if (v11[9] - v28 < v26)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h5b8f663d4d0bd1a0(v17, v28, v26);
                v28 = v11[11];
            }
            memcpy(v28 + v11[10], v12 + v0, v26);
            v11[11] = v11[11] + v26;
            v29 = *((long long *)&v2);
            v30 = *((long long *)&v3);
            v4 = v29;
            v6 = *((long long *)&v1);
            v5 = v29;
            v7 = v30 + v29;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hf27110cd22f7532c(v17, &v4, v30 + v29);
        }
        v23 = a0;
        a1->field_28 = v22;
        a1->field_30 = v26;
        v23->field_0 = a1;
        v23->field_8 = v22;
        v23->field_10 = v26;
    }
    v23->field_18 = 3;
    return v23;
}
