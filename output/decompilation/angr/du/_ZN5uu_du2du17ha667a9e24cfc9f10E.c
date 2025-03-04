long long uu_du::du::ha667a9e24cfc9f10(unsigned long long a0[3], struct_2 *a1, struct_3 *a2, unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [sp-0x42d]
    char v1;  // [sp-0x42c]
    char v2;  // [sp-0x42b]
    char v3;  // [sp-0x42a]
    char v4;  // [sp-0x429]
    struct_2 *v5;  // [sp-0x428]
    unsigned long long v6[3];  // [sp-0x420]
    unsigned long long v7;  // [sp-0x410]
    unsigned long v8;  // [sp-0x3f8]
    char v9;  // [sp-0x3f0]
    unsigned long long v10;  // [sp-0x3e8], Other Possible Types: unsigned long
    void* v11;  // [sp-0x3e0], Other Possible Types: unsigned long long
    struct struct_1 **v12;  // [sp-0x3d8]
    int v13;  // [sp-0x3d0], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x3c8]
    int v15;  // [sp-0x3c0]
    int v16;  // [sp-0x3b0]
    int v17;  // [sp-0x3a0]
    int v18;  // [sp-0x390]
    unsigned long long v19;  // [sp-0x380]
    int v20;  // [sp-0x378]
    int v21;  // [sp-0x368]
    unsigned long long v22;  // [sp-0x358]
    char v23;  // [bp-0x348]
    char v24;  // [bp-0x340]
    char v25;  // [bp-0x338]
    unsigned long long v26;  // [sp-0x330]
    unsigned long long v27;  // [sp-0x328]
    unsigned long v28;  // [sp-0x320]
    unsigned long long v29;  // [sp-0x318]
    int v30;  // [sp-0x310]
    unsigned long long v31;  // [sp-0x300]
    unsigned long v32;  // [sp-0x2f8]
    unsigned long long v33;  // [sp-0x2f0]
    struct struct_0 **v34;  // [bp-0x2e8]
    unsigned long long v35;  // [sp-0x2e0]
    char v36;  // [bp-0x2d8]
    char *v37;  // [sp-0x2d0]
    unsigned long v38;  // [sp-0x2c8]
    unsigned long long v39;  // [bp-0x2c8]
    int v40;  // [sp-0x2c0]
    char v41;  // [bp-0x2b8]
    char v42;  // [bp-0x2b0], Other Possible Types: unsigned long
    char v43;  // [bp-0x2a0]
    char v44;  // [bp-0x290]
    char v45;  // [bp-0x280]
    char v46;  // [bp-0x270]
    char v47;  // [bp-0x260]
    char v48;  // [bp-0x258]
    char v49;  // [bp-0x248]
    int v50;  // [sp-0x228]
    unsigned long long v51;  // [sp-0x218]
    char v52;  // [bp-0x208]
    char v53;  // [bp-0x200]
    char v54;  // [bp-0x1f8]
    char v55;  // [bp-0x1e8]
    char v56;  // [bp-0x1c0]
    char v57;  // [bp-0x1b8]
    char v58;  // [bp-0x1b0]
    char v59;  // [bp-0x188]
    int v60;  // [sp-0x178]
    int v61;  // [sp-0x168]
    int v62;  // [sp-0x158]
    int v63;  // [sp-0x148]
    int v64;  // [sp-0x138]
    int v65;  // [sp-0x128]
    char v66;  // [bp-0x110]
    char v67;  // [bp-0x108]
    char v68;  // [bp-0x100]
    char v69;  // [bp-0xf8]
    char v70;  // [bp-0xe8]
    char v71;  // [bp-0xe0]
    char v72;  // [bp-0xc8]
    char v73;  // [bp-0xb8]
    struct_2 *v75;  // r15
    unsigned long long v76[3];  // r12
    unsigned long long v77;  // rbx
    char v78;  // al
    unsigned long long v79;  // rdi
    int v80;  // ymm0
    int v81;  // ymm1
    int v82;  // ymm2
    int v83;  // ymm3
    int v84;  // ymm4
    unsigned long long v85;  // rax
    unsigned long long v86;  // rdi
    int v87;  // xmm0
    unsigned long v88;  // rdx
    int v89;  // xmm0
    int v90;  // xmm0
    int v91;  // xmm0
    int v92;  // xmm0
    int v93;  // xmm0
    int v94;  // xmm0
    unsigned long long v95;  // r13
    int v96;  // xmm0
    int v97;  // xmm0
    int v98;  // xmm0
    int v99;  // xmm0
    struct_2 *v100;  // rax
    int v101;  // xmm1
    int v102;  // xmm1
    int v103;  // xmm0
    int v104;  // xmm0
    int v105;  // xmm0
    int v106;  // xmm0
    struct struct_1 **v107;  // rax
    unsigned long long v108;  // rdx
    int v109;  // xmm0
    int v110;  // xmm1
    int v111;  // xmm2
    int v112;  // xmm3
    int v113;  // xmm0
    unsigned long long v114;  // rsi
    int v115;  // xmm1
    int v116;  // ymm1
    int v117;  // xmm2
    struct_2 *v118;  // rdi
    int v119;  // xmm1
    int v120;  // xmm1
    int v121;  // xmm1
    int v122;  // xmm2
    int v123;  // xmm3
    int v124;  // xmm4
    int v125;  // xmm1
    int v126;  // xmm2
    int v127;  // xmm0
    int v128;  // xmm0

    v75 = a1;
    v76 = a0;
    if (a1->padding_70[8])
    {
        v77 = &a1->padding_28[24];
        std::fs::read_dir::h62350172118b109c(&v52, v77);
        v78 = v53;
        v79 = *((long long *)&v52);
        if (v9 == 2)
        {
            v12 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h48a9c401437e4328(v8, v77);
            v13 = &g_5843f0;
            v11 = 0;
            v10 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v39, a5, &v10);
            if (UnaryOp GetMSBs == 65535)
            {
                memcpy(v76, v75, 144);
                return v76;
            }
            memcpy(&v12, &v41, 144);
            v11 = (&v39)[1];
            v10 = v38;
            a0[2] = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v10);
            a0[1] = 0;
            a0[0] = 2;
            ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(v75);
            return v76;
        }
        v6[0] = a0;
        v5 = a1;
        v8 = v79;
        v9 = v78;
        v27 = a2->field_8;
        v26 = a2->field_10 * 56 + v27;
        v4 = a2->field_34;
        v2 = a2->field_33;
        v0 = a2->field_30;
        v3 = a2->field_32;
        v7 = a3 + 1;
        v1 = a2->field_31;
        while (true)
        {
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&v66, &v8);
            if (!*((long long *)&v66))
            {
                v75 = v5;
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba(&v8);
                v76 = v6;
                break;
            }
            v85 = *((long long *)&v67);
            v86 = *((long long *)&v68);
            if (!v28)
            {
                v12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v29);
                v13 = v88;
                v11 = 0;
                v10 = 2;
                std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v39, a5, &v10);
                v91 = *((int128_t *)&v39);
                v92 = CmpEQV(v91, 3);
                v80 = (v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                if (UnaryOp GetMSBs != 65535)
                {
                    memcpy(&v12, &v41, 144);
                    v11 = (&v39)[1];
                    v10 = v39;
                    v76 = v6;
                    v76[2] = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v10);
                    v76[1] = 0;
                    v76[0] = 2;
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba(&v8);
                    ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(v75);
                    return v76;
                }
                continue;
            }
            v28 = v85;
            v29 = v86;
            v31 = *((long long *)&v70);
            v87 = *((int128_t *)&v69);
            v30 = v87;
            std::fs::DirEntry::path::h5b1bdb0f1090af27(&v23, &v28);
            uu_du::Stat::new::h9e91ef33e1f296e6(&v72, *((long long *)&v24), *((long long *)&v25), &v28, a2);
            v89 = *((int128_t *)&v72);
            v90 = CmpEQV(v89, 2);
            v80 = ((v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
            if (UnaryOp GetMSBs == 65535)
            {
                v12 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h6097e5bae67e7f0a(*((long long *)&v73), &v28);
                v13 = &g_5843f0;
                v11 = 0;
                v10 = 2;
                std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v39, a5, &v10);
                v93 = *((int128_t *)&v39);
                v94 = CmpEQV(v93, 3);
                v80 = (v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                if (UnaryOp GetMSBs == 65535)
                    goto LABEL_4f22e6;
                memcpy(&v12, &v41, 144);
                v11 = (&v39)[1];
                v10 = v39;
                v107 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v10);
                goto LABEL_4f2921;
            }
            else
            {
                memcpy(&v52, &v72, 144);
                v32 = v27;
                v33 = v26;
                while (true)
                {
                    v95 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbb4494b75e1b7e30(&v32);
                    if (!v95)
                        break;
                    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v10, *((long long *)&v56), *((long long *)&v57));
                    if ((char)glob::Pattern::matches::hb817b847971d5388(v95, v11, v12))
                    {
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&v10);
                        goto LABEL_4f26f8;
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&v10);
                        std::fs::DirEntry::file_name::habdd235db90dd152(&v71, &v28);
                        std::sys::os_str::bytes::Buf::into_string::h7b5acb763c5a1ded(&v10, &v71);
                        v42 = v13;
                        v96 = *((int128_t *)&v11);
                        v80 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                        v40 = v96;
                        v39 = v10;
                        core::result::Result$LT$T$C$E$GT$::unwrap::hbe98b57ab5f25fd3(&v34, &v39);
                        if (!(char)glob::Pattern::matches::hb817b847971d5388(v95, v35, *((long long *)&v36)))
                        {
                            ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v34);
                        }
                        else
                        {
                            ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v34);
