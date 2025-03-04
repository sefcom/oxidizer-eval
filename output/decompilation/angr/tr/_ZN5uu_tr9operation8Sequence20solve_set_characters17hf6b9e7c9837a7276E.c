long long uu_tr::operation::Sequence::solve_set_characters::hf6b9e7c9837a7276(unsigned long long a0[6], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    int v0;  // [bp-0x228], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x220]
    void* v2;  // [sp-0x218], Other Possible Types: unsigned long long
    int v3;  // [sp-0x208]
    unsigned long long v4;  // [sp-0x1f8]
    char v5;  // [bp-0x1e8], Other Possible Types: unsigned long
    int v6;  // [sp-0x1e8], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [sp-0x1e0], Other Possible Types: unsigned long long
    void* v8;  // [sp-0x1d8], Other Possible Types: unsigned long long, unsigned long
    int v9;  // [bp-0x1d0], Other Possible Types: char
    unsigned long long v10;  // [sp-0x1c0]
    int v11;  // [sp-0x1b8]
    unsigned long long v12;  // [sp-0x1a8]
    int v13;  // [bp-0x198], Other Possible Types: char
    unsigned long long v14;  // [sp-0x188]
    char v15;  // [bp-0x180]
    char v16;  // [bp-0x170]
    unsigned long long v17;  // [sp-0x168]
    char *v18;  // [sp-0x160]
    unsigned short v19;  // [sp-0x158]
    char v20;  // [sp-0x156]
    unsigned long v21;  // [sp-0x150]
    unsigned long long v22;  // [sp-0x148]
    unsigned long long v23;  // [sp-0x140]
    char *v24;  // [sp-0x138]
    void* v25;  // [sp-0x130]
    void* v26;  // [sp-0x120]
    unsigned long long v27;  // [sp-0x110]
    unsigned long long v28;  // [sp-0x108]
    unsigned long long v29;  // [sp-0x100]
    void* v30;  // [sp-0xf8]
    void* v31;  // [sp-0xe8]
    unsigned long long v32;  // [sp-0xd8]
    unsigned long long v33;  // [sp-0xd0]
    unsigned long long v34;  // [sp-0xc8]
    unsigned long long v35;  // [sp-0xc0]
    unsigned long long v36;  // [sp-0xb8]
    void* v37;  // [sp-0xb0]
    void* v38;  // [sp-0xa0]
    unsigned long v39;  // [sp-0x90]
    unsigned long long v40;  // [sp-0x88]
    void* v41;  // [sp-0x80]
    void* v42;  // [sp-0x70]
    unsigned long long v43;  // [sp-0x60]
    unsigned long long v44;  // [sp-0x58]
    void* v45;  // [sp-0x50]
    void* v46;  // [sp-0x40]
    unsigned long v47;  // [bp+0x8]
    char v48;  // [bp+0x10]
    unsigned long long v49;  // 4098
    unsigned long long v50;  // 4098
    unsigned long long v51;  // r15
    unsigned long long v52;  // r14
    unsigned long long v53;  // rcx
    unsigned long long v54;  // r12
    unsigned long long v55;  // r13
    unsigned long long v56;  // rax
    unsigned long long v57;  // rcx
    unsigned long long v58;  // r14
    unsigned long long v59;  // r15
    unsigned long long v60;  // rax
    char *v61;  // rdx
    char *v62;  // rdx
    void* v63;  // r12
    unsigned long long v64;  // rax
    void* v65;  // rax
    unsigned long long v66;  // rcx
    unsigned long long v67;  // rsi
    char v68;  // al
    unsigned long long v69;  // rcx
    unsigned long long v70;  // rdx
    unsigned long long v71;  // rcx
    int v73;  // xmm0

    uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(&v5, a1, a2);
    v49 = v6;
    *((int128_t *)&v0) = *((int128_t *)&v7);
    v2 = *((long long *)&v9);
    if (v49)
    {
        a0[3] = v2;
        *((int128_t *)&a0[1]) = (int128_t)v0;
        a0[0] = 0x8000000000000000;
        return a0;
    }
    v12 = v2;
    *((int128_t *)&v11) = (int128_t)v0;
    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1cab33b576bca811((long long)(&v11)[8], v12 * 16 + (long long)(&v11)[8]))
    {
        a0[1] = 9223372036854775811;
        a0[0] = 0x8000000000000000;
        ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v11);
        return a0;
    }
    uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(&v5, a3, a4);
    v50 = v6;
    *((int128_t *)&v0) = *((int128_t *)&v7);
    v2 = *((long long *)&v9);
    if (v50)
    {
        a0[3] = v2;
        *((int128_t *)&a0[1]) = (int128_t)v0;
        a0[0] = 0x8000000000000000;
        ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v11);
        return a0;
    }
    v4 = v2;
    *((int128_t *)&v3) = (int128_t)v0;
    v51 = (long long)(&v3)[8];
    v52 = v4 * 16 + v51;
    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1cab33b576bca811(v51, v52) > 1)
    {
        v53 = 9223372036854775810;
    }
    else
    {
        v54 = v48;
        if (!((char)v54) || !((v5 = (unsigned long)v51, v7 = v52, _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h7bb18215294ee2ea(&v5))))
        {
            v35 = (long long)(&v11)[8];
            v36 = v12 * 16 + v35;
            v37 = 0;
            v38 = 0;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd98ed131c7af542f(&v13, &v35);
            if (a5)
            {
                v19 = 0;
                v20 = 255;
                v18 = &v13;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h3fc2f6d282a93e56(&v5, &v18);
                ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v13);
                v14 = v8;
                *((int128_t *)&v13) = *((int128_t *)&v5);
            }
            v55 = v14;
            v43 = (long long)(&v3)[8];
            v44 = v4 * 16 + v43;
            v45 = 0;
            v46 = 0;
            v56 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::h5221240c85754c5c(&v43);
            v57 = (v56 <= v55 ? 0 : v55 - v56);
            v21 = v57;
            v22 = (long long)(&v3)[8];
            v23 = v4 * 16 + v22;
            v24 = &v21;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h475caf593186536a(&v5, &v22);
            ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v3);
            v58 = v8;
            v4 = v58;
            *((int128_t *)&v3) = *((int128_t *)&v5);
            v59 = (long long)(&v3)[8];
            v0 = v59;
            v1 = v58 * 16 + v59;
            v2 = 0;
            v60 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&v0);
            if (v61)
            {
                v17 = v55;
                do
                {
                    if (*(v62) == 4)
                    {
                        if (!v60)
                        {
                            v63 = 0;
                        }
                        else
                        {
                            v27 = (long long)(&v3)[8];
                            v28 = v4 * 16 + v27;
                            v29 = v60;
                            v25 = 0;
                            v26 = 0;
                            v63 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::hf383c31b2191b5aa(&v25);
                        }
                        v6 = (long long)(&v11)[8];
                        v7 = v12 * 16 + v6;
                        v8 = 0;
                        while (true)
                        {
                            v64 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&v5);
                            if (!v61)
                                break;
                            if (*(v61) == 4)
                            {
                                if (!v64)
                                {
                                    v65 = 0;
                                }
                                else
                                {
                                    v32 = (long long)(&v11)[8];
                                    v33 = v12 * 16 + v32;
                                    v34 = v64;
                                    v30 = 0;
                                    v31 = 0;
                                    v65 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::hf383c31b2191b5aa(&v30);
                                }
                                if (v65 == v63)
                                {
                                    v54 = v54 & 4294967295 & 4294967295;
                                    v55 = v17;
                                }
                            }
                        }
                        a0[1] = 9223372036854775815;
                        a0[0] = 0x8000000000000000;
                        goto LABEL_4bd9be;
                    }
                } while ((v60 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&v0), v61));
                v59 = (long long)(&v3)[8];
                v58 = v4;
            }
            v39 = v59;
            v40 = v58 * 16 + v59;
            v41 = 0;
            v42 = 0;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd98ed131c7af542f(&v15, &v39);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3c1bb440d2de9642(&v0, &v15);
            alloc::slice::stable_sort::h08e6667fddf878a8(v1, v2);
            alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h94896181a17f53f7(&v0);
            v6 = (long long)(&v11)[8];
            v7 = v12 * 16 + v6;
            if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hd7cdadf0fcbb5b0b(&v5) || !(char)v54 || !a5)
            {
                v67 = *((long long *)&v16);
                goto LABEL_4bdacc;
            }
            else
            {
                v66 = 9223372036854775817;
                if (v2 <= 1 && v67 <= v55)
                {
LABEL_4bdacc:
                    v68 = v47;
                    if (!(v67 < v14) || !(!v68) || !(v69) || !(*((char *)(v71 + v70 - 16)) == 4) || !((v66 = 9223372036854775816, !((unsigned int)(char)*((char *)(v71 + v70 + -15)) != 10) || !((unsigned int)(char)*((char *)(v71 + v70 + -15)) != 6))))
                    {
                        if (v68)
                            alloc::vec::Vec$LT$T$C$A$GT$::truncate::h04589a5fa11b67b9(&v13, v67);
                        v8 = v14;
                        v73 = v13;
                        v6 = v73;
                        v10 = *((long long *)&v16);
                        *((int128_t *)&v9) = *((int128_t *)&v15);
                        *((void*)&a0[0]) = v73;
                        a0[4] = (long long)(&v9)[8];
                        a0[5] = v10;
                        a0[2] = v8;
                        a0[3] = (long long)v9;
                        ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v0);
                        ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v3);
                        ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v11);
                        return a0;
                    }
                }
                a0[1] = v66;
                a0[0] = 0x8000000000000000;
                ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v0);
                ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v15);
LABEL_4bd9be:
                ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v13);
                ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v3);
                ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v11);
                return a0;
            }
        }
        else
        {
            v53 = 9223372036854775814;
        }
    }
    a0[1] = v53;
    a0[0] = 0x8000000000000000;
    ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v3);
    ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v11);
    return a0;
}
