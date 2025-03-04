long long uu_ls::enter_directory::h306ec720e186c34e(unsigned long long a0[6], struct struct_0 **a1, unsigned long long a2, struct_3 *a3, unsigned long long a4, unsigned long long a5)
{
    struct_1 *v0;  // [bp-0x568]
    unsigned long long v1;  // [sp-0x560]
    char v2;  // [sp-0x549]
    unsigned int v3;  // [sp-0x53c]
    struct struct_0 **v4;  // [sp-0x538]
    char v5;  // [bp-0x530], Other Possible Types: unsigned long
    struct struct_0 **v6;  // [bp-0x528]
    void* v7;  // [bp-0x520], Other Possible Types: char
    struct struct_0 **v8;  // [sp-0x518]
    void* v9;  // [sp-0x510]
    struct struct_0 **v10;  // [sp-0x508]
    char v11;  // [sp-0x500]
    struct struct_0 **v12;  // [bp-0x4f8]
    struct struct_0 **v13;  // [sp-0x4f0], Other Possible Types: unsigned long long
    struct struct_0 **v14;  // [bp-0x4e8], Other Possible Types: unsigned long
    unsigned long long v15;  // [sp-0x4d8]
    struct struct_0 **v16;  // [sp-0x4c8]
    struct struct_0 **v17;  // [sp-0x4c8]
    struct struct_0 **v18;  // [sp-0x4c0], Other Possible Types: unsigned long long
    struct struct_0 **v19;  // [sp-0x4b8]
    char v20;  // [sp-0x4b0], Other Possible Types: unsigned long long
    char v21;  // [bp-0x4a0]
    struct struct_4 **v22;  // [sp-0x490], Other Possible Types: struct struct_0 **
    unsigned long long v23;  // [sp-0x488]
    struct struct_0 **v24;  // [sp-0x480]
    unsigned long long v25;  // [sp-0x478]
    struct struct_0 **v26;  // [sp-0x468]
    struct struct_0 **v27;  // [bp-0x460]
    struct struct_0 **v28;  // [sp-0x45f], Other Possible Types: char
    struct struct_0 **v29;  // [sp-0x458], Other Possible Types: unsigned long long
    struct struct_0 **v30;  // [bp-0x450], Other Possible Types: unsigned long long
    struct struct_0 **v31;  // [sp-0x450]
    struct struct_0 **v32;  // [bp-0x448], Other Possible Types: unsigned long long
    void* v33;  // [sp-0x440], Other Possible Types: struct struct_0 **
    unsigned long long v34;  // [sp-0x438]
    struct struct_0 **v35;  // [sp-0x330]
    char v36;  // [sp-0x328]
    struct struct_0 **v37;  // [sp-0x320]
    struct struct_0 **v38;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v39;  // [sp-0x318]
    struct struct_0 **v40;  // [sp-0x310]
    unsigned long long v41;  // [sp-0x308]
    void* v42;  // [sp-0x300]
    struct struct_0 **v43;  // [sp-0x1f0]
    char v44;  // [bp-0x1e8]
    char v45;  // [bp-0x160]
    struct_1 *v46;  // [bp+0x8]
    char v47;  // [bp+0x10]
    struct struct_0 **v48;  // eax
    unsigned int v49;  // r12d
    unsigned long long v50;  // rax
    void* v51;  // r14
    struct struct_0 **v52;  // xmm0
    struct struct_0 **v53;  // xmm0
    struct struct_0 **v54;  // eax
    struct struct_0 **v55;  // ebp
    unsigned int v56;  // r15d
    struct struct_0 **v57;  // xmm0
    int v58;  // ymm0
    int v59;  // ymm0
    int v60;  // ymm1
    struct struct_0 **v61;  // r12
    struct struct_0 **v62;  // xmm0
    unsigned long long v63;  // rax
    struct struct_0 **v64;  // xmm0
    struct struct_0 **v65;  // xmm1
    unsigned long v66;  // rdx
    struct struct_0 **v67;  // r14
    unsigned long long v69;  // rax
    struct_2 *v70;  // rax
    struct_2 *v71;  // rbx
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
    struct struct_0 **v86;  // rax

    v35 = a1;
    v36 = a2;
    v2 = (char)a3->field_ee;
    if (v2)
    {
        v7 = 0;
        v8 = 8;
        v9 = 0;
        v48 = a3->field_eb;
        v49 = *((char *)&a3->field_ee + 2);
    }
    else
    {
        v6 = a1;
        v3 = a2;
        v50 = ::0x51d470::alloc::alloc::Global::alloc_impl::hf61749d460433fff(608);
        if (!v50)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 608); /* do not return */
        v51 = v50;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v27, &a0[3]);
        v14 = v30;
        v52 = *((int128_t *)&v27);
        v12 = v52;
        v28 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v38, "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d", 1);
        v19 = v40;
        v53 = *((int128_t *)&v38);
        v16 = v53;
        v54 = a3->field_eb;
        v49 = *((char *)&a3->field_ee + 2);
        *((unsigned int *)&v0) = 0;
        v55 = v54;
        v56 = v49;
        uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v38, &v12, &v27, &v16, (unsigned long long)v55, v56, (char)v0);
        std::path::Path::join::hb2350fb5456ebb1b(&v22, a0[4], a0[5], "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v17 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v27, "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v14 = v30;
        v57 = *((int128_t *)&v28);
        v59 = ((v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
        v12 = v57;
        *((unsigned int *)&v0) = 0;
        uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v27, &v22, &v16, &v12, (unsigned long long)v55, v56, (char)v0);
        memcpy(v51, &v38, 304);
        memcpy(v51 + 304, &v27, 304);
        v48 = (unsigned int)(alloc::slice::hack::into_vec::hcef9121dd0ef8e55(&v7, v51, 2) & 0xffffffffffffff00 | (unsigned long long)v55);
    }
    v10 = v6;
    v11 = v3;
    v6 = v48;
    v3 = v49;
    while (true)
    {
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&v16, &v10);
        if (!v17)
            break;
        v61 = v19;
        if (!v12)
        {
            v26 = v61;
            v63 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a4);
            if (v63)
            {
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v63);
                ::0x51a6d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&v26);
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v10);
                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                return v67;
            }
            v29 = v61;
            *((char *)&v28) = 1;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            v4 = uucore::util_name::h60d842bf27b05e82();
            v5 = v66;
            v22 = &v4;
            v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
            v24 = &v27;
            v25 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
            v38 = &g_612588;
            v38 = 3;
            v42 = 0;
            v40 = &v22;
            v41 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v38);
            ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v27);
        }
        else
        {
            v15 = *((long long *)&v21);
            v62 = *((int128_t *)&v20);
            v59 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
            v14 = v62;
            v12 = v18;
            v13 = v61;
            if (!(char)uu_ls::should_display::h04a8ace30b4ea77e(&v12, a3))
            {
                ::0x51a620::core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h7ea99ec2005f12cb(&v12);
            }
            else
            {
                std::fs::DirEntry::path::h5b1bdb0f1090af27(&v22, &v12);
                v34 = v15;
                v64 = *((int128_t *)&v12);
                v59 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                v65 = *((int128_t *)&v14);
                v60 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                v32 = v65;
                v29 = v64;
                v28 = 1;
                v38 = 0x8000000000000000;
                *((unsigned int *)&v0) = 0;
                uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v45, &v22, &v27, &v38, (int)v6, v3, (char)v0);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&v7, &v45);
            }
        }
    }
    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v10);
    uu_ls::sort_entries::h9b56d1e19b40eaef(v8, v9, a3);
    if (a3->field_f0 == 1 || a3->field_ea)
    {
        uu_ls::return_total::h87a8c45b5866afa6(&v27, v8, v9, a3, a4);
        v67 = v29;
        if (v38 == 0x8000000000000000)
        {
            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
            return v67;
        }
        v38 = v28;
        v38 = v67;
        v40 = v31;
        v17 = v67;
        v18 = v40;
        v12 = &v16;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v28 = &g_423c10;
        v29 = 1;
        v33 = 0;
        v31 = &v12;
        v32 = 1;
        v69 = std::io::Write::write_fmt::h51abc44b465d2e67(a4, &v27);
        if (v69)
        {
            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v69);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v38);
            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
            return v67;
        }
        if ((&a3->padding_ec)[1])
            uu_ls::dired::add_total::hcf0e71387fbf703c(v46, v40);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v38);
    }
    v67 = uu_ls::display_items::hbe9721d3f3017f49(v8, v9, a3, a4, v46, *((long long *)&v47));
    if (v67)
    {
        ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
        return v67;
    }
    if (a3->field_e6)
    {
        v12 = v8;
        v13 = 0x130 * v9 + (char *)v12;
        v14 = (!v2) * 2;
        v70 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h2db1f8cc0d321202(&v12);
        if (v70)
        {
            v71 = v70;
            *((char *)&v6) = (&a3->padding_ec)[1];
            do
            {
                v72 = &v71->padding_0[24];
                std::fs::read_dir::h9d938750fa0d5aed(&v10, &v71->padding_0[24]);
                v73 = v11;
                if (v73 != 2)
                {
                    v4 = v10;
                    v5 = v73;
                    uucore::features::fs::FileInformation::from_path::h569773e274f836e3(&v27, v72, v71->field_128);
                    v76 = v29;
                    if (v28)
                    {
                        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v76);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v4);
                        ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                        return v67;
                    }
                    memcpy(&v44, &v31, 136);
                    v43 = v76;
                    if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h5dc8e28f7c38d974(a5, &v43))
                    {
                        v27 = &g_6125b8;
                        v29 = 1;
                        v30 = 8;
                        *((uint128_t *)&v32) = 0;
                        v79 = std::io::Write::write_fmt::h51abc44b465d2e67(a4, &v27);
                        if (v79)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v79);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v4);
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v67;
                        }
                        if ((char)v6)
                        {
                            v46->field_30 = 2;
                            v67 = uu_ls::dired::indent::h541a64321517b8c5(a4);
                            if (v67)
                            {
                                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v4);
                                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                                return v67;
                            }
                            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v27, v71->field_20, v71->field_28);
                            v81 = v30;
                            ::0x51a890::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&v27);
                            uu_ls::dired::calculate_subdired::h85725549554709aa(v46, v81);
                            v82 = v46;
                            v82->field_30 = v82->field_30 + v81 + 3;
                        }
                        uu_ls::show_dir_name::h15f4c75d324b24c3(v71, a4, a3);
                        v28 = &g_6125b8;
                        v29 = 1;
                        v30 = 8;
                        v59 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((uint128_t *)&v32) = 0;
                        v83 = std::io::Write::write_fmt::h51abc44b465d2e67(a4, &v27);
                        if (v83)
                        {
                            v86 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v83);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v4);
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v67;
                        }
                        v84 = v5;
                        v1 = *((long long *)&v47);
                        v0 = v46;
                        v67 = uu_ls::enter_directory::h306ec720e186c34e(v71, v4, v84, a3, a4, a5);
                        if (v67)
                        {
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v67;
                        }
                        uucore::features::fs::FileInformation::from_path::h569773e274f836e3(&v27, v72, v71->field_128);
                        v85 = v29;
                        if (v28)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v85);
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v67;
                        }
                        memcpy(&v37, &v31, 136);
                        v37 = v85;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h810d94f18f4ab17c(a5, &v38);
                    }
                    else
                    {
                        v78 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a4);
                        if (v78)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v78);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v4);
                            ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                            return v67;
                        }
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v38, v72);
                        v32 = v40;
                        v80 = *((int128_t *)&v38);
                        v59 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                        v29 = v80;
                        *((char *)&v28) = 5;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2);
                        v22 = uucore::util_name::h60d842bf27b05e82();
                        v23 = v66;
                        v16 = &v22;
                        v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                        v19 = &v27;
                        v20 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                        v37 = &g_612588;
                        v39 = 3;
                        v42 = 0;
                        v40 = &v16;
                        v41 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v38);
                        ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v27);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v4);
                    }
                }
                else
                {
                    v74 = v10;
                    v4 = v74;
                    v75 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a4);
                    if (v75)
                    {
                        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v75);
                        ::0x51a6d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&v4);
                        ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                        return v67;
                    }
                    v16 = v74;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v38, v72);
                    v33 = v40;
                    v77 = *((int128_t *)&v38);
                    v59 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                    v30 = v77;
                    v29 = v74;
                    v28 = v71->field_129;
                    *((char *)&v28) = 2;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2 - (v28 < 1));
                    v22 = uucore::util_name::h60d842bf27b05e82();
                    v23 = v66;
                    v16 = &v22;
                    v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                    v19 = &v27;
                    v20 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                    v37 = &g_612588;
                    v39 = 3;
                    v42 = 0;
                    v40 = &v16;
                    v41 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v38);
                    ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v27);
                }
            } while ((v71 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h2db1f8cc0d321202(&v12), v71));
        }
    }
    ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
    return 0;
}
