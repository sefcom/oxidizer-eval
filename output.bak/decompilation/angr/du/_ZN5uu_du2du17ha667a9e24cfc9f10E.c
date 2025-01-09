long long uu_du::du::ha667a9e24cfc9f10(unsigned long long a0[3], struct_2 *a1, struct_3 *a2, unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [sp-0x42d]
    char v1;  // [sp-0x42c]
    char v2;  // [sp-0x42b]
    char v3;  // [sp-0x42a]
    char v4;  // [sp-0x429]
    unsigned long long v5;  // [sp-0x410]
    unsigned long v6;  // [sp-0x3f8], Other Possible Types: unsigned long long
    char v7;  // [sp-0x3f0]
    unsigned long long v8;  // [sp-0x3e8]
    void* v9;  // [sp-0x3e0], Other Possible Types: unsigned long, unsigned long long
    struct struct_1 **v10;  // [sp-0x3d8]
    int v11;  // [sp-0x3d0], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x3c8]
    int v13;  // [sp-0x3c0]
    int v14;  // [sp-0x3b0]
    int v15;  // [sp-0x3a0]
    int v16;  // [sp-0x390]
    unsigned long long v17;  // [sp-0x380]
    int v18;  // [sp-0x378]
    int v19;  // [sp-0x368]
    unsigned long long v20;  // [sp-0x358]
    char v21;  // [bp-0x348]
    char v22;  // [bp-0x340]
    char v23;  // [bp-0x338]
    unsigned long long v24;  // [sp-0x330]
    unsigned long long v25;  // [sp-0x328]
    unsigned long v26;  // [sp-0x320], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x318]
    int v28;  // [sp-0x310]
    unsigned long long v29;  // [sp-0x300]
    unsigned long v30;  // [sp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x2f0]
    struct struct_0 **v32;  // [bp-0x2e8]
    unsigned long long v33;  // [sp-0x2e0]
    char v34;  // [bp-0x2d8]
    char *v35;  // [sp-0x2d0]
    char v36;  // [bp-0x2c8], Other Possible Types: unsigned long long, unsigned long
    int v37;  // [sp-0x2c0]
    char v38;  // [bp-0x2b8]
    char v39;  // [bp-0x2b0], Other Possible Types: unsigned long
    char v40;  // [bp-0x2a0]
    char v41;  // [bp-0x290]
    char v42;  // [bp-0x280]
    char v43;  // [bp-0x270]
    char v44;  // [bp-0x260]
    char v45;  // [bp-0x258]
    char v46;  // [bp-0x248]
    int v47;  // [sp-0x228]
    unsigned long long v48;  // [sp-0x218]
    char v49;  // [bp-0x208]
    char v50;  // [bp-0x200]
    char v51;  // [bp-0x1f8]
    char v52;  // [bp-0x1e8]
    char v53;  // [bp-0x1c0]
    char v54;  // [bp-0x1b8]
    char v55;  // [bp-0x1b0]
    char v56;  // [bp-0x188]
    int v57;  // [sp-0x178]
    int v58;  // [sp-0x168]
    int v59;  // [sp-0x158]
    int v60;  // [sp-0x148]
    int v61;  // [sp-0x138]
    int v62;  // [sp-0x128]
    char v63;  // [bp-0x110]
    char v64;  // [bp-0x108]
    char v65;  // [bp-0x100]
    char v66;  // [bp-0xf8]
    char v67;  // [bp-0xe8]
    char v68;  // [bp-0xe0]
    char v69;  // [bp-0xc8]
    char v70;  // [bp-0xb8]
    unsigned long long v72;  // rbx
    char v73;  // al
    unsigned long long v74;  // rdi
    int v75;  // ymm0
    int v76;  // ymm1
    int v77;  // ymm2
    int v78;  // ymm3
    int v79;  // ymm4
    unsigned long long v80;  // rax
    unsigned long long v81;  // rdi
    int v82;  // xmm0
    unsigned long v83;  // rdx
    int v84;  // xmm0
    int v85;  // xmm0
    int v86;  // xmm0
    int v87;  // xmm0
    int v88;  // xmm0
    int v89;  // xmm0
    unsigned long long v90;  // r13
    int v91;  // xmm0
    int v92;  // xmm0
    int v93;  // xmm0
    int v94;  // xmm0
    struct_2 *v95;  // rax
    int v96;  // xmm1
    int v97;  // xmm1
    int v98;  // xmm0
    int v99;  // xmm0
    int v100;  // xmm0
    int v101;  // xmm0
    struct struct_1 **v102;  // rax
    unsigned long long v103;  // rdx
    int v104;  // xmm0
    int v105;  // xmm1
    int v106;  // xmm2
    int v107;  // xmm3
    int v108;  // xmm0
    unsigned long long v109;  // rsi
    int v110;  // xmm1
    int v111;  // ymm1
    int v112;  // xmm2
    struct_2 *v113;  // rdi
    int v114;  // xmm1
    int v115;  // xmm1
    int v116;  // xmm1
    int v117;  // xmm2
    int v118;  // xmm3
    int v119;  // xmm4
    int v120;  // xmm1
    int v121;  // xmm2
    int v122;  // xmm0
    int v123;  // xmm0

    if (a1->padding_70[8])
    {
        v72 = &a1->padding_28[24];
        std::fs::read_dir::h62350172118b109c(&v49, v72);
        v73 = v50;
        v74 = *((long long *)&v49);
        if (v7 == 2)
        {
            v10 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h48a9c401437e4328(v6, v72);
            v11 = &g_5843f0;
            v9 = 0;
            v8 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v36, a5, &v8);
            if (UnaryOp GetMSBs == 65535)
            {
                memcpy(a0, a1, 144);
                return a0;
            }
            memcpy(&v10, &v38, 144);
            v9 = (&v36)[1];
            v8 = v36;
            a0[2] = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v8);
            a0[1] = 0;
            a0[0] = 2;
            ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(a1);
            return a0;
        }
        v6 = v74;
        v7 = v73;
        v25 = a2->field_8;
        v24 = a2->field_10 * 56 + v25;
        v4 = a2->field_34;
        v2 = a2->field_33;
        v0 = a2->field_30;
        v3 = a2->field_32;
        v5 = a3 + 1;
        v1 = a2->field_31;
        while (true)
        {
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&v63, &v6);
            if (!*((long long *)&v63))
            {
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba();
                break;
            }
            v80 = *((long long *)&v64);
            v81 = *((long long *)&v65);
            if (!v26)
            {
                v10 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v27);
                v11 = v83;
                v9 = 0;
                v8 = 2;
                std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v36, a5, &v8);
                v86 = *((int128_t *)&v36);
                v87 = CmpEQV(v86, 3);
                v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
                if (UnaryOp GetMSBs != 65535)
                {
                    memcpy(&v10, &v38, 144);
                    v9 = (&v36)[1];
                    v8 = v36;
                    a0 = a0;
                    a0[2] = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v8);
                    a0[1] = 0;
                    a0[0] = 2;
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba();
                    ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(a1);
                    return a0;
                }
                continue;
            }
            v26 = v80;
            v27 = v81;
            v29 = *((long long *)&v67);
            v82 = *((int128_t *)&v66);
            v28 = v82;
            std::fs::DirEntry::path::h5b1bdb0f1090af27(&v21, &v26);
            uu_du::Stat::new::h9e91ef33e1f296e6(&v69, *((long long *)&v22), *((long long *)&v23), &v26, a2);
            v84 = *((int128_t *)&v69);
            v85 = CmpEQV(v84, 2);
            v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
            if (UnaryOp GetMSBs == 65535)
            {
                v10 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h6097e5bae67e7f0a(*((long long *)&v70), &v26);
                v11 = &g_5843f0;
                v9 = 0;
                v8 = 2;
                std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v36, a5, &v8);
                v88 = *((int128_t *)&v36);
                v89 = CmpEQV(v88, 3);
                v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
                if (UnaryOp GetMSBs == 65535)
                    goto LABEL_4f22e6;
                memcpy(&v10, &v38, 144);
                v9 = (&v36)[1];
                v8 = v36;
                v102 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v8);
                goto LABEL_4f2921;
            }
            else
            {
                memcpy(&v49, &v69, 144);
                v30 = v25;
                v31 = v24;
                while (true)
                {
                    v90 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbb4494b75e1b7e30(&v30);
                    if (!v90)
                        break;
                    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v8, *((long long *)&v53), *((long long *)&v54));
                    if ((char)glob::Pattern::matches::hb817b847971d5388(v90, v9, v10))
                    {
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&v8);
                        goto LABEL_4f26f8;
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&v8);
                        std::fs::DirEntry::file_name::habdd235db90dd152(&v68, &v26);
                        std::sys::os_str::bytes::Buf::into_string::h7b5acb763c5a1ded(&v8, &v68);
                        v39 = v11;
                        v91 = *((int128_t *)&v9);
                        v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                        v37 = v91;
                        v36 = v8;
                        core::result::Result$LT$T$C$E$GT$::unwrap::hbe98b57ab5f25fd3(&v32, &v36);
                        if (!(char)glob::Pattern::matches::hb817b847971d5388(v90, v33, *((long long *)&v34)))
                        {
                            ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v32);
                        }
                        else
                        {
                            ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v32);
