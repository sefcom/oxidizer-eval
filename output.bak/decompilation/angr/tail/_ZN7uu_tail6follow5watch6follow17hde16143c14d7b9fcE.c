long long uu_tail::follow::watch::follow::hde16143c14d7b9fc(struct_3 *a0, struct_0 *a1)
{
    char v0;  // [sp-0x2ca]
    char v1;  // [sp-0x2c9]
    void* v2;  // [sp-0x2c8], Other Possible Types: struct_0 *
    struct_0 *v3;  // [sp-0x2c0], Other Possible Types: unsigned long long
    struct_0 *v4;  // [sp-0x2b8]
    struct_0 *v5;  // [sp-0x2a8]
    struct_0 *v6;  // [sp-0x2a0], Other Possible Types: unsigned long long
    struct_0 *v7;  // [sp-0x298], Other Possible Types: unsigned long long
    unsigned int v8;  // [bp-0x290], Other Possible Types: unsigned long long
    void* v9;  // [sp-0x288]
    void* v10;  // [bp-0x270], Other Possible Types: char, unsigned long
    struct_0 *v11;  // [bp-0x268]
    char v12;  // [bp-0x260]
    char v13;  // [sp-0x258]
    char v14;  // [bp-0x250]
    char v16;  // [bp-0x240]
    unsigned int v17;  // [sp-0x238]
    unsigned int v18;  // [sp-0x234]
    unsigned long long v19;  // [sp-0x230]
    struct_0 *v20;  // [sp-0x228]
    unsigned long long v21[3];  // [sp-0x220], Other Possible Types: unsigned long long
    struct_0 *v22;  // [sp-0x218], Other Possible Types: unsigned long long
    struct_0 *v23;  // [bp-0x210], Other Possible Types: unsigned int
    struct_0 *v24;  // [bp-0x208], Other Possible Types: void*, unsigned long long
    unsigned long long v25;  // [sp-0x1f8]
    struct struct_0 **v26;  // [bp-0x170], Other Possible Types: struct struct_5 **
    unsigned long long v27;  // [sp-0x168]
    struct_0 *v28;  // [sp-0x160]
    unsigned long long v29;  // [sp-0x158]
    char v30;  // [bp-0x150]
    char v31;  // [bp-0x140]
    char v32;  // [bp-0x138]
    char v33;  // [bp-0x128]
    char v34;  // [bp-0x120]
    char v35;  // [bp-0x110]
    struct_0 *v36;  // [sp-0x108]
    struct_0 *v37;  // [sp-0xf8]
    unsigned long long v38;  // [sp-0xe8]
    struct_0 *v42;  // rbx
    unsigned long long v43;  // r13
    struct_3 *v44;  // r12
    unsigned int v45;  // eax
    unsigned long long v46;  // rbp
    int v47;  // ymm0
    int v48;  // ymm1
    struct_3 *v49;  // r12
    struct_0 *v55;  // rax
    struct_3 *v57;  // r12
    unsigned long long v58;  // rbp
    struct_0 *v59;  // xmm0
    struct_0 *v60;  // xmm1
    struct_3 *v61;  // r12
    struct_0 *v62;  // rbx
    struct_0 *v63;  // xmm0
    struct_0 *v64;  // rax
    unsigned long long v65;  // rbx
    unsigned long long v66;  // r15
    struct_0 *v67;  // xmm0
    struct_0 *v68;  // xmm1
    struct_0 *v69;  // xmm0
    unsigned long long v70[3];  // rax
    struct_0 *v71;  // xmm0
    struct_0 *v72;  // xmm1
    char v73;  // r14b

    v42 = a1;
    v43 = &a0->padding_38;
    if (!(char)uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(v43, a1) || (char)uu_tail::follow::files::FileHandling::only_stdin_remaining::h9831c931e4f5678d(v43))
    {
        v44 = a0;
        v45 = v44->field_88;
        v18 = v45;
        v1 = a1->field_4a;
        v29 = a1->field_30;
        v28 = a1;
        v17 = a1->field_38;
        v19 = &g_5bc1b8;
        v0 = a1->field_4c;
        if (v0 == 2)
            goto LABEL_506f60;
        else
            goto LABEL_506f47;
    }
    else
    {
        ::0x504300::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v10);
        v22 = *((long long *)&v12);
        *((int128_t *)&v20) = *((int128_t *)&v10);
        v23 = 1;
        v55 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v20);
        goto LABEL_507662;
    }
    while (true)
    {
LABEL_506f60:
        v49 = v44;
        if ((v44->field_8e & 1) && (v49 = v44, v44->field_8c))
        {
            v2 = v44->field_28;
            v3 = &(&v2->field_0)[3 * v44->field_30];
            continue;
        }
        v57 = v49;
        if (v57->field_0 == 3)
        {
            v19 = &g_5bc1d0;
            core::option::unwrap_failed::h0e11329e76906eaa(v19); /* do not return */
        }
        std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::h1f975a6ba50f2813(&v10, v57, v29, v17);
        v2 = 0;
        v3 = 8;
        v4 = 0;
        switch (v10)
        {
        case 1:
            if (!(!(char)::0x503820::std::io::error::Error::kind::hb2ff5fa058639b3d(v11)))
                goto LABEL_50756d;
            v7 = *((long long *)&v16);
            v63 = *((int128_t *)&v14);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
            v5 = v63;
            if (v7)
            {
                v64 = v6;
                v65 = v64->field_8;
                v66 = v64->field_10;
                if (uu_tail::follow::files::FileHandling::contains_key::hb9b0dd7b277f1857(v43, v65, v66))
                {
                    if (v57->field_0 != 3)
                    {
                        v57->field_18->field_20(&v20, v57->field_10, v65, v66);
                        ::0x504030::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$notify..error..Error$GT$$GT$::h1955e5315261984f(&v20);
                    }
                    else
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc1e8); /* do not return */
                    }
                }
            }
            ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v5);
            v46 = v58 | -0x100 | 1 | -0x100 | 1;
            v62 = 0;
            goto LABEL_5073a0;
        case 5:
            v5 = &g_5bbeb0.field_0;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v20 = &g_5bc160.field_0;
            v21 = 2;
            v24 = 0;
            v22 = &v5;
            v23 = 1;
            ::0x5041c0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60();
            v23 = 1;
            *((int128_t *)&v20) = *((int128_t *)&v30);
            v22 = *((long long *)&v31);
            v55 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v20);
            goto LABEL_5077fc;
        case 6:
            v59 = *((int128_t *)&v11);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
            v60 = *((int128_t *)&v13);
            v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
            v22 = v60;
            v24 = *((long long *)&(&v14)[8]);
            v20 = v59;
            v61 = v57;
            if (v22 && (v61 = v57, uu_tail::follow::files::FileHandling::contains_key::hb9b0dd7b277f1857(v43, v21[1], v21[2])))
            {
                uu_tail::follow::watch::Observer::handle_event::hf377c643c1a778ce(&v5, v57, &v20, v28);
                v42 = v5;
                v55 = v6;
                if (v42 == 0x8000000000000000)
                {
                    ::0x503b50::core::ptr::drop_in_place$LT$notify..event..Event$GT$::hc14176a2572b9d6e(&v20);
                    v73 = 0;
                    break;
                }
                else
                {
                    ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v2);
                    v2 = v42;
                    v3 = v55;
                    v4 = v7;
                    v61 = a0;
                }
            }
            ::0x503b50::core::ptr::drop_in_place$LT$notify..event..Event$GT$::hc14176a2572b9d6e(&v20);
            v62 = v42 | -0x100 | 1 | -0x100 | 1;
            v46 = 0;
