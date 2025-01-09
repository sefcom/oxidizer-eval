long long uu_ls::enter_directory::h306ec720e186c34e(unsigned long long a0[6], struct struct_0 **a1, unsigned long long a2, struct_2 *a3, unsigned long long a4, unsigned long long a5)
{
    struct_1 *v0;  // [bp-0x568]
    unsigned long long v1;  // [sp-0x560]
    char v2;  // [sp-0x549]
    unsigned int v3;  // [sp-0x53c]
    struct struct_0 **v4;  // [sp-0x538]
    char v5;  // [bp-0x530], Other Possible Types: unsigned long
    struct struct_0 **v6;  // [bp-0x528]
    void* v7;  // [sp-0x520], Other Possible Types: char
    struct struct_0 **v8;  // [sp-0x518]
    void* v9;  // [sp-0x510]
    struct struct_0 **v10;  // [sp-0x508]
    char v11;  // [sp-0x500]
    struct struct_0 **v12;  // [bp-0x4f8]
    struct struct_0 **v13;  // [sp-0x4f0], Other Possible Types: unsigned long long
    struct struct_0 **v14;  // [bp-0x4e8], Other Possible Types: unsigned long
    unsigned long long v15;  // [sp-0x4d8]
    struct struct_0 **v16;  // [bp-0x4c8]
    struct struct_0 **v17;  // [sp-0x4c0], Other Possible Types: unsigned long long
    struct struct_0 **v18;  // [sp-0x4b8]
    char v19;  // [bp-0x4b0], Other Possible Types: unsigned long long
    char v20;  // [bp-0x4a0]
    struct struct_3 **v21;  // [bp-0x490], Other Possible Types: struct struct_0 **
    unsigned long long v22;  // [sp-0x488]
    struct struct_0 **v23;  // [sp-0x480]
    unsigned long long v24;  // [sp-0x478]
    struct_2 *v25;  // [sp-0x470]
    struct struct_0 **v26;  // [sp-0x468]
    struct struct_0 **v27;  // [bp-0x460], Other Possible Types: char
    char v28;  // [sp-0x45f]
    struct struct_0 **v29;  // [sp-0x458], Other Possible Types: unsigned long long
    struct struct_0 **v30;  // [sp-0x450], Other Possible Types: unsigned long long
    struct struct_0 **v31;  // [bp-0x448], Other Possible Types: unsigned long long
    void* v32;  // [sp-0x440], Other Possible Types: struct struct_0 **
    unsigned long long v33;  // [sp-0x438]
    struct struct_0 **v34;  // [sp-0x330]
    char v35;  // [sp-0x328]
    struct struct_0 **v36;  // [bp-0x320], Other Possible Types: unsigned long long
    struct struct_0 **v37;  // [sp-0x318], Other Possible Types: unsigned long long
    struct struct_0 **v38;  // [sp-0x310]
    unsigned long long v39;  // [sp-0x308]
    void* v40;  // [sp-0x300]
    struct struct_0 **v41;  // [sp-0x1f0]
    char v42;  // [bp-0x1e8]
    char v43;  // [bp-0x160]
    struct_1 *v44;  // [bp+0x8]
    char v45;  // [bp+0x10]
    struct struct_0 **v46;  // eax
    unsigned int v47;  // r12d
    struct_2 *v48;  // r15
    unsigned long long v49;  // rax
    void* v50;  // r14
    struct struct_0 **v51;  // xmm0
    struct struct_0 **v52;  // xmm0
    unsigned int v53;  // eax
    unsigned int v54;  // ebp
    unsigned int v55;  // r15d
    struct struct_0 **v56;  // xmm0
    int v57;  // ymm0
    int v58;  // ymm0
    int v59;  // ymm1
    struct struct_0 **v60;  // r12
    struct struct_0 **v61;  // xmm0
    unsigned long long v62;  // rax
    struct struct_0 **v63;  // xmm0
    struct struct_0 **v64;  // xmm1
    unsigned long v65;  // rdx
    struct struct_0 **v66;  // rax
    struct_2 *v67;  // r13
    unsigned long long v69;  // rax
    struct_4 *v70;  // rax
    unsigned long long v71;  // rbp
    char v72;  // al
    struct struct_0 **v73;  // r14
    unsigned long long v74;  // rax
    struct struct_0 **v75;  // r14
    struct struct_0 **v76;  // xmm0
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax
    struct struct_0 **v79;  // xmm0
    unsigned long long v80;  // r14
    struct_1 *v81;  // rcx
    unsigned long long v82;  // rax
    unsigned long long v83;  // rdx
    struct struct_0 **v84;  // rbx

    v34 = a1;
    v35 = a2;
    v2 = (char)a3->field_ee;
    v25 = a3;
    if (v2)
    {
        v7 = 0;
        v8 = 8;
        v9 = 0;
        v46 = a3->field_eb;
        v47 = *((char *)&a3->field_ee + 2);
    }
    else
    {
        v48 = a3;
        v6 = a1;
        v3 = a2;
        v49 = ::0x51d470::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v49)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 608); /* do not return */
        v50 = v49;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v27, &a0[3]);
        v14 = v30;
        v51 = *((int128_t *)&v27);
        v12 = v51;
        v27 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v36, "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d", 1);
        v18 = v38;
        v52 = *((int128_t *)&v36);
        v16 = v52;
        v53 = v48->field_eb;
        v47 = *((char *)&v48->field_ee + 2);
        *((unsigned int *)&v0) = 0;
        v54 = v53;
        v55 = v47;
        uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v36, &v12, &v27, &v16, v54, v55);
        std::path::Path::join::hb2350fb5456ebb1b(&v21, a0[4], a0[5], "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v16 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v27, "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v14 = v30;
        v56 = *((int128_t *)&v27);
        v58 = ((v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
        v12 = v56;
        *((unsigned int *)&v0) = 0;
        uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v27, &v21, &v16, &v12, v54, v55);
        memcpy(v50, &v36, 304);
        memcpy(v50 + 304, &v27, 304);
        v46 = (unsigned int)(alloc::slice::hack::into_vec::hcef9121dd0ef8e55(&v7, v50, 2) & 0xffffffffffffff00 | v54);
    }
    v10 = v6;
    v11 = v3;
    v6 = v46;
    v3 = v47;
    while (true)
    {
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&v16, &v10);
        if (!v16)
            break;
        v60 = v18;
        if (!v12)
        {
            v26 = v60;
            v62 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a4);
            if (v62)
            {
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v62);
                ::0x51a6d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&v26);
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c();
                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                return v66;
            }
            v29 = v60;
            v27 = 1;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            v4 = uucore::util_name::h60d842bf27b05e82();
            v5 = v65;
            v21 = &v4;
            v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
            v23 = &v27;
            v24 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
            v36 = &g_612588;
            v37 = 3;
            v40 = 0;
            v38 = &v21;
            v39 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v36);
            ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v27);
        }
        else
        {
            v15 = *((long long *)&v20);
            v61 = *((int128_t *)&v19);
            v58 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
            v14 = v61;
            v12 = v17;
            v13 = v60;
            if (!(char)uu_ls::should_display::h04a8ace30b4ea77e(&v12, v25))
            {
                ::0x51a620::core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h7ea99ec2005f12cb(&v12);
            }
            else
            {
                std::fs::DirEntry::path::h5b1bdb0f1090af27(&v21, &v12);
                v33 = v15;
                v63 = *((int128_t *)&v12);
                v58 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
                v64 = *((int128_t *)&v14);
                v59 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                v31 = v64;
                v29 = v63;
                v27 = 1;
                v36 = 0x8000000000000000;
                *((unsigned int *)&v0) = 0;
                uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v43, &v21, &v27, &v36, (int)v6, v3);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&v7, &v43);
            }
        }
    }
    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c();
    v67 = v25;
    uu_ls::sort_entries::h9b56d1e19b40eaef(v8, v9, v67);
    if (v67->field_f0 == 1 || v67->field_ea)
    {
        uu_ls::return_total::h87a8c45b5866afa6(&v27, v8, v9, v67, a4);
        v66 = v29;
        if (v36 == 0x8000000000000000)
        {
            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
            return v66;
        }
        v36 = v27;
        v37 = v66;
        v38 = v30;
        v16 = v66;
        v17 = v38;
        v12 = &v16;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v27 = &g_423c10;
        v29 = 1;
        v32 = 0;
        v30 = &v12;
        v31 = 1;
        v69 = std::io::Write::write_fmt::h51abc44b465d2e67(a4, &v27);
        if (v69)
        {
            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v69);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v36);
            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
            return v66;
        }
        if ((&v67->padding_ec)[1])
            uu_ls::dired::add_total::hcf0e71387fbf703c(v44, v38);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v36);
    }
    v66 = uu_ls::display_items::hbe9721d3f3017f49(v8, v9, v67, a4, v44, *((long long *)&v45));
    if (v66)
    {
        ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
        return v66;
    }
    if (v67->field_e6)
    {
        v12 = v8;
        v13 = 0x130 * v9 + (char *)v12;
        v14 = (!v2) * 2;
        v70 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h2db1f8cc0d321202(&v12);
        if (v70)
        {
            *((char *)&v6) = (&v67->padding_ec)[1];
            do
            {
                v71 = &v70->padding_0[24];
                std::fs::read_dir::h9d938750fa0d5aed(&v10, &v70->padding_0[24]);
                v72 = v11;
                if (v72 != 2)
                {
                    v4 = v10;
                    v5 = v72;
                    uucore::features::fs::FileInformation::from_path::h569773e274f836e3(&v27, v71, v70->field_128);
                    v75 = v29;
                    if (v27)
                    {
                        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v75);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c();
                        ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                        return v66;
                    }
                    memcpy(&v42, &v30, 136);
                    v41 = v75;
                    if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h5dc8e28f7c38d974(a5, &v41))
                    {
                        v27 = &g_6125b8;
                        v29 = 1;
                        v30 = 8;
                        *((uint128_t *)&v31) = 0;
                        v78 = std::io::Write::write_fmt::h51abc44b465d2e67(a4, &v27);
                        if (v78)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v78);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c();
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v66;
                        }
                        if ((char)v6)
                        {
                            v44->field_30 = 2;
                            v66 = uu_ls::dired::indent::h541a64321517b8c5(a4);
                            if (v66)
                            {
                                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c();
                                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                                return v66;
                            }
                            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v27, v70->field_20, v70->field_28);
                            v80 = v30;
                            ::0x51a890::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&v27);
                            uu_ls::dired::calculate_subdired::h85725549554709aa(v44, v80);
                            v81 = v44;
                            v81->field_30 = v81->field_30 + v80 + 3;
                        }
                        uu_ls::show_dir_name::h15f4c75d324b24c3(v70, a4, v67);
                        v27 = &g_6125b8;
                        v29 = 1;
                        v30 = 8;
                        v58 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((uint128_t *)&v31) = 0;
                        v82 = std::io::Write::write_fmt::h51abc44b465d2e67(a4, &v27);
                        if (v82)
                        {
                            v66 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v82);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c();
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v66;
                        }
                        v83 = v5;
                        v1 = *((long long *)&v45);
                        v0 = v44;
                        v66 = uu_ls::enter_directory::h306ec720e186c34e(v70, v4, v83, v67, a4, a5);
                        if (v66)
                        {
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v66;
                        }
                        uucore::features::fs::FileInformation::from_path::h569773e274f836e3(&v27, v71, v70->field_128);
                        v84 = v29;
                        if (v27)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v84);
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v66;
                        }
                        memcpy(&v36, &v30, 136);
                        v36 = v84;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h810d94f18f4ab17c(a5, &v36);
                    }
                    else
                    {
                        v77 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a4);
                        if (v77)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v77);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c();
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v66;
                        }
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v36, v71);
                        v31 = v38;
                        v79 = *((int128_t *)&v36);
                        v58 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
                        v29 = v79;
                        v27 = 5;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2);
                        v21 = uucore::util_name::h60d842bf27b05e82();
                        v22 = v65;
                        v16 = &v21;
                        v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                        v18 = &v27;
                        v19 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                        v36 = &g_612588;
                        v37 = 3;
                        v40 = 0;
                        v38 = &v16;
                        v39 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v36);
                        ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v27);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c();
                    }
                }
                else
                {
                    v73 = v10;
                    v4 = v73;
                    v74 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a4);
                    if (v74)
                    {
                        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v74);
                        ::0x51a6d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&v4);
                        ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                        return v66;
                    }
                    v16 = v73;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v36, v71);
                    v32 = v38;
                    v76 = *((int128_t *)&v36);
                    v58 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                    v30 = v76;
                    v29 = v73;
                    v28 = v70->field_129;
                    v27 = 2;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2 - (v28 < 1));
                    v21 = uucore::util_name::h60d842bf27b05e82();
                    v22 = v65;
                    v16 = &v21;
                    v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                    v18 = &v27;
                    v19 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                    v36 = &g_612588;
                    v37 = 3;
                    v40 = 0;
                    v38 = &v16;
                    v39 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v36);
                    ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v27);
                }
            } while ((v70 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h2db1f8cc0d321202(&v12), v70));
        }
    }
    ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
    return 0;
}
