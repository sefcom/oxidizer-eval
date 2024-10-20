int uu_base32::base_common::fast_encode::fast_encode::h27ebdf91cdaaf347()
{
    unsigned long v0;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xf8]
    void* v2;  // [sp-0xf0]
    unsigned long long v3;  // [sp-0xe8]
    void* v4;  // [sp-0xe0]
    unsigned long long v5;  // [sp-0xd8]
    int v6;  // [sp-0xd0]
    unsigned long v7;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0xb8]
    unsigned long long v9;  // [sp-0xb0]
    void* v10;  // [sp-0xa8]
    unsigned long long v11;  // [sp-0xa0]
    int v12;  // [sp-0x98]
    unsigned long long v13;  // [sp-0x88]
    unsigned long v14;  // [sp-0x70], Other Possible Types: unsigned long long
    char v15;  // [bp-0x68]
    char v16;  // [bp-0x60]
    char v17;  // [bp-0x58]
    unsigned long v19;  // rsi
    unsigned long long v20;  // rdx
    struct struct_0 *v21[7];  // rcx
    unsigned long long v22;  // r12
    unsigned long long v23;  // r12
    unsigned long v24;  // cc_ndep
    unsigned long v25;  // r8
    unsigned long v26;  // r9
    struct_2 *v28;  // rdi
    struct struct_0 **v30;  // r14
    unsigned long long v31;  // r8
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax

    v14 = v19;
    v22 = v21[6](v20);
    v23 = v22 * 0x400;
    if ((char)amd64g_calculate_condition(4, 32, v22 << 10, v22 << 9, v24))
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    if (!v25)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3 = 76;
    }
    else if (!v26)
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3 = v26;
    }
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h3fa0b55ea5605292(&v15, 0x8000, 1);
    if (*((long long *)&v15))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v7 = *((long long *)&v16);
    v8 = *((long long *)&v17);
    v9 = 0x8000;
    v4 = 0;
    *((int128_t *)&v6) = 0;
    v5 = 1;
    v10 = 0;
    *((int128_t *)&v12) = 0;
    v11 = 1;
    v30 = v28->field_8->field_18;
    v13 = &g_4fee08;
    while (true)
    {
        if (v30(v28->field_0))
            goto *((int *)(4265856 + (vvar_153{reg 32} & 3) * 4)) + 4265856;
        if (!vvar_153{reg 32})
        {
            if (!(!v21[5](v20, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hd6846fbf546bfbc5(&v4), v20, &v10)))
                goto LABEL_440f4b;
            v34 = uu_base32::base_common::fast_encode::write_to_output::h20994dcbe40e5905(&v0, &v10, &v14, &g_4feda0, 1);
            if (v34)
            {
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v34);
            }
            else
            {
                _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h16cbb423b71952cc(&v10);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v10);
                _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h16cbb423b71952cc(&v4);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v4);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v7);
                if (v0 != 0x8000000000000000)
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v0);
                break;
            }
            goto LABEL_440f48;
        }
        if (v9 < vvar_153{reg 32})
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        v31 = v8;
        if (v23 - (long long)(&v6)[8] > vvar_153{reg 32})
        {
            _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h5a97bf542ba3a8f5(&v4, v31, vvar_153{reg 32} + v31);
            if ((long long)(&v6)[8] >= v23)
            {
                v13 = &g_4fee20;
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            }
            goto LABEL_440de0;
        }
        if (uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::ha1c54ac1b921b21a(v20, v21, v23, v23 - (long long)(&v6)[8], v31, vvar_153{reg 32}, &v10, &v4))
        {
LABEL_440f4b:
            _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h16cbb423b71952cc(&v10);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v10);
            _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h16cbb423b71952cc(&v4);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v4);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v7);
            if (v0 != 0x8000000000000000)
            {
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v0);
                break;
            }
        }
        else
        {
            if ((long long)(&v6)[8] >= v23)
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            v33 = uu_base32::base_common::fast_encode::write_to_output::h20994dcbe40e5905(&v0, &v10, &v14, &g_4feda0, 0);
            if (!v33)
            {
LABEL_440de0:
            }
            else
            {
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v33);
LABEL_440f48:
                goto LABEL_440f4b;
            }
        }
    }
    return;
}