LABEL_5073a0:
            if (v0 != 2 && v57->field_8d)
            {
                uu_tail::follow::files::FileHandling::keys::h4394a3d4fbf32fd4(&v20, v43);
                v38 = v24;
                v67 = *((int128_t *)&v20);
                v68 = *((int128_t *)&v22);
                v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
                v37 = v68;
                v36 = v67;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he64bcd77bd860359(&v20, &v36);
                ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v2);
                v4 = v22;
                v69 = *((int128_t *)&v20);
                v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
                v2 = v69;
            }
            v5 = v3;
            v6 = (char *)v5 + 0x18 * v4;
            v70 = ::0x504bb0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h214d277e2b68ee77(&v5);
            if (v70)
            {
                uu_tail::follow::files::FileHandling::tail_file::h8ac57e4964e40afa(&v20, v43, v70[1], v70[2], -0x100 | v1);
                v55 = v20;
                if (!v55)
                    continue;
                v73 = 0;
                ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v2);
                if (((char)~((int)v10) & 6) && !v73)
                    ::0x503bc0::core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::hced92ed8b1b7bc68(&v10);
            }
            ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v2);
            v44 = a0;
            if (((char)~((int)v10) & 6))
                ::0x503bc0::core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::hced92ed8b1b7bc68(&v10);
            v45 = v44->field_88;
            if (v0 == 2)
                continue;
LABEL_506f47:
            if (v45 && (char)uu_tail::platform::unix::ProcessChecker::is_dead::he1a98e91c2c8dfd9(&v18))
            {
                v55 = 0;
LABEL_507662:
                ::0x503d80::core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(a0);
                return v55;
            }
        case 7:
            v42 = v42 | -0x100 | 1;
            v46 = v58 | -0x100 | 1;
            if (!(char)v11)
                goto LABEL_5073a0;
            *((char *)&v26) = 1;
            v5 = &v26;
            v6 = _$LT$std..sync..mpsc..RecvTimeoutError$u20$as$u20$core..fmt..Display$GT$::fmt::h0f095b628b6fcfe0;
            v20 = &g_5bc190.field_0;
            v21 = 1;
            v24 = 0;
            v22 = &v5;
            v23 = 1;
            ::0x5041c0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60();
            v23 = 1;
            *((int128_t *)&v20) = *((int128_t *)&v34);
            v22 = *((long long *)&v35);
            v55 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v20);
LABEL_5077fc:
            v73 = 0;
            break;
        default:
LABEL_50756d:
            v25 = *((long long *)&v16);
            v71 = *((int128_t *)&v10);
            v72 = *((int128_t *)&(&v11)[1]);
            *((int128_t *)&v24) = *((int128_t *)&v14);
            v22 = v72;
            v20 = v71;
            v26 = &v20;
            v27 = _$LT$notify..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hd94546b42760b6fd;
            v5 = &g_5bc180.field_0;
            v6 = 1;
            v9 = 0;
            v7 = &v26;
            v8 = 1;
            ::0x5041c0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60();
            v8 = 1;
            *((int128_t *)&v5) = *((int128_t *)&v32);
            v7 = *((long long *)&v33);
            v55 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v5);
            ::0x503b10::core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(&v20);
            v73 = &v20 | -0x100 | 1;
            break;
        }
    }
}