LABEL_4f26f8:
                            if (v4)
                            {
                                v93 = *((int128_t *)&v53);
                                v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                                v36 = 1;
                                v37 = v93;
                                v39 = 1;
                                v35 = &v36;
                                v32 = &v35;
                                v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h50e55b5d7d795045;
                                v8 = &g_584380;
                                v9 = 2;
                                v12 = 0;
                                v10 = &v32;
                                v11 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v8);
                            }
                            goto LABEL_4f278d;
                        }
                    }
                }
                if (!(!*((long long *)&v49)) || !(!*((long long *)&v50)))
                {
                    v92 = *((int128_t *)&v51);
                    v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                    v47 = v92;
                    v48 = *((long long *)&v52);
                    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd97e7f5240db6501(a4, &v47))
                    {
                        if (!v2)
                            goto LABEL_4f278d;
                        if (!v0)
                        {
                            *((long long *)((char *)&a1->field_58 + 8)) = *((long long *)((char *)&a1->field_58 + 8)) + 1;
LABEL_4f278d:
                            ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(&v49);
                            ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea();
                            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(&v26);
                            continue;
                        }
                    }
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4a8fe37a6ecf7570(a4, (long long)v47, (long long)(&v47)[8], v48);
                }
                if (v56 && (!(v3) || !(*((long long *)&v49) == 1) || !(a1->field_0 == 1) || !(*((long long *)&v52) != a1->field_20)))
                {
                    memcpy(&v8, &v49, 144);
                    uu_du::du::ha667a9e24cfc9f10(&v36, &v8, a2, v5, a4, a5);
                    v100 = *((int128_t *)&v36);
                    v101 = CmpEQV(v100, 2);
                    v102 = (long long)(&v37)[8];
                    if (UnaryOp GetMSBs == 65535)
                        goto LABEL_4f2921;
                    v103 = (long long)v37;
                    v104 = *((int128_t *)&v39);
                    v105 = *((int128_t *)&v40);
                    v106 = *((int128_t *)&v41);
                    v107 = *((int128_t *)&v42);
                    v62 = v107;
                    v61 = v106;
                    v60 = v105;
                    v59 = v104;
                    v108 = *((int128_t *)&v43);
                    v109 = *((long long *)&v44);
                    v110 = *((int128_t *)&v45);
                    v111 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
                    v112 = *((int128_t *)&v46);
                    v57 = v110;
                    v58 = v112;
                    if (!v1)
                    {
                        v113 = a1;
                        v114 = *((int128_t *)&(&v113->padding_28)[1]);
                        v115 = AddV(v114, v108);
                        v111 = v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115;
                        *((void*)&(&v113->padding_28)[1]) = v115;
                        *((unsigned long long *)((char *)&v113->field_58 + 8)) = *((long long *)((char *)&v113->field_58 + 8)) + v17;
                    }
                    v116 = v59;
                    v117 = v60;
                    v118 = v61;
                    v78 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v118;
                    v119 = v62;
                    v79 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v119;
                    v15 = v119;
                    v14 = v118;
                    v13 = v117;
                    v11 = v116;
                    v120 = v57;
                    v76 = v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120;
                    v121 = v58;
                    v77 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121;
                    v19 = v121;
                    v18 = v120;
                    v9 = v103;
                    v8 = v36;
                    v10 = v102;
                    v16 = v108;
                    v17 = v109;
                    v20 = v5;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v36, a5, &v8);
                    v122 = *((int128_t *)&v36);
                    v123 = CmpEQV(v122, 3);
                    v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v122 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v123;
                    if (UnaryOp GetMSBs == 65535)
                        goto LABEL_4f22e6;
                    memcpy(&v10, &v38, 144);
                    v9 = (long long)v37;
                    v8 = v36;
                    v102 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v8);
                    goto LABEL_4f2921;
                }
                v94 = *((int128_t *)&v55);
                v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                v95 = a1;
                *((long long *)((char *)&v95->field_58 + 8)) = *((long long *)((char *)&v95->field_58 + 8)) + 1;
                v96 = *((int128_t *)&(&v95->padding_28)[1]);
                v97 = AddV(v96, v94);
                v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97;
                *((void*)&(&v95->padding_28)[1]) = v97;
                if (!v0)
                {
                    ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(&v49);
LABEL_4f22e6:
                    ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea();
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(&v26);
                }
                else
                {
                    memcpy(&v8, &v49, 144);
                    v20 = v5;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v36, a5, &v8);
                    v98 = *((int128_t *)&v36);
                    v99 = CmpEQV(v98, 3);
                    v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                    if (UnaryOp GetMSBs == 65535)
                        goto LABEL_4f22e6;
                    memcpy(&v10, &v38, 144);
                    v9 = (long long)v37;
                    v8 = v36;
                    v102 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v8);
LABEL_4f2921:
                    a0 = a0;
                    a0[2] = v102;
                    a0[1] = 0;
                    a0[0] = 2;
                    ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea();
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(&v26);
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba();
                    ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(a1);
                    return a0;
                }
            }
        }
    }
    memcpy(a0, a1, 144);
    return a0;
}
