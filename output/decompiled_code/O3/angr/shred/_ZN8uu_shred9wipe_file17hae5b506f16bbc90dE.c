long long uu_shred::wipe_file::hae5b506f16bbc90d(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned int a3, unsigned long a4, unsigned long a5)
{
    unsigned int v0;  // [sp-0x2c4]
    unsigned long long v1;  // [sp-0x2c0]
    unsigned int v2;  // [sp-0x2b4]
    void* v3;  // [sp-0x2b0]
    char *v4;  // [sp-0x2a8]
    void* v5;  // [sp-0x2a0]
    unsigned long v6;  // [sp-0x298], Other Possible Types: unsigned long long
    struct_1 *v7;  // [sp-0x290], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v8;  // [sp-0x288]
    unsigned long long v9;  // [bp-0x280], Other Possible Types: char
    unsigned long long v10;  // [sp-0x278]
    unsigned long long v11;  // [sp-0x270]
    unsigned long long v12;  // [sp-0x268]
    unsigned long v13;  // [sp-0x258]
    char v14;  // [bp-0x250]
    char v15;  // [bp-0x248]
    unsigned long v16;  // [sp-0x240], Other Possible Types: unsigned long long
    struct_1 *v17;  // [sp-0x238], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x230]
    char v19;  // [sp-0x228]
    void* v20;  // [bp-0x220], Other Possible Types: char, unsigned long long
    unsigned int v21;  // [bp-0x218], Other Possible Types: unsigned long long
    char v22;  // [sp-0x217]
    unsigned short v23;  // [sp-0x214]
    int v24;  // [sp-0x210], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x208]
    int v26;  // [sp-0x200], Other Possible Types: void*
    unsigned long long v27;  // [sp-0x1f8]
    int v28;  // [bp-0x1f0], Other Possible Types: char
    unsigned long long v29;  // [sp-0x1e8]
    int v30;  // [bp-0x1e0]
    void* v31;  // [sp-0x1d8]
    int v32;  // [bp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v33;  // [sp-0x1c8]
    unsigned long long v34;  // [sp-0x1c0]
    char v35;  // [bp-0x1b8], Other Possible Types: unsigned long
    unsigned long long v36;  // [sp-0x1b0]
    unsigned long long v37;  // [sp-0x1a0]
    unsigned long long v38;  // [sp-0x190]
    unsigned long long v39;  // [sp-0x188]
    char v40;  // [sp-0x180]
    unsigned long long v41;  // [sp-0x178]
    unsigned long long v42;  // [sp-0x168]
    unsigned long long v43;  // [sp-0x158]
    unsigned long long v44;  // [sp-0x150]
    char v45;  // [sp-0x148]
    char v46;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v47;  // [sp-0x138]
    void* v48;  // [sp-0x120]
    unsigned long long v49;  // [sp-0x118]
    unsigned long v50;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long v51;  // [sp-0x100], Other Possible Types: unsigned long long
    char v52;  // [bp-0xf8]
    char v53;  // [bp-0xe0], Other Possible Types: unsigned long long
    struct_1 *v54;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v55;  // [sp-0xd0]
    unsigned int v56;  // [bp-0xc8], Other Possible Types: unsigned long
    unsigned long long v57;  // [sp-0xc0]
    unsigned long long v58;  // [sp-0xb8]
    unsigned long long v59;  // [sp-0xb0]
    char v60;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v61;  // [bp-0x90]
    unsigned long v62;  // [bp+0x8]
    char v63;  // [bp+0x10]
    char v64;  // [bp+0x18]
    char v65;  // [bp+0x20]
    unsigned long long v67;  // rax
    void* v68;  // rax
    unsigned long long v70;  // rax
    unsigned long long v72;  // rsi
    unsigned long long v73;  // rdx
    unsigned long long v74;  // rbx
    void* v75;  // r12
    unsigned long long v76;  // rbx
    struct_1 *v77;  // rdx
    void* v78;  // r15
    int v79;  // ymm0
    unsigned long long v80;  // rsi
    unsigned long long v81;  // rax
    unsigned long long v82;  // rcx
    unsigned long long v83;  // rax
    unsigned long long v84;  // rax
    unsigned long long v85;  // rcx
    unsigned long v86;  // rbp
    void* v87;  // rdi
    char *v88;  // r15
    unsigned int v89;  // r12d
    unsigned long long v90;  // rbx
    unsigned long long v91;  // rsi
    unsigned long long v92;  // r8
    unsigned long long v93;  // rax
    unsigned long long v94;  // rax

    v12 = a5;
    std::fs::metadata::h72e2fd93efd888f0(&v20, a0, a1);
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf363068c39898bb1(&v20);
    if (*((int *)&v20) == 2)
    {
        v6 = 1;
        v7 = a0;
        v8 = a1;
        v9 = 0;
        v46 = &v6;
        v47 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v67 = &g_537d90;
    }
    else if (!(char)std::path::Path::is_file::h82f08f46fb8d8099(a0, a1))
    {
        v6 = 1;
        v7 = a0;
        v8 = a1;
        v9 = 0;
        v46 = &v6;
        v47 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v67 = &g_537c30;
    }
    else
    {
        std::fs::metadata::h72e2fd93efd888f0(&v20, a0, a1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc0be63be831f7414(&v53, &v20);
        if (*((int *)&v53) == 2)
            return v68;
        v1 = a1;
        if (v65)
        {
            v70 = *((int *)&v60);
            v68 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h068898341300f282(std::fs::set_permissions::hf0b27f28d4af2408(a0, v1, ((char)v70 < 0 ? v70 & 4294967295 : 128)));
            if (v68)
                return v68;
        }
        v3 = 0;
        v4 = 1;
        v5 = 0;
        v49 = *((long long *)&v61);
        v74 = v1;
        if (v49)
        {
            if (a2 > 3)
            {
                v13 = a2 / 22;
                if (a2 >= 22)
                {
                    v78 = 0;
                    do
                    {
                        v78 = ::0x4ba350::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v78);
                        v20 = 0;
                        v21 = 22;
                        *((int128_t *)&v32) = 0xcc000000bb000000990000008800;
                        *((int128_t *)&v30) = 0x7700000066000000440000003300;
                        *((int128_t *)&v28) = 689601926604450170026677061268993;
                        *((int128_t *)&v26) = 48234206897958065916534445818495771649;
                        v79 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000;
                        *((int128_t *)&v24) = 0xaa00000055000000ff0000000000;
                        v34 = 0xee000000dd00;
                        while (true)
                        {
                            v81 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h32f62873ccf0084b(&v20, v80, v77);
                            if ((char)v81 == 2)
                                break;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h9c95e85c9e56fa53(&v3, v81 & 4294967295, v77);
                        }
                        core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$::hedc9268147439c6d();
                    } while (v78 < v13);
                }
                v82 = v13 * 22;
                v20 = 0;
                v21 = 22;
                *((int128_t *)&v24) = 0xaa00000055000000ff0000000000;
                *((int128_t *)&v26) = 48234206897958065916534445818495771649;
                *((int128_t *)&v28) = 689601926604450170026677061268993;
                *((int128_t *)&v30) = 0x7700000066000000440000003300;
                *((int128_t *)&v32) = 0xcc000000bb000000990000008800;
                v34 = 0xee000000dd00;
                v83 = a2 - v82;
                v35 = v83;
                if (a2 != v82)
                {
                    do
                    {
                        v35 = v83 - 1;
                        v84 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h32f62873ccf0084b(&v20, v72, 0xee000000dd00);
                    } while ((char)v84 != 2 && (alloc::vec::Vec$LT$T$C$A$GT$::push::h9c95e85c9e56fa53(&v3, v84 & 4294967295, v77), v83 = v35, v83));
                }
                core::ptr::drop_in_place$LT$core..iter..adapters..take..Take$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$$GT$::h6e62375f2d6cecca();
                v20 = rand::rngs::thread::thread_rng::h2343e3718037645d();
                _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..SliceRandom$GT$::shuffle::hbc9839a4630c16e8(v4, v5, &v20, v85);
                v86 = a2 / 10;
                v87 = 0;
                do
                {
                    v88 = (!((a2 - 1) * v87 | v86 + 2) >> 32 ? (0 CONCAT (unsigned int)((a2 - 1) * v87)) /m (unsigned int)(v86 + 2) & 4294967295 & 4294967295 : (0 CONCAT (a2 - 1) * v87) /m (v86 + 2));
                    if (v88 >= v5)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v87 = ::0x4ba350::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v87);
                    *(v4 + 0x4 * v88) = 2;
                } while (v87 < v86 + 3);
                core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hd633533b5e2ad414(&v20);
                v76 = v1;
            }
            else
            {
                v75 = 0;
                while (v75 < a2)
                {
                    v75 = ::0x4ba350::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v75);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h9c95e85c9e56fa53(&v3, 2, v77);
                }
            }
            if (v63)
                alloc::vec::Vec$LT$T$C$A$GT$::push::h9c95e85c9e56fa53(&v3, 0, v73);
        }
        v50 = v5;
        v20 = 0x1b600000000;
        v21 = 0;
        v23 = 0;
        v22 = 1;
        std::fs::OpenOptions::open::hed2fece5c00d988f(&v53, &v20, a0, v74);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h919480f6faf0108b(&v6, &v53, a0, v74);
        v68 = v6;
        if (v68)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_shred..PassType$GT$$GT$::hda37a44a8351ae6a(&v3);
            return v68;
        }
        v0 = v7;
        if (a4)
            v49 = v12;
        else
            v49 = v49;
        v12 = v49;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h92b5cb50c5d9c3b6(&v46, &v3);
        v48 = 0;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2d8fff43d70d6c66(&v14, &v46);
        if (v15 != 3)
        {
            v89 = (char)v62;
            do
            {
                v90 = *((long long *)&v14);
                v2 = *((int *)&v15);
                if (v64)
                {
                    uu_shred::pass_name::h8eb245c0a2384cd6(&v52, &v2);
                    v53 = uucore::util_name::h412db5e565a079f3();
                    v54 = v77;
                    v6 = &v53;
                    v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2eaadf72ebdabe7c;
                    v20 = &g_537bf0;
                    v21 = 2;
                    v26 = 0;
                    v24 = &v6;
                    v25 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v91, v77);
                    v16 = 1;
                    v17 = a0;
                    v18 = v1;
                    v19 = 0;
                    v51 = v90 + 1;
                    v53 = &v16;
                    v54 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v55 = &v51;
                    v56 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v57 = &v50;
                    v58 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v59 = &v52;
                    v60 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v20 = 2;
                    v24 = 2;
                    v26 = 0;
                    v27 = 32;
                    v28 = 3;
                    v29 = 2;
                    v31 = 0;
                    v32 = 2;
                    v33 = 1;
                    v34 = 32;
                    v35 = 3;
                    v36 = 2;
                    v37 = 2;
                    v38 = 2;
                    v39 = 32;
                    v40 = 3;
                    v41 = 2;
                    v42 = 2;
                    v43 = 3;
                    v44 = 32;
                    v45 = 3;
                    v6 = &g_537d10;
                    v7 = 5;
                    v10 = &v20;
                    v11 = 4;
                    v8 = &v53;
                    v9 = 4;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v91, v77);
                    ::0x4ba5f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he419a88ccd009906(&v52);
                }
                v93 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h233ad22231b01a58(uu_shred::do_pass::h8de5020a6d2af77b(&v0, &v2, v89, v12, v92), a0);
                if (v93)
                {
                    v16 = v93;
                    v17 = v77;
                    v77->field_60(v93, v91);
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    v6 = uucore::util_name::h412db5e565a079f3();
                    v7 = v77;
                    v53 = &v6;
                    v54 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2eaadf72ebdabe7c;
                    v55 = &v16;
                    v56 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3db97704d0e9cac5;
                    v20 = &g_537d60;
                    v21 = 3;
                    v26 = 0;
                    v24 = &v53;
                    v25 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v91, v77);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h550d8227afb7b6f1(v16, v17);
                }
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2d8fff43d70d6c66(&v14, &v46);
            } while (v15 != 3);
        }
        core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$uu_shred..PassType$GT$$GT$$GT$::hfe0eaad41aa8853f(&v46);
        v94 = a3;
        if ((char)v94)
        {
            v68 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7bb6d0dab8015664(uu_shred::do_remove::h5a444d382f7b9a7c(a0, v1, a0, v1, v64, v94 & 4294967295), a0);
            if (v68)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h68098d78401c81a3(v0);
                return v68;
            }
        }
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h68098d78401c81a3(v0);
        return 0;
    }
    v20 = v67;
    v21 = 2;
    v26 = 0;
    v24 = &v46;
    v25 = 1;
    ::0x4bb290::core::option::Option$LT$T$GT$::map_or_else::h32787307d542f28f(&v53, &v20);
    v56 = 1;
    v68 = alloc::boxed::Box$LT$T$GT$::new::h1bd2c43037c82538(&v53);
    return v68;
}
