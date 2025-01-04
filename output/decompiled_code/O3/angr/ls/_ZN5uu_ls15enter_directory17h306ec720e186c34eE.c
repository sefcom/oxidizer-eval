long long uu_ls::enter_directory::h306ec720e186c34e(unsigned long long a0[6], struct struct_0 **a1, unsigned long long a2, struct_2 *a3, unsigned long long a4, unsigned long long a5)
{
    struct_1 *v0;  // [bp-0x568]
    char v1;  // [sp-0x549]
    unsigned int v2;  // [sp-0x53c]
    struct struct_0 **v3;  // [sp-0x538]
    char v4;  // [bp-0x530], Other Possible Types: unsigned long
    struct struct_0 **v5;  // [bp-0x528]
    void* v6;  // [sp-0x520], Other Possible Types: char
    struct struct_0 **v7;  // [sp-0x518]
    void* v8;  // [sp-0x510]
    struct struct_0 **v9;  // [sp-0x508]
    char v10;  // [sp-0x500]
    struct struct_0 **v11;  // [bp-0x4f8]
    struct struct_0 **v12;  // [sp-0x4f0], Other Possible Types: unsigned long long
    struct struct_0 **v13;  // [bp-0x4e8], Other Possible Types: unsigned long
    unsigned long long v14;  // [sp-0x4d8]
    struct struct_0 **v15;  // [bp-0x4c8]
    struct struct_0 **v16;  // [sp-0x4c0], Other Possible Types: unsigned long long
    struct struct_0 **v17;  // [sp-0x4b8]
    char v18;  // [bp-0x4b0], Other Possible Types: unsigned long long
    char v19;  // [bp-0x4a0]
    struct struct_0 **v20;  // [bp-0x490]
    unsigned long long v21;  // [sp-0x488]
    struct struct_0 **v22;  // [sp-0x480]
    unsigned long long v23;  // [sp-0x478]
    struct_2 *v24;  // [sp-0x470]
    struct struct_0 **v25;  // [sp-0x468]
    struct struct_0 **v26;  // [bp-0x460], Other Possible Types: char
    char v27;  // [sp-0x45f]
    struct struct_0 **v28;  // [sp-0x458], Other Possible Types: unsigned long long
    struct struct_0 **v29;  // [sp-0x450], Other Possible Types: unsigned long long
    struct struct_0 **v30;  // [bp-0x448], Other Possible Types: unsigned long long
    void* v31;  // [sp-0x440], Other Possible Types: struct struct_0 **
    unsigned long long v32;  // [sp-0x438]
    struct struct_0 **v33;  // [sp-0x330]
    char v34;  // [sp-0x328]
    struct struct_0 **v35;  // [bp-0x320], Other Possible Types: unsigned long long
    struct struct_0 **v36;  // [sp-0x318], Other Possible Types: unsigned long long
    struct struct_0 **v37;  // [sp-0x310]
    unsigned long long v38;  // [sp-0x308]
    void* v39;  // [sp-0x300]
    struct struct_0 **v40;  // [sp-0x1f0]
    char v41;  // [bp-0x1e8]
    char v42;  // [bp-0x160]
    struct_1 *v43;  // [bp+0x8]
    char v44;  // [bp+0x10]
    struct struct_0 **v45;  // eax
    unsigned int v46;  // r12d
    struct_2 *v47;  // r15
    unsigned long long v48;  // rax
    void* v49;  // r14
    struct struct_0 **v50;  // xmm0
    struct struct_0 **v51;  // xmm0
    struct struct_0 **v52;  // eax
    struct struct_0 **v53;  // ebp
    unsigned int v54;  // r15d
    struct struct_0 **v55;  // xmm0
    int v56;  // ymm0
    int v57;  // ymm0
    int v58;  // ymm1
    struct struct_0 **v59;  // r12
    struct struct_0 **v60;  // xmm0
    unsigned long long v61;  // rsi
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rax
    struct struct_0 **v64;  // xmm0
    struct struct_0 **v65;  // xmm1
    struct struct_0 **v66;  // rax
    struct_2 *v67;  // r13
    unsigned long long v69;  // rax
    struct_3 *v70;  // rax
    unsigned long long v71;  // rdx
    unsigned long long v72;  // rbp
    char v73;  // al
    struct struct_0 **v74;  // r14
    unsigned long long v75;  // rax
    struct struct_0 **v76;  // r14
    struct struct_0 **v77;  // xmm0
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    struct struct_0 **v80;  // xmm0
    unsigned long long v81;  // r14
    struct_1 *v82;  // rcx
    unsigned long long v83;  // rax
    unsigned long long v84;  // rdx
    struct struct_0 **v85;  // rbx

    v33 = a1;
    v34 = a2;
    v1 = (char)a3->field_ee;
    v24 = a3;
    if (v1)
    {
        v6 = 0;
        v7 = 8;
        v8 = 0;
        v45 = a3->field_eb;
        v46 = *((char *)&a3->field_ee + 2);
    }
    else
    {
        v47 = a3;
        v5 = a1;
        v2 = a2;
        v48 = ::0x51d470::alloc::alloc::Global::alloc_impl::hf61749d460433fff(608);
        if (!v48)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v49 = v48;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v26, &a0[3]);
        v13 = v29;
        v50 = *((int128_t *)&v26);
        v11 = v50;
        v26 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v35, "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d", 1);
        v17 = v37;
        v51 = *((int128_t *)&v35);
        v15 = v51;
        v52 = v47->field_eb;
        v46 = *((char *)&v47->field_ee + 2);
        *((int *)&v0) = 0;
        v53 = v52;
        v54 = v46;
        uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v35, &v11, &v26, &v15, (unsigned long long)v53, v54);
        std::path::Path::join::hb2350fb5456ebb1b(&v20, a0[4], a0[5], "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v15 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v26, "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v13 = v29;
        v55 = *((int128_t *)&v26);
        v57 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
        v11 = v55;
        *((int *)&v0) = 0;
        uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v26, &v20, &v15, &v11, (unsigned long long)v53, v54);
        memcpy(v49, &v35, 304);
        memcpy(v49 + 304, &v26, 304);
        a2 = v2;
        v45 = (unsigned int)(alloc::slice::hack::into_vec::hcef9121dd0ef8e55(&v6, v49, 2) | -0x100 | (unsigned long long)v53);
    }
    v9 = v5;
    v10 = a2;
    v5 = v45;
    v2 = v46;
    while (true)
    {
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&v15, &v9, a2);
        if (!v15)
            break;
        v59 = v17;
        if (!v11)
        {
            v25 = v59;
            v63 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a4, v61, v62);
            if (v63)
            {
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v63);
                ::0x51a6d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&v25);
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v9);
                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
                return v66;
            }
            v28 = v59;
            v26 = 1;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
            v3 = uucore::util_name::h60d842bf27b05e82();
            v4 = v62;
            v20 = &v3;
            v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
            v22 = &v26;
            v23 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
            v35 = &g_612588;
            v36 = 3;
            v39 = 0;
            v37 = &v20;
            v38 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v61, v62);
            ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v26);
        }
        else
        {
            v14 = *((long long *)&v19);
            v60 = *((int128_t *)&v18);
            v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
            v13 = v60;
            v11 = v16;
            v12 = v59;
            if (!(char)uu_ls::should_display::h04a8ace30b4ea77e(&v11, v24))
            {
                ::0x51a620::core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h7ea99ec2005f12cb(&v11);
            }
            else
            {
                std::fs::DirEntry::path::h5b1bdb0f1090af27(&v20, &v11);
                v32 = v14;
                v64 = *((int128_t *)&v11);
                v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                v65 = *((int128_t *)&v13);
                v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                v30 = v65;
                v28 = v64;
                v26 = 1;
                v35 = 0x8000000000000000;
                *((int *)&v0) = 0;
                uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v42, &v20, &v26, &v35, (int)v5, v2);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&v6, &v42, v62);
            }
        }
    }
    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v9);
    v67 = v24;
    uu_ls::sort_entries::h9b56d1e19b40eaef(v7, v8, v67);
    if (v67->field_f0 == 1 || v67->field_ea)
    {
        uu_ls::return_total::h87a8c45b5866afa6(&v26, v7, v8, v67, a4);
        v66 = v28;
        if (v35 == 0x8000000000000000)
        {
            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
            return v66;
        }
        v35 = v26;
        v36 = v66;
        v37 = v29;
        v15 = v66;
        v16 = v37;
        v11 = &v15;
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v26 = &g_423c10;
        v28 = 1;
        v31 = 0;
        v29 = &v11;
        v30 = 1;
        v69 = std::io::Write::write_fmt::h51abc44b465d2e67(a4, &v26);
        if (v69)
        {
            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v69);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v35);
            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
            return v66;
        }
        if ((&v67->padding_ec)[1])
            uu_ls::dired::add_total::hcf0e71387fbf703c(v43, v37);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v35);
    }
    v66 = uu_ls::display_items::hbe9721d3f3017f49(v7, v8, v67, a4, v43, *((long long *)&v44));
    if (v66)
    {
        ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
        return v66;
    }
    if (v67->field_e6)
    {
        v11 = v7;
        v12 = 0x130 * v8 + (char *)v11;
        v13 = (unsigned int)(-0x100 | !v1) * 2;
        v70 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h2db1f8cc0d321202(&v11);
        if (v70)
        {
            *((char *)&v5) = (&v67->padding_ec)[1];
            do
            {
                v72 = &v70->padding_0[24];
                std::fs::read_dir::h9d938750fa0d5aed(&v9, &v70->padding_0[24], v71);
                v73 = v10;
                if (v73 != 2)
                {
                    v3 = v9;
                    v4 = v73;
                    uucore::features::fs::FileInformation::from_path::h569773e274f836e3(&v26, v72, v70->field_128);
                    v76 = v28;
                    if (v26)
                    {
                        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v76);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v3);
                        ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
                        return v66;
                    }
                    memcpy(&v41, &v29, 136);
                    v40 = v76;
                    if (!(char)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h5dc8e28f7c38d974(a5, &v40))
                    {
                        v26 = &g_6125b8;
                        v28 = 1;
                        v29 = 8;
                        *((int128_t *)&v30) = 0;
                        v79 = std::io::Write::write_fmt::h51abc44b465d2e67(a4, &v26);
                        if (v79)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v79);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v3);
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
                            return v66;
                        }
                        if ((char)v5)
                        {
                            v43->field_30 = 2;
                            v66 = uu_ls::dired::indent::h541a64321517b8c5(a4);
                            if (v66)
                            {
                                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v3);
                                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
                                return v66;
                            }
                            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v26, v70->field_20, v70->field_28);
                            v81 = v29;
                            ::0x51a890::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&v26);
                            uu_ls::dired::calculate_subdired::h85725549554709aa(v43, v81);
                            v82 = v43;
                            v82->field_30 = v82->field_30 + v81 + 3;
                        }
                        uu_ls::show_dir_name::h15f4c75d324b24c3(v70, a4, v67);
                        v26 = &g_6125b8;
                        v28 = 1;
                        v29 = 8;
                        v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((int128_t *)&v30) = 0;
                        v83 = std::io::Write::write_fmt::h51abc44b465d2e67(a4, &v26);
                        if (v83)
                        {
                            v66 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v83);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v3);
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
                            return v66;
                        }
                        v84 = v4;
                        v0 = v43;
                        v66 = uu_ls::enter_directory::h306ec720e186c34e(v70, v3, v84, v67, a4, a5, v0, *((long long *)&v44));
                        if (v66)
                        {
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
                            return v66;
                        }
                        uucore::features::fs::FileInformation::from_path::h569773e274f836e3(&v26, v72, v70->field_128);
                        v85 = v28;
                        if (v26)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v85);
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
                            return v66;
                        }
                        memcpy(&v35, &v29, 136);
                        v35 = v85;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h810d94f18f4ab17c(a5, &v35);
                    }
                    else
                    {
                        v78 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a4, v61, v62);
                        if (v78)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v78);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v3);
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
                            return v66;
                        }
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v35, v72);
                        v30 = v37;
                        v80 = *((int128_t *)&v35);
                        v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                        v28 = v80;
                        v26 = 5;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
                        v20 = uucore::util_name::h60d842bf27b05e82();
                        v21 = v62;
                        v15 = &v20;
                        v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                        v17 = &v26;
                        v18 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                        v35 = &g_612588;
                        v36 = 3;
                        v39 = 0;
                        v37 = &v15;
                        v38 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v61, v62);
                        ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v26);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v3);
                    }
                }
                else
                {
                    v74 = v9;
                    v3 = v74;
                    v75 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a4, v61, v62);
                    if (v75)
                    {
                        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v75);
                        ::0x51a6d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&v3);
                        ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
                        return v66;
                    }
                    v15 = v74;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v35, v72);
                    v31 = v37;
                    v77 = *((int128_t *)&v35);
                    v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                    v29 = v77;
                    v28 = v74;
                    v27 = v70->field_129;
                    v26 = 2;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
                    v20 = uucore::util_name::h60d842bf27b05e82();
                    v21 = v62;
                    v15 = &v20;
                    v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                    v17 = &v26;
                    v18 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                    v35 = &g_612588;
                    v36 = 3;
                    v39 = 0;
                    v37 = &v15;
                    v38 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v61, v62);
                    ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v26);
                }
            } while ((v70 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h2db1f8cc0d321202(&v11), v70));
        }
    }
    ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v6);
    return 0;
}