LABEL_4f26f8:
                            if (v4)
                            {
                                v98 = *((int128_t *)&v56);
                                v80 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
                                v39 = 1;
                                v40 = v98;
                                v42 = 1;
                                v37 = &v39;
                                v34 = &v37;
                                v35 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h50e55b5d7d795045;
                                v10 = &g_584380;
                                v11 = 2;
                                v14 = 0;
                                v12 = &v34;
                                v13 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v10);
                            }
                            goto LABEL_4f278d;
                        }
                    }
                }
                if (!(!*((long long *)&v52)) || !(!*((long long *)&v53)))
                {
                    v97 = *((int128_t *)&v54);
                    v80 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97;
                    v50 = v97;
                    v51 = *((long long *)&v55);
                    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd97e7f5240db6501(a4, &v50))
                    {
                        if (!v2)
                            goto LABEL_4f278d;
                        if (!v0)
                        {
                            *((long long *)((char *)&v5->field_58 + 8)) = *((long long *)((char *)&v5->field_58 + 8)) + 1;
LABEL_4f278d:
                            ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(&v52);
                            ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v23);
                            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(&v28);
                            continue;
                        }
                    }
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4a8fe37a6ecf7570(a4, (long long)v50, (long long)(&v50)[8], v51);
                }
                if (v59 && (!(v3) || !(*((long long *)&v52) == 1) || !(v5->field_0 == 1) || !(*((long long *)&v55) != v5->field_20)))
                {
                    memcpy(&v10, &v52, 144);
                    uu_du::du::ha667a9e24cfc9f10(&v39, &v10, a2, v7, a4, a5);
                    v105 = *((int128_t *)&v39);
                    v106 = CmpEQV(v105, 2);
                    v107 = (long long)(&v40)[8];
                    if (UnaryOp GetMSBs == 65535)
                        goto LABEL_4f2921;
                    v108 = (long long)v40;
                    v109 = *((int128_t *)&v42);
                    v110 = *((int128_t *)&v43);
                    v111 = *((int128_t *)&v44);
                    v112 = *((int128_t *)&v45);
                    v65 = v112;
                    v64 = v111;
                    v63 = v110;
                    v62 = v109;
                    v113 = *((int128_t *)&v46);
                    v114 = *((long long *)&v47);
                    v115 = *((int128_t *)&v48);
                    v116 = (v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115;
                    v117 = *((int128_t *)&v49);
                    v60 = v115;
                    v61 = v117;
                    if (!v1)
                    {
                        v118 = v5;
                        v119 = *((int128_t *)&(&v118->padding_28)[1]);
                        v120 = AddV(v119, v113);
                        v116 = (v116 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v119) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120;
                        *((void*)&(&v118->padding_28)[1]) = v120;
                        *((unsigned long long *)((char *)&v118->field_58 + 8)) = *((long long *)((char *)&v118->field_58 + 8)) + v19;
                    }
                    v121 = v62;
                    v122 = v63;
                    v123 = v64;
                    v83 = (v83 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v123;
                    v124 = v65;
                    v84 = v84 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v124;
                    v17 = v124;
                    v16 = v123;
                    v15 = v122;
                    v13 = v121;
                    v125 = v60;
                    v81 = (v116 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125;
                    v126 = v61;
                    v82 = (((v82 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v117) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v122) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126;
                    v21 = v126;
                    v20 = v125;
                    v11 = v108;
                    v10 = v39;
                    v12 = v107;
                    v18 = v113;
                    v19 = v114;
                    v22 = v7;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v39, a5, &v10);
                    v127 = *((int128_t *)&v39);
                    v128 = CmpEQV(v127, 3);
                    v80 = (((((v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v127) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v128;
                    if (UnaryOp GetMSBs == 65535)
                        goto LABEL_4f22e6;
                    memcpy(&v12, &v41, 144);
                    v11 = (long long)v40;
                    v10 = v39;
                    v107 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v10);
                    goto LABEL_4f2921;
                }
                v99 = *((int128_t *)&v58);
                v80 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                v100 = v5;
                *((long long *)((char *)&v100->field_58 + 8)) = *((long long *)((char *)&v100->field_58 + 8)) + 1;
                v101 = *((int128_t *)&(&v100->padding_28)[1]);
                v102 = AddV(v101, v99);
                v81 = (v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
                *((void*)&(&v100->padding_28)[1]) = v102;
                if (!v0)
                {
                    ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(&v52);
LABEL_4f22e6:
                    ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v23);
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(&v28);
                }
                else
                {
                    memcpy(&v10, &v52, 144);
                    v22 = v7;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&v39, a5, &v10);
                    v103 = *((int128_t *)&v39);
                    v104 = CmpEQV(v103, 3);
                    v80 = (v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
                    if (UnaryOp GetMSBs == 65535)
                        goto LABEL_4f22e6;
                    memcpy(&v12, &v41, 144);
                    v11 = (long long)v40;
                    v10 = v39;
                    v107 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&v10);
LABEL_4f2921:
                    v76 = v6;
                    v76[2] = v107;
                    v76[1] = 0;
                    v76[0] = 2;
                    v75 = v5;
                    ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v23);
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(&v28);
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba(&v8);
                    ::0x4ef600::core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(v75);
                    return v76;
                }
            }
        }
    }
    memcpy(v76, v75, 144);
    return v76;
}
