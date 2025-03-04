long long uu_shred::wipe_file::hcdd557f5a4f902dc(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned int a3, unsigned long a4, unsigned long a5)
{
    unsigned int v0;  // [sp-0x2c4]
    unsigned long long v1;  // [sp-0x2c0]
    unsigned int v2;  // [sp-0x2b4]
    void* v3;  // [sp-0x2b0]
    unsigned long long v4;  // [sp-0x2a8]
    void* v5;  // [sp-0x2a0]
    struct struct_2 **v6;  // [sp-0x298], Other Possible Types: unsigned long
    struct_1 *v7;  // [sp-0x290], Other Possible Types: unsigned long long
    struct struct_2 **v8;  // [sp-0x288], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x280], Other Possible Types: char
    char *v10;  // [sp-0x278]
    unsigned long long v11;  // [sp-0x270]
    unsigned long long v12;  // [sp-0x268]
    unsigned long v13;  // [sp-0x258]
    char v14;  // [bp-0x250]
    char v15;  // [bp-0x248]
    unsigned long v16;  // [sp-0x240], Other Possible Types: unsigned long long
    struct_1 *v17;  // [sp-0x238], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x230]
    char v19;  // [sp-0x228]
    void* v20;  // [sp-0x220], Other Possible Types: char, unsigned long long, unsigned long
    unsigned int v21;  // [sp-0x218], Other Possible Types: unsigned long long
    char v22;  // [sp-0x217]
    unsigned short v23;  // [sp-0x214]
    char *v24;  // [sp-0x210], Other Possible Types: int, struct struct_2 **, unsigned long long
    unsigned long long v25;  // [sp-0x208]
    int v26;  // [sp-0x200], Other Possible Types: void*
    unsigned long long v27;  // [sp-0x1f8]
    int v28;  // [sp-0x1f0], Other Possible Types: char
    unsigned long long v29;  // [sp-0x1e8]
    int v30;  // [bp-0x1e0]
    void* v31;  // [sp-0x1d8]
    int v32;  // [sp-0x1d0], Other Possible Types: unsigned long long
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
    struct struct_2 **v46;  // [sp-0x140]
    char v47;  // [bp-0x140]
    unsigned long long v48;  // [sp-0x138]
    void* v49;  // [sp-0x120]
    unsigned long long v50;  // [sp-0x118]
    unsigned long v51;  // [sp-0x108]
    unsigned long v52;  // [sp-0x100]
    char v53;  // [bp-0xf8]
    struct struct_2 **v54;  // [sp-0xe0]
    struct_1 *v55;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    char *v56;  // [sp-0xd0], Other Possible Types: struct struct_2 **
    unsigned int v57;  // [bp-0xc8], Other Possible Types: unsigned long
    char *v58;  // [sp-0xc0]
    unsigned long long v59;  // [sp-0xb8]
    char *v60;  // [sp-0xb0]
    char v61;  // [sp-0xa8], Other Possible Types: unsigned long long
    char v62;  // [bp-0x90]
    unsigned long v63;  // [bp+0x8]
    char v64;  // [bp+0x10]
    char v65;  // [bp+0x18]
    char v66;  // [bp+0x20]
    unsigned long long v68;  // rax
    void* v69;  // rbp
    unsigned long long v71;  // rax
    unsigned long long v73;  // rax
    unsigned long long v74;  // rbx
    void* v75;  // r12
    void* v76;  // r15
    int v77;  // ymm0
    unsigned long long v78;  // rax
    unsigned long long v79;  // rcx
    unsigned long long v80;  // rax
    unsigned long long v81;  // rax
    unsigned long v82;  // rbp
    void* v83;  // rdi
    unsigned long long v84;  // r15
    unsigned long long v85;  // rax
    unsigned int v86;  // r12d
    unsigned long long v87;  // rbx
    struct_1 *v88;  // rdx
    unsigned long long v89;  // rax
    unsigned long long v90;  // rax

    v12 = a5;
    std::fs::metadata::h605f1ca78403f0bd(&v20, a0, a1);
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h057e93f1d1d682ca(&v20);
    if (*((int *)&v20) == 2)
    {
        v6 = &g_1;
        v7 = a0;
        v8 = a1;
        v9 = 0;
        v46 = &v6;
        v48 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v68 = &g_5386d8;
    }
    else if (!(char)std::path::Path::is_file::h82f08f46fb8d8099(a0, a1))
    {
        v6 = &g_1;
        v7 = a0;
        v8 = a1;
        v9 = 0;
        v46 = &v6;
        v48 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v68 = &g_5386f8;
    }
    else
    {
        std::fs::metadata::h605f1ca78403f0bd(&v20, a0, a1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hfeeb5d3bb5da4e93(&v54, &v20);
        if ((int)v54 == 2)
        {
            v69 = v55;
            return v69;
        }
        v1 = a1;
        if (v66)
        {
            v71 = *((int *)&v61);
            v73 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8b41e8b25dbfd909(std::fs::set_permissions::hedfd3098c0eec3ac(a0, v1, ((char)v71 < 0 ? v71 & 4294967295 : 128)));
            if (v73)
            {
                v69 = v73;
                return v69;
            }
        }
        v3 = 0;
        v4 = &g_1;
        v5 = 0;
        v50 = *((long long *)&v62);
        v74 = v1;
        if (v50)
        {
            if (a2 > 3)
            {
                v13 = a2 / 22;
                if (a2 >= 22)
                {
                    v76 = 0;
                    do
                    {
                        v76 = ::0x4bac60::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v76);
                        v20 = 0;
                        v21 = 22;
                        *((uint128_t *)&v32) = 0xcc000000bb000000990000008800;
                        *((uint128_t *)&v30) = 0x7700000066000000440000003300;
                        *((uint128_t *)&v28) = 689601926604450170026677061268993;
                        *((uint128_t *)&v26) = 48234206897958065916534445818495771649;
                        v77 = ((((v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000;
                        *((uint128_t *)&v24) = 0xaa00000055000000ff0000000000;
                        v34 = 0xee000000dd00;
                        while (true)
                        {
                            v78 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c495dba700bde13(&v20);
                            if ((char)v78 == 2)
                                break;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&v3, v78 & 4294967295);
                        }
                        core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$::hccc20f2342448aa1();
                    } while (v76 < v13);
                }
                v79 = v13 * 22;
                v20 = 0;
                v21 = 22;
                *((uint128_t *)&v24) = 0xaa00000055000000ff0000000000;
                *((uint128_t *)&v26) = 48234206897958065916534445818495771649;
                *((uint128_t *)&v28) = 689601926604450170026677061268993;
                *((uint128_t *)&v30) = 0x7700000066000000440000003300;
                *((uint128_t *)&v32) = 0xcc000000bb000000990000008800;
                v34 = 0xee000000dd00;
                v80 = a2 - v79;
                v35 = v80;
                if (a2 != v79)
                {
                    do
                    {
                        v35 = v80 - &g_1;
                        v81 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c495dba700bde13(&v20);
                    } while ((char)v81 != 2 && (alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&v3, v81 & 4294967295), v80 = v35, v80));
                }
                core::ptr::drop_in_place$LT$core..iter..adapters..take..Take$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$$GT$::hd3bf92e12aae45fe();
                v20 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
                _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..SliceRandom$GT$::shuffle::he012a51162e821c4(v4, v5, &v20);
                v82 = a2 / 10;
                v83 = 0;
                do
                {
                    v84 = (!((a2 - &g_1) * v83 | v82 + 2) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)((a2 - &g_1) * v83)) % (v82 + 2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)((a2 - &g_1) * v83)) / (v82 + 2 & 4294967295))) & 4294967295 & 4294967295 : (unsigned long long)((0 CONCAT (a2 - &g_1) * v83) % (v82 + 2)) CONCAT (unsigned long long)((0 CONCAT (a2 - &g_1) * v83) / (v82 + 2)));
                    if (v84 >= v5)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(v84, v5, &g_5387f0); /* do not return */
                    v83 = ::0x4bac60::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v83);
                    *((char *)(v4 + v84 * 4)) = 2;
                } while (v83 < v82 + 3);
                core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h89ac64e96d66995e(&v20);
                v74 = v1;
            }
            else
            {
                v75 = 0;
                while (v75 < a2)
                {
                    v75 = ::0x4bac60::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v75);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&v3, 2);
                }
            }
            if (v64)
                alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&v3, 0);
        }
        v51 = v5;
        v20 = 0x1b600000000;
        v21 = 0;
        v23 = 0;
        *((char **)&v22) = &g_1;
        std::fs::OpenOptions::open::h42007666e681861e(&v54, &v20, a0, v74);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hdcf338468f0daf60(&v6, &v54, a0, v74);
        v69 = v6;
        if (v69)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_shred..PassType$GT$$GT$::hc7ae42648a6b147f(&v3);
            return v69;
        }
        v0 = v7;
        v85 = v12;
        if (!a4)
            v85 = v50;
        v12 = v85;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfb8255cffa267b63(&v47, &v3);
        v49 = 0;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h21af7eed97fbc67b(&v14, &v47);
        if (v15 != 3)
        {
            v86 = (char)v63;
            do
            {
                v87 = *((long long *)&v14);
                v2 = *((int *)&v15);
                if (v65)
                {
                    uu_shred::pass_name::hc502fb7b05ee159f(&v53, &v2);
                    v54 = uucore::util_name::h60d842bf27b05e82();
                    v55 = v88;
                    v6 = &v54;
                    v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                    v20 = &g_538698;
                    v21 = 2;
                    v26 = 0;
                    v24 = &v6;
                    v25 = &g_1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v20);
                    v16 = &g_1;
                    v17 = a0;
                    v18 = v1;
                    v19 = 0;
                    v52 = &(&g_1)[v87];
                    v54 = &v16;
                    v55 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v56 = &v52;
                    v57 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v58 = &v51;
                    v59 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v60 = &v53;
                    v61 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v20 = 2;
                    v24 = 2;
                    v26 = 0;
                    v27 = 32;
                    v28 = 3;
                    v29 = 2;
                    v31 = 0;
                    v32 = 2;
                    v33 = &g_1;
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
                    v6 = &g_538808;
                    v7 = 5;
                    v10 = &v20;
                    v11 = 4;
                    v8 = &v54;
                    v9 = 4;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v6);
                    ::0x4baf00::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79f0f67a09ddf38f(&v53);
                }
                v89 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5a7c198f926f4856(uu_shred::do_pass::hd89cf0ca9cbf1708(&v0, &v2, v86, v12), a0, v1);
                if (v89)
                {
                    v16 = v89;
                    v17 = v88;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v88->field_60(v89));
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v7 = v88;
                    v54 = &v6;
                    v55 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                    v56 = &v16;
                    v57 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hfa48898c7684171a;
                    v20 = &g_538718;
                    v21 = 3;
                    v26 = 0;
                    v24 = &v54;
                    v25 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v20);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hbf158212341c390e(v16, v17);
                }
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h21af7eed97fbc67b(&v14, &v47);
            } while (v15 != 3);
        }
        core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$uu_shred..PassType$GT$$GT$$GT$::h3fb90667d107ca3f(&v47);
        v90 = a3;
        if ((char)v90)
        {
            v69 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd9d95a9b55133fba(uu_shred::do_remove::h7b1c5ba904fda3f1(a0, v1, a0, v1, v65, v90 & 4294967295), a0, v1);
            if (v69)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b(v0);
                return v69;
            }
        }
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b(v0);
        return 0;
    }
    v20 = v68;
    v21 = 2;
    v26 = 0;
    v24 = &v47;
    v25 = &g_1;
    ::0x4bbba0::core::option::Option$LT$T$GT$::map_or_else::h2a91f0892e8dc529(&v54, &v20);
    *((char **)&v57) = &g_1;
    v69 = alloc::boxed::Box$LT$T$GT$::new::h46ce8461a54b80d6(&v54);
    return v69;
}
