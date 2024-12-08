long long uu_pr::write_columns::h97244cfd8f4acd65(unsigned long a0, unsigned long a1, struct_1 *a2, unsigned long long a3)
{
    char v0;  // [sp-0x1f1]
    unsigned long long v1;  // [sp-0x1f0]
    void* v2;  // [sp-0x1e0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x1d8]
    unsigned long long v4;  // [sp-0x1d0]
    char v5;  // [bp-0x1b8]
    char v6;  // [bp-0x1b0]
    char v7;  // [bp-0x1a8]
    unsigned int v8;  // [sp-0x19c]
    int v9;  // [sp-0x198]
    unsigned long long v10;  // [sp-0x188]
    void* v11;  // [sp-0x178]
    unsigned long long v12;  // [sp-0x170]
    void* v13;  // [sp-0x168]
    char v14;  // [bp-0x160]
    char v15;  // [bp-0x150]
    unsigned long long v16;  // [sp-0x148]
    unsigned long long v17;  // [sp-0x140]
    unsigned long long v18;  // [sp-0x138]
    unsigned long long v19;  // [sp-0x130]
    void* v20;  // [sp-0x128]
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
    struct_1 *v35;  // [sp-0x80]
    unsigned long long v36;  // [sp-0x78]
    unsigned long long v37;  // [sp-0x70]
    char v38;  // [sp-0x68]
    void* v39;  // [sp-0x60]
    unsigned long long v40;  // [sp-0x58]
    char v41;  // [bp-0x48]
    unsigned long long v43;  // r12
    unsigned long long v44;  // rbx
    void* v45;  // rcx
    void* v46;  // r12
    unsigned long long v48;  // r13
    unsigned long long v50;  // r15
    struct_0 *v51;  // rax
    void* v52;  // r12
    int v53;  // ymm0
    int v54;  // ymm0
    void* v55;  // r14
    int v56;  // xmm0
    int v60;  // xmm0
    unsigned long long v61;  // rax
    unsigned long long *v62;  // rdx
    unsigned long long v63;  // rdx

    v43 = a2->field_10;
    v17 = a2->field_68;
    v16 = a2->field_70;
    v44 = a2->field_138 >> (a2->field_140 & 63);
    if (!v43)
    {
        if (a2->field_100 == 0x8000000000000000)
        {
            v45 = 0;
            v1 = 1;
        }
        else
        {
            v1 = a2->field_120;
            v45 = a2->field_128;
        }
        v4 = a2->field_20;
        v3 = a2->field_28;
        v0 = a2->field_142;
        v11 = 0;
        v12 = 8;
        v13 = 0;
    }
    else
    {
        v1 = a2->field_18;
        v45 = 0;
        if (a2->field_100 != 0x8000000000000000)
            v45 = a2->field_128;
        v4 = a2->field_20;
        v3 = a2->field_28;
        v0 = a2->field_142;
        v11 = 0;
        v12 = 8;
        v13 = 0;
        if (!v1)
        {
            v1 = 0;
        }
        else
        {
            v8 = (unsigned int)v45;
            v43 = v43;
            v22 = a1 * 64 + a0;
            v46 = 0;
            do
            {
                v48 = 0;
                if (v46 > a1)
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                v50 = ::0x5be880::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v48);
                v2 = v46;
                v23 = v46 * 64 + a0;
                v24 = v22;
                v51 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf04310ca65db695(&v23);
                v52 = 0;
                if (v51)
                {
                    while (v51->field_18 == v48)
                    {
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h191408ec08d3903c(&v11, v51);
                        v52 += 1;
                        v51 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf04310ca65db695(&v23);
                        if (!v51)
                            break;
                    }
                }
                v46 = v2 + v52;
                while (v52 < v44)
                {
                    v52 = ::0x5be880::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v52);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h191408ec08d3903c(&v11, 0);
                }
            } while (v50 < v1);
            v45 = v8;
        }
    }
    v32 = v13;
    v30 = v11;
    v31 = v12;
    v39 = 0;
    v40 = v44;
    v33 = a0;
    v34 = a1;
    v35 = a2;
    v36 = v1;
    v37 = v44;
    v38 = (char)v45;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h2d3338cfcc1cce96(&v41, &v30);
    v23 = 0;
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((int128_t *)&v26) = 0;
    *((int128_t *)&v27) = 0;
    v24 = 1;
    v25 = 0;
    v28 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha3695f280b07fab5(&v29, &v41);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h01ec2769f4c604e9(&v14, &v29);
    if (*((long long *)&v14) == 0x8000000000000000)
    {
        goto LABEL_5c72d2;
    }
    else
    {
        v55 = 0;
        if (!v43)
        {
            v2 = 0;
        }
        else
        {
            v56 = *((int128_t *)&v14);
            v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
            v9 = v56;
            v10 = *((long long *)&v15);
            v18 = (long long)(&v9)[8];
            v19 = v18 + v10 * 8;
            v20 = 0;
            continue;
        }
    }
    while (true)
    {
        v60 = *((int128_t *)&v14);
        v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
        v9 = v60;
        v10 = *((long long *)&v15);
        v18 = (long long)(&v9)[8];
        v19 = v18 + v10 * 8;
        v20 = 0;
        while (true)
        {
            v61 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h044e9092fae38e2e(&v18);
            if (!v62)
            {
                if (v0 && ((char)v2 & 1))
                    goto LABEL_5c761a;
                goto LABEL_5c7567;
            }
            v63 = *(v62);
            if (!v63)
                break;
            uu_pr::get_line_for_printing::hb3d52bb8370ed6ee(&v5, v35, v63, v1, v61, v4, v3, v10);
            if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a3, *((long long *)&v6), *((long long *)&v7)))
            {
                ::0x5bf160::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hed0b916b044e1f09(&v5);
LABEL_5c75dc:
                ::0x5c0620::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::h13be4b7efd645861(&v9);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::h519bf653b71f0b2d(&v29);
                ::0x5bf040::core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::hbf2c894ea612db0a(&v23);
                return 1;
            }
            ::0x5bf160::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hed0b916b044e1f09(&v5);
            v55 += 1;
        }
        v2 = v61 | -0x100 | 1;
        if (v0)
        {
LABEL_5c761a:
            ::0x5c0620::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::h13be4b7efd645861(&v9);
LABEL_5c72d2:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::h519bf653b71f0b2d(&v29);
            ::0x5bf040::core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::hbf2c894ea612db0a(&v23);
            return 0;
        }
LABEL_5c7567:
        if (v0 && ((char)v2 & 1))
            goto LABEL_5c75dc;
        ::0x5c0620::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::h13be4b7efd645861(&v9);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h01ec2769f4c604e9(&v14, &v29);
        if (*((long long *)&v14) == 0x8000000000000000)
            goto LABEL_5c72d2;
    }
}
