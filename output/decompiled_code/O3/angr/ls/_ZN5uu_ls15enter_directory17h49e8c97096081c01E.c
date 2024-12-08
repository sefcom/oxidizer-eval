long long uu_ls::enter_directory::h49e8c97096081c01(unsigned long long a0[6], unsigned long long a1, unsigned long long a2, char a3[249], unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0[7];  // [bp-0x568], Other Possible Types: unsigned int
    char v1;  // [sp-0x549]
    unsigned int v2;  // [sp-0x53c]
    unsigned long v3;  // [sp-0x538], Other Possible Types: unsigned long long
    char v4;  // [bp-0x530], Other Possible Types: unsigned long
    char v5;  // [bp-0x528], Other Possible Types: unsigned int, unsigned long
    void* v6;  // [sp-0x520], Other Possible Types: char
    unsigned long long v7;  // [sp-0x518]
    void* v8;  // [sp-0x510]
    unsigned long v9;  // [sp-0x508], Other Possible Types: unsigned long long
    char v10;  // [sp-0x500]
    unsigned long long v11[3];  // [bp-0x4f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0x4f0]
    int v13;  // [bp-0x4e8], Other Possible Types: unsigned long
    unsigned long long v14;  // [sp-0x4d8]
    void* v15;  // [bp-0x4c8], Other Possible Types: unsigned long long (64 bits)[3], unsigned long long
    unsigned long long v16;  // [sp-0x4c0]
    unsigned long long v17;  // [sp-0x4b8]
    char v18;  // [bp-0x4b0], Other Possible Types: unsigned long long
    char v19;  // [bp-0x4a0]
    unsigned long long v20[3];  // [bp-0x490], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x488]
    unsigned long long v22;  // [sp-0x480]
    unsigned long long v23;  // [sp-0x478]
    char v24[249];  // [sp-0x470]
    unsigned long v25;  // [sp-0x468], Other Possible Types: unsigned long long
    char v26;  // [bp-0x460], Other Possible Types: unsigned long
    char v27;  // [sp-0x45f]
    int v28;  // [sp-0x458], Other Possible Types: unsigned long long
    int v29;  // [sp-0x450], Other Possible Types: unsigned long, unsigned long long
    int v30;  // [bp-0x448], Other Possible Types: unsigned long long
    void* v31;  // [sp-0x440], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x438]
    unsigned long long v33;  // [sp-0x330]
    char v34;  // [sp-0x328]
    char v35;  // [bp-0x320], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v36;  // [sp-0x318]
    unsigned long v37;  // [sp-0x310], Other Possible Types: unsigned long long
    unsigned long long v38;  // [sp-0x308]
    void* v39;  // [sp-0x300]
    unsigned long v40;  // [sp-0x1f0], Other Possible Types: unsigned long long
    char v41;  // [bp-0x1e8]
    char v42;  // [bp-0x160]
    unsigned long long v43[7];  // [bp+0x8]
    char v44;  // [bp+0x10]
    unsigned int v45;  // eax
    unsigned int v46;  // r12d
    char v47[249];  // r15
    unsigned long long v48;  // rax
    void* v49;  // r14
    int v50;  // xmm0
    int v51;  // xmm0
    unsigned int v52;  // eax
    unsigned int v53;  // ebp
    unsigned int v54;  // r15d
    int v55;  // xmm0
    int v56;  // ymm0
    int v57;  // ymm0
    int v58;  // ymm1
    unsigned long long v59;  // r12
    int v60;  // xmm0
    unsigned long long v61;  // rsi
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rax
    int v64;  // xmm0
    int v65;  // xmm1
    void* v66;  // rax
    char v67[249];  // r13
    unsigned long long v68[7];  // r15
    unsigned long long v70;  // rax
    unsigned long long v71;  // rcx
    unsigned long long v72;  // rcx
    struct_0 *v73;  // rax
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rbp
    char v76;  // al
    unsigned long long v77;  // r14
    unsigned long long v78;  // rax
    unsigned long long v79;  // r14
    int v80;  // xmm0
    unsigned long long v81;  // rax
    unsigned long long v82;  // rax
    int v83;  // xmm0
    unsigned long long v84;  // r14
    unsigned long long v85[7];  // rcx
    unsigned long long v86;  // rax
    unsigned long long v87;  // rdx
    unsigned long long v88;  // rbx

    v33 = a1;
    v34 = a2;
    v1 = a3[240];
    *((char *[249])&v24[0]) = a3;
    if (v1)
    {
        v6 = 0;
        v7 = 8;
        v8 = 0;
        v45 = a3[235];
        v46 = a3[242];
    }
    else
    {
        v47 = a3;
        v5 = a1;
        v2 = a2;
        v48 = ::0x51d450::alloc::alloc::Global::alloc_impl::hf61749d460433fff(608);
        if (!v48)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v49 = v48;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb44f624c3be0f6cf(&v26, &a0[3]);
        v13 = v29;
        v50 = *((int128_t *)&v26);
        *((void*)v11) = v50;
        v26 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v35, "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d", 1);
        v17 = v37;
        v51 = *((int128_t *)&v35);
        *((void*)v15) = v51;
        v52 = v47[235];
        v46 = v47[242];
        v0 = 0;
        v53 = v52;
        v54 = v46;
        uu_ls::PathData::new::hb117b29d3c1599fc(&v35, v11, &v26, v15, v53, v54);
        std::path::Path::join::ha88af9ee021a660d(v20, a0[4], a0[5], "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v15 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v26, "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v13 = v29;
        v55 = *((int128_t *)&v26);
        v57 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
        *((void*)v11) = v55;
        v0 = 0;
        uu_ls::PathData::new::hb117b29d3c1599fc(&v26, v20, v15, v11, v53, v54);
        memcpy(v49, &v35, 304);
        memcpy(v49 + 304, &v26, 304);
        a2 = v2;
        v45 = alloc::slice::hack::into_vec::h5ddace7de6ba94f1(&v6, v49, 2) | -0x100 | v53;
    }
    v9 = v5;
    v10 = a2;
    v5 = v45;
    v2 = v46;
    while (true)
    {
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(v15, &v9, a2);
        if (!v15)
            break;
        v59 = v17;
        if (!v11)
        {
            v25 = v59;
            v63 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hc8796a120682c2e1(a4, v61, v62);
            if (v63)
            {
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v63);
                ::0x51a6b0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h95431106b977b4f2(&v25);
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h62575055b26ffe51(&v9);
                ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
                return v66;
            }
            v28 = v59;
            v26 = 1;
            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
            v3 = uucore::util_name::h412db5e565a079f3();
            v4 = v62;
            v20 = &v3;
            v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
            v22 = &v26;
            v23 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h00273f496a2f8f40;
            v35 = &g_612798;
            v36 = 3;
            v39 = 0;
            *((unsigned long long [3])&v37) = v20;
            v38 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v61, v62);
            ::0x51a490::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h70d82c0d2efe4f8e(&v26);
        }
        else
        {
            v14 = *((long long *)&v19);
            v60 = *((int128_t *)&v18);
            v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
            v13 = v60;
            v11 = v16;
            v12 = v59;
            if (!(char)uu_ls::should_display::h478b37ab457c90af(v11, v24))
            {
                ::0x51a600::core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hbde3583cb45d2d84(v11);
            }
            else
            {
                std::fs::DirEntry::path::h5b1bdb0f1090af27(v20, v11);
                v32 = v14;
                v64 = *((int128_t *)&v11);
                v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                v65 = (int128_t)v13;
                v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                v30 = v65;
                v28 = v64;
                v26 = 1;
                v35 = 0x8000000000000000;
                v0 = 0;
                uu_ls::PathData::new::hb117b29d3c1599fc(&v42, v20, &v26, &v35, v5, v2);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h931cd82f4cd3d189(&v6, &v42, v62);
            }
        }
    }
    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h62575055b26ffe51(&v9);
    v67 = v24;
    v68 = v43;
    uu_ls::sort_entries::he10c04bebc758045(v7, v8, v67);
    if (v67[248] == 1 || v67[234])
    {
        uu_ls::return_total::h3bad83becfbf785c(&v26, v7, v8, v67, a4);
        v66 = v28;
        if (v35 == 0x8000000000000000)
        {
            ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
            return v66;
        }
        v35 = v26;
        v36 = v66;
        v37 = v29;
        v15 = v66;
        v16 = v37;
        *((unsigned long long [3])&v11) = v15;
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
        v26 = &g_423d10;
        v28 = 1;
        v31 = 0;
        *((unsigned long long [3])&v29) = v11;
        v30 = 1;
        v70 = std::io::Write::write_fmt::h9d32c17c2cadc496(a4, &v26);
        if (v70)
        {
            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v70);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v35);
            ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
            return v66;
        }
        if (v67[238])
        {
            v71 = v68[6];
            if (!v71)
            {
                v72 = v68[2];
                v71 = (!v72 ? 0 : *((long long *)(v72 * 16 + v68[1] - 8)) + 1);
            }
            v68[6] = v37 + v71 + 2;
        }
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v35);
    }
    v66 = uu_ls::display_items::ha0c43359ebb61f1b(v7, v8, v67, a4, v68, *((long long *)&v44));
    if (v66)
    {
        ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
        return v66;
    }
    if (v67[230])
    {
        v11 = v7;
        v12 = v8 * 304 + v11;
        v13 = (unsigned int)(-0x100 | !v1) * 2;
        v73 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h06309627286aab21(v11);
        if (v73)
        {
            v5 = v67[238];
            do
            {
                v75 = &v73->padding_0[24];
                std::fs::read_dir::hfdd363506b42354a(&v9, &v73->padding_0[24], v74);
                v76 = v10;
                if (v76 != 2)
                {
                    v3 = v9;
                    v4 = v76;
                    uucore::features::fs::FileInformation::from_path::h895c7ff236919960(&v26, v75, v73->field_128);
                    v79 = v28;
                    if (v26)
                    {
                        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v79);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h62575055b26ffe51(&v3);
                        ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
                        return v66;
                    }
                    memcpy(&v41, &v29, 136);
                    v40 = v79;
                    if (!(char)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hca9a141c72f0e704(a5, &v40))
                    {
                        v26 = &g_612788;
                        v28 = 1;
                        v29 = 8;
                        *((int128_t *)&v30) = 0;
                        v82 = std::io::Write::write_fmt::h9d32c17c2cadc496(a4, &v26);
                        if (v82)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v82);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h62575055b26ffe51(&v3);
                            ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
                            return v66;
                        }
                        if (v5)
                        {
                            v43[6] = 2;
                            v66 = uu_ls::dired::indent::h52b1e672ce4893b9(a4);
                            if (v66)
                            {
                                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h62575055b26ffe51(&v3);
                                ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
                                return v66;
                            }
                            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v26, v73->field_20, v73->field_28);
                            v84 = v29;
                            ::0x51a870::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h631d03c135faa1e8(&v26);
                            uu_ls::dired::calculate_subdired::h67f0d984937d02f4(v43, v84);
                            v85 = v43;
                            v85[6] = v85[6] + v84 + 3;
                        }
                        uu_ls::show_dir_name::h8589ba1cf46b2091(v73, a4, v67);
                        v26 = &g_612788;
                        v28 = 1;
                        v29 = 8;
                        v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((int128_t *)&v30) = 0;
                        v86 = std::io::Write::write_fmt::h9d32c17c2cadc496(a4, &v26);
                        if (v86)
                        {
                            v66 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v86);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h62575055b26ffe51(&v3);
                            ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
                            return v66;
                        }
                        v87 = v4;
                        v0[0] = v43;
                        v66 = uu_ls::enter_directory::h49e8c97096081c01(v73, v3, v87, v67, a4, a5, v0, *((long long *)&v44));
                        if (v66)
                        {
                            ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
                            return v66;
                        }
                        uucore::features::fs::FileInformation::from_path::h895c7ff236919960(&v26, v75, v73->field_128);
                        v88 = v28;
                        if (v26)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v88);
                            ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
                            return v66;
                        }
                        memcpy(&v35, &v29, 136);
                        v35 = v88;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h98a79850addf7f5a(a5, &v35);
                    }
                    else
                    {
                        v81 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hc8796a120682c2e1(a4, v61, v62);
                        if (v81)
                        {
                            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v81);
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h62575055b26ffe51(&v3);
                            ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
                            return v66;
                        }
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb44f624c3be0f6cf(&v35, v75);
                        v30 = v37;
                        v83 = *((int128_t *)&v35);
                        v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                        v28 = v83;
                        v26 = 5;
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                        v20 = uucore::util_name::h412db5e565a079f3();
                        v21 = v62;
                        *((unsigned long long [3])&v15) = v20;
                        v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
                        v17 = &v26;
                        v18 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h00273f496a2f8f40;
                        v35 = &g_612798;
                        v36 = 3;
                        v39 = 0;
                        *((unsigned long long [3])&v37) = v15;
                        v38 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v61, v62);
                        ::0x51a490::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h70d82c0d2efe4f8e(&v26);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h62575055b26ffe51(&v3);
                    }
                }
                else
                {
                    v77 = v9;
                    v3 = v77;
                    v78 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hc8796a120682c2e1(a4, v61, v62);
                    if (v78)
                    {
                        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v78);
                        ::0x51a6b0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h95431106b977b4f2(&v3);
                        ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
                        return v66;
                    }
                    v15 = v77;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb44f624c3be0f6cf(&v35, v75);
                    v31 = v37;
                    v80 = *((int128_t *)&v35);
                    v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                    v29 = v80;
                    v28 = v77;
                    v27 = v73->field_129;
                    v26 = 2;
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    v20 = uucore::util_name::h412db5e565a079f3();
                    v21 = v62;
                    *((unsigned long long [3])&v15) = v20;
                    v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
                    v17 = &v26;
                    v18 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h00273f496a2f8f40;
                    v35 = &g_612798;
                    v36 = 3;
                    v39 = 0;
                    *((unsigned long long [3])&v37) = v15;
                    v38 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v61, v62);
                    ::0x51a490::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h70d82c0d2efe4f8e(&v26);
                }
            } while ((v73 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h06309627286aab21(v11), v73));
        }
    }
    ::0x51abf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h19f9cdb4c5b59b5d(&v6);
    return 0;
}
