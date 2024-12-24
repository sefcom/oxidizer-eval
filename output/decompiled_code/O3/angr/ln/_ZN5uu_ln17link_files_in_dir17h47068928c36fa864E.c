long long uu_ln::link_files_in_dir::h47068928c36fa864(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55], unsigned long a5)
{
    char v0;  // [sp-0x129]
    char v1;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x120]
    char v3;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x110]
    void* v5;  // [bp-0x108], Other Possible Types: char
    int v6;  // [sp-0xf8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0xf0]
    unsigned long long v8;  // [sp-0xe8]
    unsigned long v9;  // [bp-0xe0], Other Possible Types: char
    unsigned int v10;  // [sp-0xcc]
    int v11;  // [sp-0xc8], Other Possible Types: unsigned long, unsigned long long
    int v12;  // [sp-0xb8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v13;  // [sp-0xb0]
    unsigned long long v14;  // [sp-0xa8]
    unsigned long long v15;  // [sp-0xa0]
    char v16;  // [bp-0x98]
    char v17;  // [bp-0x90]
    char v18;  // [bp-0x88]
    unsigned long v19;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x70]
    int v21;  // [sp-0x68]
    int v22;  // [sp-0x58]
    int v23;  // [sp-0x48]
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdx
    void* v27;  // rax
    int v28;  // xmm0
    int v29;  // ymm0
    int v30;  // ymm0
    struct_0 *v31;  // rax
    unsigned long long v32;  // rbp
    unsigned long long v33;  // r12
    unsigned long long v34;  // rax
    unsigned long long v35;  // r12
    unsigned long long v36;  // rbp
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rcx
    unsigned long long v42;  // r8
    unsigned long long v43;  // r9
    unsigned long long v44;  // rax
    int v45;  // xmm0
    int v46;  // xmm0
    int v47;  // xmm0

    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v1, a2, a3);
        v4 = 0x8000000000000000;
        v27 = alloc::boxed::Box$LT$T$GT$::new::h49e5b8dcbd25ac4e(&v1);
        return v27;
    }
    ::0x4b74b0::std::thread::local::LocalKey$LT$T$GT$::try_with::h13a514519bd77870(&v1, v25, v26);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hdd4ab4fd4a975cbc(&v1, a1, ::0x4b8300::core::result::Result$LT$T$C$E$GT$::expect::h4f8aa78b49154026(&v1), v26);
    v28 = *((int128_t *)&v1);
    v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
    *((int128_t *)&v23) = *((int128_t *)&v5);
    *((int128_t *)&v22) = *((int128_t *)&v3);
    v21 = v28;
    v19 = a0;
    v20 = a0 + a1 * 24;
    v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha607253395e3f05d(&v19);
    if (!v31)
    {
LABEL_4b9efe:
        v27 = 0;
    }
    else
    {
        v0 = a4[54] == 2 & a4[52];
        v10 = v31 | -0x100 | 1;
        do
        {
            if (v0 && (char)std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3))
            {
                if ((char)std::path::Path::is_file::h82f08f46fb8d8099(a2, a3))
                {
                    v34 = std::fs::remove_file::hd7079ab2290d2c63(a2, a3, v26);
                    if (v34)
                    {
                        v11 = v34;
                        v6 = uucore::util_name::h412db5e565a079f3();
                        v7 = v26;
                        v12 = &v6;
                        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hddf5d6d9c2092f73;
                        v1 = &g_52d6a8;
                        v2 = 2;
                        v5 = 0;
                        v3 = &v12;
                        v4 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                        v6 = 1;
                        v7 = a2;
                        v8 = a3;
                        v9 = 1;
                        v12 = &v6;
                        v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v14 = &v11;
                        v15 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v1 = &g_52d6c8;
                        v2 = 3;
                        v5 = 0;
                        v3 = &v12;
                        v4 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                        ::0x4b77c0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6b149e25a0385aba(v11);
                    }
                }
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
                {
                    v39 = std::fs::remove_dir::h6ba82a5b4c9ce913(a2, a3, v26);
                    if (v39)
                    {
                        v11 = v39;
                        v6 = uucore::util_name::h412db5e565a079f3();
                        v7 = v26;
                        v12 = &v6;
                        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hddf5d6d9c2092f73;
                        v1 = &g_52d6a8;
                        v2 = 2;
                        v5 = 0;
                        v3 = &v12;
                        v4 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                        v6 = 1;
                        v7 = a2;
                        v8 = a3;
                        v9 = 1;
                        v12 = &v6;
                        v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v14 = &v11;
                        v15 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v1 = &g_52d6c8;
                        v2 = 3;
                        v5 = 0;
                        v3 = &v12;
                        v4 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                        ::0x4b77c0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6b149e25a0385aba(v11);
                    }
                }
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v16, a2, a3);
            }
            else
            {
                v32 = v31->field_8;
                v33 = v31[1].padding_0;
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, v32, v33);
                if (!v1)
                {
                    v35 = v2;
                    v36 = v3;
                    v38 = std::path::Path::file_name::h79ecbb7850a9c7f3(v35, v36, v26, v37);
                    if (!v38)
                        std::path::Path::join::h8d155fc8764281c9(&v16, a2, a3, v35, v36);
                    else
                        std::path::Path::join::hdc5d1040e15407e2(&v16, a2, a3, v38, v26);
                }
                else
                {
                    v6 = uucore::util_name::h412db5e565a079f3();
                    v7 = v26;
                    v12 = &v6;
                    v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hddf5d6d9c2092f73;
                    v1 = &g_52d6a8;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v12;
                    v4 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                    v6 = 1;
                    v7 = v32;
                    v8 = v33;
                    v9 = 1;
                    v12 = &v6;
                    v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v1 = &g_52d6f8;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v12;
                    v4 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                    v10 = 0;
                    continue;
                }
            }
            if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hff78b8b71bd6a191(&v21, &v16, v40, v41, v42, v43))
            {
                v6 = uucore::util_name::h412db5e565a079f3();
                v7 = v26;
                v12 = &v6;
                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hddf5d6d9c2092f73;
                v1 = &g_52d6a8;
                v2 = 2;
                v5 = 0;
                v3 = &v12;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                v45 = *((int128_t *)&v17);
                v11 = v45;
                v46 = *((int128_t *)&v31->field_8);
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
                v12 = v46;
                v6 = &v11;
                v7 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v8 = &v12;
                v9 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v1 = &g_52d718;
                v2 = 3;
                v5 = 0;
                v3 = &v6;
                v4 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
            }
            else
            {
                v44 = uu_ln::link::h179035ee2d871a71(v31->field_8, v31[1].padding_0, *((long long *)&v17), *((long long *)&v18), a4);
                if (!v44)
                    goto LABEL_4b9e60;
                v11 = v44;
                v6 = uucore::util_name::h412db5e565a079f3();
                v7 = v26;
                v12 = &v6;
                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hddf5d6d9c2092f73;
                v1 = &g_52d6a8;
                v2 = 2;
                v5 = 0;
                v3 = &v12;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                v6 = &v11;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h13cd9c1d015f13fb;
                v1 = &g_52d748;
                v2 = 2;
                v5 = 0;
                v3 = &v6;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hecbc9ed6420a7917(v11, v26);
            }
            v10 = 0;
LABEL_4b9e60:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h93c6f72339ab2600(&v1, &v16);
            v8 = v3;
            v47 = *((int128_t *)&v1);
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
            v6 = v47;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h720dade43c0bf10c(&v21, &v6);
            ::0x4b77a0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc15fd571fc19ad9b(&v16);
        } while ((v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha607253395e3f05d(&v19), v31));
        if ((v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha607253395e3f05d(&v19), v31))
            goto LABEL_4b9efe;
        v4 = 9223372036854775809;
        v27 = alloc::boxed::Box$LT$T$GT$::new::h49e5b8dcbd25ac4e(&v1);
    }
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::hc3528c623084dec5(&v21);
    return v27;
}
