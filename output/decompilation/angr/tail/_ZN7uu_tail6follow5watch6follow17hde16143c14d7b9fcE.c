long long uu_tail::follow::watch::follow::hde16143c14d7b9fc(struct_4 *a0, struct_0 *a1)
{
    char v0;  // [sp-0x2ca]
    char v1;  // [sp-0x2c9]
    struct_0 *v2;  // [sp-0x2c8]
    struct_0 *v3;  // [sp-0x2c8]
    struct_0 *v4;  // [sp-0x2c0], Other Possible Types: unsigned long long
    struct_0 *v5;  // [sp-0x2b8]
    struct_0 *v6;  // [sp-0x2a8]
    struct_0 *v7;  // [sp-0x2a0], Other Possible Types: unsigned long long
    struct_0 *v8;  // [sp-0x298], Other Possible Types: unsigned long long
    unsigned int v9;  // [bp-0x290], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x288]
    void* v11;  // [sp-0x270], Other Possible Types: char
    struct_0 *v12;  // [bp-0x268]
    char v13;  // [bp-0x260]
    char v14;  // [sp-0x258]
    char v15;  // [bp-0x240]
    unsigned int v16;  // [sp-0x238]
    unsigned int v17;  // [sp-0x234]
    unsigned long long v18;  // [sp-0x230]
    struct_0 *v19;  // [sp-0x228]
    unsigned long long v20[3];  // [sp-0x220], Other Possible Types: unsigned long long
    struct_0 *v21;  // [sp-0x218], Other Possible Types: unsigned long long
    struct_0 *v22;  // [sp-0x218]
    struct_0 *v23;  // [bp-0x210], Other Possible Types: unsigned int
    struct_0 *v24;  // [bp-0x208], Other Possible Types: void*
    unsigned long long v25;  // [bp-0x208]
    unsigned long long v26;  // [sp-0x1f8]
    struct struct_0 **v27;  // [bp-0x170]
    unsigned long long v28;  // [sp-0x168]
    struct_0 *v29;  // [sp-0x160]
    unsigned long long v30;  // [sp-0x158]
    char v31;  // [bp-0x150]
    char v32;  // [bp-0x140]
    char v33;  // [bp-0x138]
    char v34;  // [bp-0x128]
    char v35;  // [bp-0x120]
    char v36;  // [bp-0x110]
    struct_0 *v37;  // [sp-0x108]
    struct_0 *v38;  // [sp-0xf8]
    unsigned long long v39;  // [sp-0xe8]
    struct_0 *v43;  // rbx
    unsigned long long v44;  // r13
    struct_4 *v45;  // r12
    unsigned int v46;  // eax
    unsigned long long v47;  // rbp
    int v48;  // ymm0
    int v49;  // ymm1
    struct_0 *v55;  // r12
    struct_0 *v57;  // xmm0
    struct_0 *v58;  // xmm1
    struct_0 *v59;  // xmm0
    struct_0 *v60;  // rax
    unsigned long long v61;  // rbx
    unsigned long long v62;  // r15
    struct_0 *v63;  // xmm0
    struct_0 *v64;  // xmm1
    struct_0 *v65;  // xmm0
    unsigned long long v66[3];  // rax
    struct_0 *v67;  // xmm0
    struct_0 *v68;  // xmm1
    char v69;  // r14b
    struct_0 *v70;  // rax

    v43 = a1;
    v44 = &a0->padding_38;
    if (!(char)uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(v44, a1) || (char)uu_tail::follow::files::FileHandling::only_stdin_remaining::h9831c931e4f5678d(v44))
    {
        v45 = a0;
        v46 = v45->field_88;
        v17 = v46;
        v1 = a1->field_4a;
        v30 = a1->field_30;
        v29 = a1;
        v16 = a1->field_38;
        v18 = &g_5bc1b8;
        v0 = a1->field_4c;
        if (v0 == 2)
            goto LABEL_506f60;
        else
            goto LABEL_506f47;
    }
    else
    {
        ::0x504300::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v11);
        v21 = *((long long *)&v13);
        *((int128_t *)&v19) = *((int128_t *)&v11);
        v23 = 1;
        v55 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v19);
        goto LABEL_507662;
    }
    while (true)
    {
LABEL_506f60:
        if ((v45->field_8e & 1) && v45->field_8c)
        {
            v3 = v45->field_28;
            v4 = &(&v3->field_0)[3 * v45->field_30];
            continue;
        }
        if (v45->field_0 == 3)
        {
            v18 = &g_5bc1d0;
            core::option::unwrap_failed::h0e11329e76906eaa(v18); /* do not return */
        }
        std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::h1f975a6ba50f2813(&v11, v45, v30, v16);
        v2 = 0;
        v4 = 8;
        v5 = 0;
        switch (v11)
        {
        case 1:
            if (!(!(char)::0x503820::std::io::error::Error::kind::hb2ff5fa058639b3d(v12)))
                goto LABEL_50756d;
            v8 = *((long long *)&v15);
            v59 = *((int128_t *)&v14);
            v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
            v6 = v59;
            if (v8)
            {
                v60 = v7;
                v61 = v60->field_8;
                v62 = v60->field_10;
                if (uu_tail::follow::files::FileHandling::contains_key::hb9b0dd7b277f1857(v44, v61, v62))
                {
                    if (v45->field_0 == 3)
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc1e8); /* do not return */
                    v45->field_18->field_20(&v19, v45->field_10, v61, v62);
                    ::0x504030::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$notify..error..Error$GT$$GT$::h1955e5315261984f(&v19);
                }
            }
            ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v6);
            v47 = (v47 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
            v43 = 0;
            goto LABEL_5073a0;
        case 5:
            v6 = &g_5bbeb0.field_0;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v19 = &g_5bc160.field_0;
            v20 = 2;
            v24 = 0;
            v21 = &v6;
            v23 = 1;
            ::0x5041c0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&v31, &v19);
            v23 = 1;
            *((int128_t *)&v19) = *((int128_t *)&v31);
            v21 = *((long long *)&v32);
            v70 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v19);
            goto LABEL_5077fc;
        case 6:
            v57 = *((int128_t *)&v12);
            v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
            v58 = *((int128_t *)&v14);
            v49 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
            v22 = v58;
            v25 = *((long long *)&v14);
            v19 = v57;
            if (v22 && uu_tail::follow::files::FileHandling::contains_key::hb9b0dd7b277f1857(v44, v20[1], v20[2]))
            {
                uu_tail::follow::watch::Observer::handle_event::hf377c643c1a778ce(&v6, v45, &v19, v29);
                v43 = v6;
                v55 = v7;
                if (v43 == 0x8000000000000000)
                {
                    ::0x503b50::core::ptr::drop_in_place$LT$notify..event..Event$GT$::hc14176a2572b9d6e(&v19);
                    v69 = 0;
                    break;
                }
                else
                {
                    ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v2);
                    v2 = v43;
                    v4 = v55;
                    v5 = v8;
                    v45 = a0;
                }
            }
            ::0x503b50::core::ptr::drop_in_place$LT$notify..event..Event$GT$::hc14176a2572b9d6e(&v19);
            v43 = (v43 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
            v47 = 0;
LABEL_5073a0:
            if (v0 != 2 && v45->field_8d)
            {
                uu_tail::follow::files::FileHandling::keys::h4394a3d4fbf32fd4(&v19, v44);
                v39 = v25;
                v63 = *((int128_t *)&v19);
                v64 = *((int128_t *)&v22);
                v49 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                v38 = v64;
                v37 = v63;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he64bcd77bd860359(&v19, &v37);
                ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v2);
                v5 = v22;
                v65 = *((int128_t *)&v19);
                v48 = (v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                v2 = v65;
            }
            v6 = v4;
            v7 = (char *)v6 + 0x18 * v5;
            v66 = ::0x504bb0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h214d277e2b68ee77(&v6);
            if (v66)
            {
                uu_tail::follow::files::FileHandling::tail_file::h8ac57e4964e40afa(&v19, v44, v66[1], v66[2], v1);
                v55 = v19;
                if (!v55)
                    continue;
                v69 = 0;
                ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v2);
                if (((char)~((int)v11) & 6) && !v69)
                    ::0x503bc0::core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::hced92ed8b1b7bc68(&v11);
            }
            ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v2);
            v45 = a0;
            if (((char)~((int)v11) & 6))
                ::0x503bc0::core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::hced92ed8b1b7bc68(&v11);
            v46 = v45->field_88;
            if (v0 == 2)
                continue;
