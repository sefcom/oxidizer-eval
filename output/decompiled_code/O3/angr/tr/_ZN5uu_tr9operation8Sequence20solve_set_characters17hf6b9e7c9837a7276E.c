long long uu_tr::operation::Sequence::solve_set_characters::hf6b9e7c9837a7276(unsigned long long a0[6], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    int v0;  // [bp-0x228], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x220]
    void* v2;  // [sp-0x218], Other Possible Types: unsigned long long
    int v3;  // [sp-0x208]
    unsigned long long v4;  // [sp-0x1f8]
    int v5;  // [bp-0x1e8], Other Possible Types: char, unsigned long, unsigned long long
    char v6;  // [bp-0x1e0], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x1d8], Other Possible Types: unsigned long long, unsigned long
    int v8;  // [bp-0x1d0], Other Possible Types: char
    unsigned long long v9;  // [sp-0x1c0]
    int v10;  // [sp-0x1b8]
    unsigned long long v11;  // [sp-0x1a8]
    int v12;  // [bp-0x198], Other Possible Types: char
    unsigned long long v13;  // [sp-0x188]
    char v14;  // [bp-0x180]
    char v15;  // [bp-0x170]
    unsigned long long v16;  // [sp-0x168]
    char *v17;  // [sp-0x160]
    unsigned short v18;  // [sp-0x158]
    char v19;  // [sp-0x156]
    unsigned long v20;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x148]
    unsigned long long v22;  // [sp-0x140]
    char *v23;  // [sp-0x138]
    void* v24;  // [sp-0x130]
    void* v25;  // [sp-0x120]
    unsigned long long v26;  // [sp-0x110]
    unsigned long long v27;  // [sp-0x108]
    unsigned long long v28;  // [sp-0x100]
    void* v29;  // [sp-0xf8]
    void* v30;  // [sp-0xe8]
    unsigned long long v31;  // [sp-0xd8]
    unsigned long long v32;  // [sp-0xd0]
    unsigned long long v33;  // [sp-0xc8]
    unsigned long long v34;  // [sp-0xc0]
    unsigned long long v35;  // [sp-0xb8]
    void* v36;  // [sp-0xb0]
    void* v37;  // [sp-0xa0]
    unsigned long v38;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v39;  // [sp-0x88]
    void* v40;  // [sp-0x80]
    void* v41;  // [sp-0x70]
    unsigned long long v42;  // [sp-0x60]
    unsigned long long v43;  // [sp-0x58]
    void* v44;  // [sp-0x50]
    void* v45;  // [sp-0x40]
    unsigned long v46;  // [bp+0x8]
    char v47;  // [bp+0x10]
    unsigned long long v48;  // 4098
    unsigned long long v49;  // 4098
    unsigned long long v50;  // r15
    unsigned long long v51;  // r14
    unsigned long long v52;  // rcx
    unsigned long long v53;  // r12
    char *v54;  // rdx
    unsigned long long v55;  // r13
    unsigned long long v56;  // rax
    unsigned long long v57;  // rdx
    void* v58;  // rdx
    unsigned long long v59;  // r14
    unsigned long long v60;  // r15
    unsigned long long v61;  // rax
    unsigned long long v62;  // r14
    char *v63;  // rdx
    unsigned long long v64;  // r13
    void* v65;  // rax
    unsigned long long v66;  // rax
    void* v67;  // rax
    unsigned long long v68;  // rcx
    unsigned long long v69;  // rsi
    char v70;  // al
    unsigned long long v71;  // rcx
    unsigned long long v72;  // rdx
    unsigned long long v73;  // rcx
    int v75;  // xmm0

    uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(&v5, a1, a2);
    v48 = v5;
    *((int128_t *)&v0) = *((int128_t *)&v6);
    v2 = *((long long *)&v8);
    if (v48)
    {
        a0[3] = v2;
        *((int128_t *)&a0[1]) = (int128_t)v0;
        a0[0] = 0x8000000000000000;
        return a0;
    }
    v11 = v2;
    *((int128_t *)&v10) = (int128_t)v0;
    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1cab33b576bca811((long long)(&v10)[8], v11 * 16 + (long long)(&v10)[8]))
    {
        a0[1] = 9223372036854775811;
        a0[0] = 0x8000000000000000;
        ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v10);
        return a0;
    }
    uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(&v5, a3, a4);
    v49 = v5;
    *((int128_t *)&v0) = *((int128_t *)&v6);
    v2 = *((long long *)&v8);
    if (v49)
    {
        a0[3] = v2;
        *((int128_t *)&a0[1]) = (int128_t)v0;
        a0[0] = 0x8000000000000000;
        ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v10);
        return a0;
    }
    v4 = v2;
    *((int128_t *)&v3) = (int128_t)v0;
    v50 = (long long)(&v3)[8];
    v51 = v4 * 16 + v50;
    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1cab33b576bca811(v50, v51) > 1)
    {
        v52 = 9223372036854775810;
    }
    else
    {
        v53 = v47;
        if (!((char)v53) || !((v5 = v50, v6 = v51, (char)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h7bb18215294ee2ea(&v5))))
        {
            v34 = (long long)(&v10)[8];
            v35 = v11 * 16 + v34;
            v36 = 0;
            v37 = 0;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd98ed131c7af542f(&v12, &v34, v54);
            if (a5)
            {
                v18 = 0;
                v19 = 255;
                v17 = &v12;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h3fc2f6d282a93e56(&v5, &v17, v54);
                ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v12);
                v13 = v7;
                *((int128_t *)&v12) = *((int128_t *)&v5);
            }
            v55 = v13;
            v42 = (long long)(&v3)[8];
            v43 = v4 * 16 + v42;
            v44 = 0;
            v45 = 0;
            v56 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::h5221240c85754c5c(&v42);
            v57 = v55;
            v58 = v57 - v56;
            if (v56 > v57)
                v58 = 0;
            v20 = v58;
            v21 = (long long)(&v3)[8];
            v22 = v4 * 16 + v21;
            v23 = &v20;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h475caf593186536a(&v5, &v21);
            ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v3);
            v59 = v7;
            v4 = v59;
            *((int128_t *)&v3) = *((int128_t *)&v5);
            v60 = (long long)(&v3)[8];
            v0 = v60;
            v1 = v59 * 16 + v60;
            v2 = 0;
            v61 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&v0);
            if (v54)
            {
                v16 = v55;
                do
                {
                    if (*(v63) == 4)
                    {
                        if (!v61)
                        {
                            v65 = 0;
                        }
                        else
                        {
                            v26 = (long long)(&v3)[8];
                            v27 = v4 * 16 + v26;
                            v28 = v61;
                            v24 = 0;
                            v25 = 0;
                            v65 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::hf383c31b2191b5aa(&v24);
                        }
                        v5 = (long long)(&v10)[8];
                        v6 = v11 * 16 + v5;
                        v7 = 0;
                        while (true)
                        {
                            v66 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&v5);
                            if (!v54)
                                break;
                            if (*(v54) == 4)
                            {
                                if (v66)
                                {
                                    v31 = (long long)(&v10)[8];
                                    v32 = v11 * 16 + v31;
                                    v33 = v66;
                                    v29 = 0;
                                    v30 = 0;
                                    v67 = core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_fold::hf383c31b2191b5aa(&v29);
                                }
                                else
                                {
                                    v67 = 0;
                                }
                                if (v67 == v65)
                                {
                                    v53 = v53 & 4294967295 & 4294967295;
                                    v64 = v16;
                                }
                            }
                        }
                        a0[1] = 9223372036854775815;
                        a0[0] = 0x8000000000000000;
                        goto LABEL_4bd9be;
                    }
                } while ((v55 = v64, v61 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7e21891cabe133c(&v0), v63));
                v60 = (long long)(&v3)[8];
                v62 = v4;
            }
            v38 = v60;
            v39 = v62 * 16 + v38;
            v40 = 0;
            v41 = 0;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd98ed131c7af542f(&v14, &v38, v63);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3c1bb440d2de9642(&v0, &v14);
            alloc::slice::stable_sort::h08e6667fddf878a8(v1, v2);
            alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h94896181a17f53f7(&v0);
            v5 = (long long)(&v10)[8];
            v6 = v11 * 16 + v5;
            if (!(char)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hd7cdadf0fcbb5b0b(&v5) || !(char)v53 || !a5)
            {
                v69 = *((long long *)&v15);
                goto LABEL_4bdacc;
            }
            else
            {
                v68 = 9223372036854775817;
                if (v2 <= 1 && v69 <= v55)
                {
LABEL_4bdacc:
                    v70 = v46;
                    if (!(v69 < v13) || !(!v70) || !(v71) || !(*((char *)(v73 + v72 - 16)) == 4) || !((v68 = 9223372036854775816, !((unsigned int)(char)*((char *)(v73 + v72 + -15)) != 10) || !((unsigned int)(char)*((char *)(v73 + v72 + -15)) != 6))))
                    {
                        if (v70)
                            alloc::vec::Vec$LT$T$C$A$GT$::truncate::h04589a5fa11b67b9(&v12, v69);
                        v7 = v13;
                        v75 = v12;
                        v5 = v75;
                        v9 = *((long long *)&v15);
                        *((int128_t *)&v8) = *((int128_t *)&v14);
                        *((void*)&a0[0]) = v75;
                        a0[4] = (long long)(&v8)[8];
                        a0[5] = v9;
                        a0[2] = v7;
                        a0[3] = (long long)v8;
                        ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v0);
                        ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v3);
                        ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v10);
                        return a0;
                    }
                }
                a0[1] = v68;
                a0[0] = 0x8000000000000000;
                ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v0);
                ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v14);
LABEL_4bd9be:
                ::0x4bae80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(&v12);
                ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v3);
                ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v10);
                return a0;
            }
        }
        else
        {
            v52 = 9223372036854775814;
        }
    }
    a0[1] = v52;
    a0[0] = 0x8000000000000000;
    ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v3);
    ::0x4baf80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tr..operation..Sequence$GT$$GT$::hb9b8e4e5bd05f109(&v10);
    return a0;
}
