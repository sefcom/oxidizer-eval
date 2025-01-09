long long uu_shred::wipe_file::hcdd557f5a4f902dc(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned int a3, unsigned long a4, unsigned long a5)
{
    unsigned int v0;  // [sp-0x2c4]
    unsigned long long v1;  // [sp-0x2c0]
    unsigned int v2;  // [sp-0x2b4]
    void* v3;  // [sp-0x2b0]
    unsigned long long v4;  // [sp-0x2a8]
    void* v5;  // [sp-0x2a0]
    struct struct_2 **v6;  // [sp-0x298], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v7;  // [sp-0x290], Other Possible Types: unsigned long, unsigned long long
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
    void* v20;  // [bp-0x220], Other Possible Types: char, unsigned long long
    unsigned int v21;  // [bp-0x218], Other Possible Types: unsigned long long
    char v22;  // [sp-0x217]
    unsigned short v23;  // [sp-0x214]
    char *v24;  // [sp-0x210], Other Possible Types: int, struct struct_2 **, unsigned long long
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
    struct struct_2 **v46;  // [sp-0x140], Other Possible Types: char
    unsigned long long v47;  // [sp-0x138]
    void* v48;  // [sp-0x120]
    unsigned long long v49;  // [sp-0x118]
    unsigned long v50;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long v51;  // [sp-0x100], Other Possible Types: unsigned long long
    char v52;  // [bp-0xf8]
    struct struct_2 **v53;  // [bp-0xe0]
    struct_1 *v54;  // [sp-0xd8], Other Possible Types: unsigned long long
    char *v55;  // [sp-0xd0], Other Possible Types: struct struct_2 **
    unsigned int v56;  // [bp-0xc8], Other Possible Types: unsigned long
    char *v57;  // [sp-0xc0]
    unsigned long long v58;  // [sp-0xb8]
    char *v59;  // [sp-0xb0]
    char v60;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v61;  // [bp-0x90]
    unsigned long v62;  // [bp+0x8]
    char v63;  // [bp+0x10]
    char v64;  // [bp+0x18]
    char v65;  // [bp+0x20]
    unsigned long long v67;  // rax
    void* v68;  // rax
    unsigned long long v70;  // rax
    unsigned long long v72;  // rbx
    void* v73;  // r12
    unsigned long long v74;  // rbx
    void* v75;  // r15
    int v76;  // ymm0
    unsigned long long v77;  // rax
    unsigned long long v78;  // rcx
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long v81;  // rbp
    void* v82;  // rdi
    unsigned long long v83;  // r15
    unsigned int v84;  // r12d
    unsigned long long v85;  // rbx
    struct_1 *v86;  // rdx
    unsigned long long v87;  // rax
    unsigned long long v88;  // rax

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
        v47 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v67 = &g_5386d8;
    }
    else if (!(char)std::path::Path::is_file::h82f08f46fb8d8099(a0, a1))
    {
        v6 = &g_1;
        v7 = a0;
        v8 = a1;
        v9 = 0;
        v46 = &v6;
        v47 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v67 = &g_5386f8;
    }
    else
    {
        std::fs::metadata::h605f1ca78403f0bd(&v20, a0, a1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hfeeb5d3bb5da4e93(&v53, &v20);
        if ((int)v53 == 2)
            return v68;
        v1 = a1;
        if (v65)
        {
            v70 = *((int *)&v60);
            v68 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8b41e8b25dbfd909(std::fs::set_permissions::hedfd3098c0eec3ac(a0, v1, ((char)v70 < 0 ? v70 & 4294967295 : 128)));
            if (v68)
                return v68;
        }
        v3 = 0;
        v4 = &g_1;
        v5 = 0;
        v49 = *((long long *)&v61);
        v72 = v1;
        if (v49)
        {
            if (a2 > 3)
            {
                v13 = a2 / 22;
                if (a2 >= 22)
                {
                    v75 = 0;
                    do
                    {
                        v75 = ::0x4bac60::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v75);
                        v20 = 0;
                        v21 = 22;
                        *((uint128_t *)&v32) = 0xcc000000bb000000990000008800;
                        *((uint128_t *)&v30) = 0x7700000066000000440000003300;
                        *((uint128_t *)&v28) = 689601926604450170026677061268993;
                        *((uint128_t *)&v26) = 48234206897958065916534445818495771649;
                        v76 = ((((v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000;
                        *((uint128_t *)&v24) = 0xaa00000055000000ff0000000000;
                        v34 = 0xee000000dd00;
                        while (true)
                        {
                            v77 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c495dba700bde13(&v20);
                            if ((char)v77 == 2)
                                break;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&v3, v77 & 4294967295);
                        }
                        core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$::hccc20f2342448aa1();
                    } while (v75 < v13);
                }
                v78 = v13 * 22;
                v20 = 0;
                v21 = 22;
                *((uint128_t *)&v24) = 0xaa00000055000000ff0000000000;
                *((uint128_t *)&v26) = 48234206897958065916534445818495771649;
                *((uint128_t *)&v28) = 689601926604450170026677061268993;
                *((uint128_t *)&v30) = 0x7700000066000000440000003300;
                *((uint128_t *)&v32) = 0xcc000000bb000000990000008800;
                v34 = 0xee000000dd00;
                v79 = a2 - v78;
                v35 = v79;
                if (a2 != v78)
                {
                    do
                    {
                        v35 = v79 - &g_1;
                        v80 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c495dba700bde13(&v20);
                    } while ((char)v80 != 2 && (alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&v3, v80 & 4294967295), v79 = v35, v79));
                }
                core::ptr::drop_in_place$LT$core..iter..adapters..take..Take$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$$GT$::hd3bf92e12aae45fe();
                v20 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
                _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..SliceRandom$GT$::shuffle::he012a51162e821c4(v4, v5, &v20);
                v81 = a2 / 10;
                v82 = 0;
                do
                {
                    v83 = (!((a2 - &g_1) * v82 | v81 + 2) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)((a2 - &g_1) * v82)) % (v81 + 2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)((a2 - &g_1) * v82)) / (v81 + 2 & 4294967295))) & 4294967295 & 4294967295 : (unsigned long long)((0 CONCAT (a2 - &g_1) * v82) % (v81 + 2)) CONCAT (unsigned long long)((0 CONCAT (a2 - &g_1) * v82) / (v81 + 2)));
                    if (v83 >= v5)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(v83, v5, &g_5387f0); /* do not return */
                    v82 = ::0x4bac60::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v82);
                    *((char *)(v4 + v83 * 4)) = 2;
                } while (v82 < v81 + 3);
                core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h89ac64e96d66995e();
                v74 = v1;
            }
            else
            {
                v73 = 0;
                while (true)
                {
                    v74 = v72;
                    if (v73 >= a2)
                        break;
                    v73 = ::0x4bac60::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v73);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&v3, 2);
                }
            }
            if (v63)
                alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&v3, 0);
        }
        v50 = v5;
        v20 = 0x1b600000000;
        v21 = 0;
        v23 = 0;
        *((char **)&v22) = &g_1;
        std::fs::OpenOptions::open::h42007666e681861e(&v53, &v20, a0, v72);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hdcf338468f0daf60(&v6, &v53, a0, v72);
        v68 = v6;
        if (v68)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_shred..PassType$GT$$GT$::hc7ae42648a6b147f(&v3);
            return v68;
        }
        v0 = v7;
        if (a4)
            v49 = v12;
        else
            v49 = v49;
        v12 = v49;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfb8255cffa267b63(&v46, &v3);
        v48 = 0;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h21af7eed97fbc67b(&v14, &v46);
        if (v15 != 3)
        {
            v84 = (char)v62;
            do
            {
                v85 = *((long long *)&v14);
                v2 = *((int *)&v15);
                if (v64)
                {
                    uu_shred::pass_name::hc502fb7b05ee159f(&v52, &v2);
                    v53 = uucore::util_name::h60d842bf27b05e82();
                    v54 = v86;
                    v6 = &v53;
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
                    v51 = &(&g_1)[v85];
                    v53 = &v16;
                    v54 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
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
                    v8 = &v53;
                    v9 = 4;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v6);
                    ::0x4baf00::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79f0f67a09ddf38f(&v52);
                }
                v87 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5a7c198f926f4856(uu_shred::do_pass::hd89cf0ca9cbf1708(&v0, &v2, v84, v12), a0, v1);
                if (v87)
                {
                    v16 = v87;
                    v17 = v86;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v86->field_60(v87));
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v7 = v86;
                    v53 = &v6;
                    v54 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                    v55 = &v16;
                    v56 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hfa48898c7684171a;
                    v20 = &g_538718;
                    v21 = 3;
                    v26 = 0;
                    v24 = &v53;
                    v25 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v20);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hbf158212341c390e(v16, v17);
                }
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h21af7eed97fbc67b(&v14, &v46);
            } while (v15 != 3);
        }
        core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$uu_shred..PassType$GT$$GT$$GT$::h3fb90667d107ca3f();
        v88 = a3;
        if ((char)v88)
        {
            v68 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd9d95a9b55133fba(uu_shred::do_remove::h7b1c5ba904fda3f1(a0, v1, a0, v1, v64, v88 & 4294967295), a0, v1);
            if (v68)
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b();
                return v68;
            }
        }
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b();
        return 0;
    }
    v20 = v67;
    v21 = 2;
    v26 = 0;
    v24 = &v46;
    v25 = &g_1;
    ::0x4bbba0::core::option::Option$LT$T$GT$::map_or_else::h2a91f0892e8dc529();
    *((char **)&v56) = &g_1;
    v68 = alloc::boxed::Box$LT$T$GT$::new::h46ce8461a54b80d6(&v53);
    return v68;
}