LABEL_506f47:
            if (v46 && (char)uu_tail::platform::unix::ProcessChecker::is_dead::he1a98e91c2c8dfd9(&v17))
            {
                v55 = 0;
LABEL_507662:
                ::0x503d80::core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(a0);
                return v55;
            }
        case 7:
            v43 = v43 & 0xffffffffffffff00 | 1;
            v47 = v47 & 0xffffffffffffff00 | 1;
            if (!(char)v12)
                goto LABEL_5073a0;
            *((char *)&v27) = 1;
            v6 = &v27;
            v7 = _$LT$std..sync..mpsc..RecvTimeoutError$u20$as$u20$core..fmt..Display$GT$::fmt::h0f095b628b6fcfe0;
            v19 = &g_5bc190.field_0;
            v20 = 1;
            v24 = 0;
            v21 = &v6;
            v23 = 1;
            ::0x5041c0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&v35, &v19);
            v23 = 1;
            *((int128_t *)&v19) = *((int128_t *)&v35);
            v21 = *((long long *)&v36);
            v70 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v19);
LABEL_5077fc:
            v55 = v70;
            v69 = 0;
            break;
        default:
LABEL_50756d:
            v26 = *((long long *)&v15);
            v67 = *((int128_t *)&v11);
            v68 = *((int128_t *)&(&v12)[1]);
            *((int128_t *)&v24) = *((int128_t *)&v14);
            v21 = v68;
            v19 = v67;
            v27 = &v19;
            v28 = _$LT$notify..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hd94546b42760b6fd;
            v6 = &g_5bc180.field_0;
            v7 = 1;
            v10 = 0;
            v8 = &v27;
            v9 = 1;
            ::0x5041c0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&v33, &v6);
            v9 = 1;
            *((int128_t *)&v6) = *((int128_t *)&v33);
            v8 = *((long long *)&v34);
            v55 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v6);
            ::0x503b10::core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(&v19);
            v69 = &v19 & 0xffffffffffffff00 | 1;
            break;
        }
    }
}
