long long uu_pr::write_columns::h4b27546e3d45b76a(unsigned long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    char v0;  // [sp-0x1e9]
    unsigned long long v1;  // [sp-0x1e8]
    unsigned long long v2;  // [sp-0x1d8]
    unsigned long long v3;  // [sp-0x1c0]
    unsigned long long v4;  // [sp-0x1b8]
    char v5;  // [bp-0x1a8]
    char v7;  // [bp-0x1a0]
    char v10;  // [bp-0x198]
    unsigned int v11;  // [sp-0x18c]
    int v12;  // [sp-0x188]
    unsigned long long v13;  // [sp-0x178]
    char v14;  // [bp-0x170]
    char v15;  // [bp-0x160]
    unsigned long long v16;  // [sp-0x158]
    unsigned long long v17;  // [sp-0x150]
    void* v18;  // [sp-0x148]
    unsigned long long v19;  // [sp-0x140]
    void* v20;  // [sp-0x138]
    unsigned long long v21;  // [sp-0x130]
    unsigned long long v22;  // [sp-0x128]
    void* v23;  // [sp-0x120]
    unsigned long long v24;  // [sp-0x118]
    unsigned long long v25;  // [sp-0x110]
    void* v26;  // [sp-0x108], Other Possible Types: unsigned long
    unsigned long long v27;  // [sp-0x100]
    void* v28;  // [sp-0xf8]
    int v29;  // [sp-0xf0]
    int v30;  // [sp-0xe0]
    void* v31;  // [sp-0xd0]
    char v32;  // [bp-0xc8]
    unsigned long v33;  // [sp-0xa8]
    unsigned long long v34;  // [sp-0xa0]
    unsigned long long v35;  // [sp-0x98]
    unsigned long long v36;  // [sp-0x90]
    unsigned long long v37;  // [sp-0x88]
    struct_0 *v38;  // [sp-0x80]
    unsigned long long v39;  // [sp-0x78]
    unsigned long long v40;  // [sp-0x70]
    char v41;  // [sp-0x68]
    void* v42;  // [sp-0x60]
    unsigned long long v43;  // [sp-0x58]
    char v44;  // [bp-0x48]
    unsigned long long v46;  // rdi
    unsigned long long v47;  // rbx
    unsigned long long v48;  // rax
    unsigned int v49;  // ecx
    void* v50;  // r13
    void* v51;  // r15
    unsigned long long v52;  // rax
    unsigned long long v53;  // r12
    struct_1 *v54;  // rax
    void* v55;  // r13
    int v56;  // ymm0
    int v57;  // ymm0
    void* v58;  // r14
    void* v59;  // r14
    int v60;  // xmm0
    int v64;  // xmm0
    unsigned long long v65;  // rax
    unsigned long long *v66;  // rdx
    unsigned long long v67;  // rdx

    v46 = a2->field_10;
    v47 = a2->field_138 >> (a2->field_140 & 63);
    if (v46)
    {
        v1 = a2->field_18;
        v48 = a2->field_100;
    }
    else
    {
        v48 = a2->field_100;
        v1 = 1;
        if (v48 != 0x8000000000000000)
            v1 = a2->field_120;
    }
    v49 = 0;
    if (v48 != 0x8000000000000000)
        v49 = a2->field_128;
    v11 = v49;
    v17 = a2->field_68;
    v16 = a2->field_70;
    v4 = a2->field_20;
    v3 = a2->field_28;
    v0 = a2->field_142;
    v18 = 0;
    v19 = 8;
    v20 = 0;
    v24 = v46;
    if (v46 && v1)
    {
        v25 = a1 * 64 + a0;
        v50 = 0;
        v51 = 0;
        do
        {
            v52 = ::0x5bf400::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v51);
            if (v50 > a1)
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v50, a1, &g_709548); /* do not return */
            v53 = v52;
            v2 = v50;
            v26 = v50 * 64 + a0;
            v27 = v25;
            v54 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a2e58434e90c9b0(&v26);
            v55 = 0;
            if (v54)
            {
                while (v54->field_18 == v51)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h131fd66e07e1516e(&v18, v54);
                    v55 += 1;
                    v54 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a2e58434e90c9b0(&v26);
                    if (!v54)
                        break;
                }
            }
            v2 += v55;
            while (v55 < v47)
            {
                v55 = ::0x5bf400::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v55);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h131fd66e07e1516e(&v18, 0);
            }
            v51 = v53;
            v50 = v2;
        } while (v53 < v1);
    }
    v35 = v20;
    v33 = v18;
    v34 = v19;
    v42 = 0;
    v43 = v47;
    v36 = a0;
    v37 = a1;
    v38 = a2;
    v39 = v1;
    v40 = v47;
    v41 = v11;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h13c086e7e35183b3(&v44, &v33);
    v26 = 0;
    v57 = v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((uint128_t *)&v29) = 0;
    *((uint128_t *)&v30) = 0;
    v27 = 1;
    v28 = 0;
    v31 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::heff5ad2e73d336ad(&v32, &v44);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&v14, &v32);
    if (*((long long *)&v14) == 0x8000000000000000)
    {
        goto LABEL_5c7e00;
    }
    else if (!v24)
    {
        v59 = 0;
        v2 = 0;
    }
    else
    {
        v58 = 0;
        v60 = *((int128_t *)&v14);
        v57 = v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
        v12 = v60;
        v13 = *((long long *)&v15);
        v21 = (long long)(&v12)[8];
        v22 = v21 + v13 * 8;
        v23 = 0;
        continue;
    }
    while (true)
    {
        v64 = *((int128_t *)&v14);
        v57 = v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
        v12 = v64;
        v13 = *((long long *)&v15);
        v21 = (long long)(&v12)[8];
        v22 = v21 + v13 * 8;
        v23 = 0;
        while (true)
        {
            v65 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc73c14a389155679(&v21);
            if (!v66)
            {
                if (v0 && ((char)v2 & 1))
                    goto LABEL_5c8167;
                goto LABEL_5c80b7;
            }
            v67 = *(v66);
            if (!v67)
                break;
            uu_pr::get_line_for_printing::h8a9c61ca270edd26(&v5, a2, v67, v1, v65, v4, v3, v13);
            if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a3, *((long long *)&v7), *((long long *)&v10)))
            {
                ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v5);
LABEL_5c8129:
                ::0x5c11a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&v12);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::hf9ce9c54c65d9cf1(&v32);
                ::0x5bfbc0::core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::h27cde15571da4c08(&v26);
                return 1;
            }
            ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v5);
            v59 += 1;
        }
        v2 = v65 & 0xffffffffffffff00 | 1;
        if (v0)
        {
LABEL_5c8167:
            ::0x5c11a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&v12);
LABEL_5c7e00:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::hf9ce9c54c65d9cf1(&v32);
            ::0x5bfbc0::core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::h27cde15571da4c08(&v26);
            return 0;
        }
LABEL_5c80b7:
        if (!(!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a3, v17, v16)))
            goto LABEL_5c8129;
        ::0x5c11a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&v12);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&v14, &v32);
        if (*((long long *)&v14) == 0x8000000000000000)
            goto LABEL_5c7e00;
    }
}
