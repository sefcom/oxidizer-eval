long long uu_pr::write_columns::h4b27546e3d45b76a(unsigned long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    char v0;  // [sp-0x1e9]
    unsigned long long v1;  // [sp-0x1e8]
    unsigned long long v2;  // [sp-0x1d8]
    unsigned long long v3;  // [sp-0x1c0]
    unsigned long long v4;  // [sp-0x1b8]
    char v5;  // [bp-0x1a8]
    char v6;  // [bp-0x1a0]
    char v7;  // [bp-0x198]
    unsigned int v8;  // [sp-0x18c]
    int v9;  // [sp-0x188]
    unsigned long long v10;  // [sp-0x178]
    char v11;  // [bp-0x170]
    char v12;  // [bp-0x160]
    unsigned long long v13;  // [sp-0x158]
    unsigned long long v14;  // [sp-0x150]
    void* v15;  // [sp-0x148]
    unsigned long long v16;  // [sp-0x140]
    void* v17;  // [sp-0x138]
    unsigned long long v18;  // [sp-0x130]
    unsigned long long v19;  // [sp-0x128]
    void* v20;  // [sp-0x120]
    unsigned long long v21;  // [sp-0x118]
    unsigned long long v22;  // [sp-0x110]
    void* v23;  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v24;  // [sp-0x100]
    void* v25;  // [sp-0xf8]
    int v26;  // [sp-0xf0]
    int v27;  // [sp-0xe0]
    void* v28;  // [sp-0xd0]
    char v29;  // [bp-0xc8]
    unsigned long v30;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0xa0]
    unsigned long long v32;  // [sp-0x98]
    unsigned long long v33;  // [sp-0x90]
    unsigned long long v34;  // [sp-0x88]
    struct_0 *v35;  // [sp-0x80]
    unsigned long long v36;  // [sp-0x78]
    unsigned long long v37;  // [sp-0x70]
    char v38;  // [sp-0x68]
    void* v39;  // [sp-0x60]
    unsigned long long v40;  // [sp-0x58]
    char v41;  // [bp-0x48]
    unsigned long long v43;  // rdi
    unsigned long long v44;  // rbx
    unsigned long long v45;  // rax
    unsigned int v46;  // ecx
    void* v47;  // r13
    void* v48;  // r15
    unsigned long long v49;  // r15
    unsigned long long v51;  // r12
    struct_1 *v52;  // rax
    void* v53;  // r13
    int v54;  // ymm0
    int v55;  // ymm0
    void* v56;  // r14
    void* v57;  // r14
    int v58;  // xmm0
    int v62;  // xmm0
    unsigned long long v63;  // rax
    unsigned long long *v64;  // rdx
    unsigned long long v65;  // rdx

    v43 = a2->field_10;
    v44 = a2->field_138 >> (a2->field_140 & 63);
    if (v43)
    {
        v1 = a2->field_18;
        v45 = a2->field_100;
    }
    else
    {
        v45 = a2->field_100;
        v1 = 1;
        if (v45 != 0x8000000000000000)
            v1 = a2->field_120;
    }
    v46 = 0;
    if (v45 != 0x8000000000000000)
        v46 = a2->field_128;
    v8 = v46;
    v14 = a2->field_68;
    v13 = a2->field_70;
    v4 = a2->field_20;
    v3 = a2->field_28;
    v0 = a2->field_142;
    v15 = 0;
    v16 = 8;
    v17 = 0;
    v21 = v43;
    if (v43 && v1)
    {
        v22 = a1 * 64 + a0;
        v47 = 0;
        v48 = 0;
        do
        {
            v49 = v48;
            if (v47 > a1)
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v47, a1, &g_709548); /* do not return */
            v51 = ::0x5bf400::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v49);
            v2 = v47;
            v23 = v47 * 64 + a0;
            v24 = v22;
            v52 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a2e58434e90c9b0(&v23);
            v53 = 0;
            if (v52)
            {
                while (v52->field_18 == v49)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h131fd66e07e1516e(&v15, v52);
                    v53 += 1;
                    v52 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a2e58434e90c9b0(&v23);
                    if (!v52)
                        break;
                }
            }
            v47 = v2 + v53;
            while (v53 < v44)
            {
                v53 = ::0x5bf400::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v53);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h131fd66e07e1516e(&v15, 0);
            }
            v48 = v51;
        } while (v51 < v1);
    }
    v32 = v17;
    v30 = v15;
    v31 = v16;
    v39 = 0;
    v40 = v44;
    v33 = a0;
    v34 = a1;
    v35 = a2;
    v36 = v1;
    v37 = v44;
    v38 = v8;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h13c086e7e35183b3(&v41, &v30);
    v23 = 0;
    v55 = v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((uint128_t *)&v26) = 0;
    *((uint128_t *)&v27) = 0;
    v24 = 1;
    v25 = 0;
    v28 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::heff5ad2e73d336ad(&v29, &v41);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&v11, &v29);
    if (*((long long *)&v11) == 0x8000000000000000)
    {
        goto LABEL_5c7e00;
    }
    else if (!v21)
    {
        v57 = 0;
        v2 = 0;
    }
    else
    {
        v56 = 0;
        v58 = *((int128_t *)&v11);
        v55 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
        v9 = v58;
        v10 = *((long long *)&v12);
        v18 = (long long)(&v9)[8];
        v19 = v18 + v10 * 8;
        v20 = 0;
        continue;
    }
    while (true)
    {
        v62 = *((int128_t *)&v11);
        v55 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v9 = v62;
        v10 = *((long long *)&v12);
        v18 = (long long)(&v9)[8];
        v19 = v18 + v10 * 8;
        v20 = 0;
        while (true)
        {
            v63 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc73c14a389155679(&v18);
            if (!v64)
            {
                if (v0 && ((char)v2 & 1))
                    goto LABEL_5c8167;
                goto LABEL_5c80b7;
            }
            v65 = *(v64);
            if (!v65)
                break;
            uu_pr::get_line_for_printing::h8a9c61ca270edd26(&v5, a2, v65, v1, v63, v4, v3, v10);
            if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a3, *((long long *)&v6), *((long long *)&v7)))
            {
                ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v5);
LABEL_5c8129:
                ::0x5c11a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&v9);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::hf9ce9c54c65d9cf1(&v29);
                ::0x5bfbc0::core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::h27cde15571da4c08(&v23);
                return 1;
            }
            ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v5);
            v57 += 1;
        }
        v2 = v63 & 0xffffffffffffff00 | 1;
        if (v0)
        {
LABEL_5c8167:
            ::0x5c11a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&v9);
LABEL_5c7e00:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::hf9ce9c54c65d9cf1(&v29);
            ::0x5bfbc0::core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::h27cde15571da4c08(&v23);
            return 0;
        }
LABEL_5c80b7:
        if (v0 && ((char)v2 & 1))
            goto LABEL_5c8129;
        ::0x5c11a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&v9);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&v11, &v29);
        if (*((long long *)&v11) == 0x8000000000000000)
            goto LABEL_5c7e00;
    }
}
