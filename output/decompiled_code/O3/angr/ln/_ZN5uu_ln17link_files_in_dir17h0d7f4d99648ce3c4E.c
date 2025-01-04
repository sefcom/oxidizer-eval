long long uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55], unsigned long a5)
{
    char v0;  // [sp-0x129]
    unsigned long v1;  // [bp-0x128], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [sp-0x120]
    struct struct_0 **v3;  // [bp-0x118], Other Possible Types: char
    unsigned long long v4;  // [sp-0x110]
    void* v5;  // [bp-0x108], Other Possible Types: char
    struct struct_0 **v6;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xf0]
    struct struct_0 **v8;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long v9;  // [bp-0xe0], Other Possible Types: char
    unsigned int v10;  // [sp-0xcc]
    struct struct_0 **v11;  // [sp-0xc8]
    struct struct_0 **v12;  // [sp-0xb8]
    unsigned long long v13;  // [sp-0xb0]
    struct struct_0 **v14;  // [sp-0xa8]
    unsigned long long v15;  // [sp-0xa0]
    char v16;  // [bp-0x98]
    char v17;  // [bp-0x90]
    unsigned long v19;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x70]
    struct struct_0 **v21;  // [sp-0x68]
    struct struct_0 **v22;  // [sp-0x58]
    struct struct_0 **v23;  // [sp-0x48]
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdx
    void* v27;  // rax
    struct struct_0 **v28;  // xmm0
    int v29;  // ymm0
    int v30;  // ymm0
    struct_1 *v31;  // rax
    unsigned long long v32;  // rbp
    unsigned long long v33;  // r12
    struct struct_0 **v34;  // rax
    unsigned long long v35;  // r12
    struct struct_0 **v36;  // rbp
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rax
    struct struct_0 **v39;  // rax
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rcx
    unsigned long long v42;  // r8
    unsigned long long v43;  // r9
    struct struct_0 **v44;  // rax
    struct struct_0 **v45;  // xmm0
    struct struct_0 **v46;  // xmm0
    struct struct_0 **v47;  // xmm0

    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v1, a2, a3);
        v4 = 0x8000000000000000;
        v27 = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&v1);
        return v27;
    }
    ::0x4b77d0::std::thread::local::LocalKey$LT$T$GT$::try_with::h0d9f788c4dae22c7(&v1, v25, v26);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h75cd1283ff7601d9(&v1, a1, ::0x4b8620::core::result::Result$LT$T$C$E$GT$::expect::h5a01a070efd742e5(&v1), v26);
    v28 = *((int128_t *)&v1);
    v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
    *((int128_t *)&v23) = *((int128_t *)&v5);
    *((int128_t *)&v22) = *((int128_t *)&v3);
    v21 = v28;
    v19 = a0;
    v20 = a0 + a1 * 24;
    v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca227a6f7df71fd4(&v19);
    if (!v31)
    {
LABEL_4ba21e:
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
                    v34 = std::fs::remove_file::h49bdff741c081dc5(a2, a3, v26);
                    if (v34)
                    {
                        v11 = v34;
                        v6 = uucore::util_name::h60d842bf27b05e82();
                        v7 = v26;
                        v12 = &v6;
                        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        v1 = &g_52cf68;
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
                        v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v14 = &v11;
                        v15 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v1 = &g_52cf88;
                        v2 = 3;
                        v5 = 0;
                        v3 = &v12;
                        v4 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                        ::0x4b7ae0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h106838a02a13d9fd(v11);
                    }
                }
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
                {
                    v39 = std::fs::remove_dir::h9bddb08efc8342d5(a2, a3, v26);
                    if (v39)
                    {
                        v11 = v39;
                        v6 = uucore::util_name::h60d842bf27b05e82();
                        v7 = v26;
                        v12 = &v6;
                        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        v1 = &g_52cf68;
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
                        v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v14 = &v11;
                        v15 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v1 = &g_52cf88;
                        v2 = 3;
                        v5 = 0;
                        v3 = &v12;
                        v4 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                        ::0x4b7ae0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h106838a02a13d9fd(v11);
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
                        std::path::Path::join::he50aec8d5a7ea1a7(&v16, a2, a3, v35, v36);
                    else
                        std::path::Path::join::hbea12235afa21da2(&v16, a2, a3, v38, v26);
                }
                else
                {
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v7 = v26;
                    v12 = &v6;
                    v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                    v1 = &g_52cf68;
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
                    v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v1 = &g_52cfb8;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v12;
                    v4 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                    v10 = 0;
                    continue;
                }
            }
            if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0bc31a4b071d28ea(&v21, &v16, v40, v41, v42, v43))
            {
                v6 = uucore::util_name::h60d842bf27b05e82();
                v7 = v26;
                v12 = &v6;
                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                v1 = &g_52cf68;
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
                v1 = &g_52cfd8;
                v2 = 3;
                v5 = 0;
                v3 = &v6;
                v4 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
            }
            else
            {
                v44 = uu_ln::link::h8c92ebae2dccde8f(v31->field_8, v31[1].padding_0, *((long long *)&v17), *((long long *)&(&v17)[8]), a4);
                if (!v44)
                    goto LABEL_4ba180;
                v11 = v44;
                v6 = uucore::util_name::h60d842bf27b05e82();
                v7 = v26;
                v12 = &v6;
                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                v1 = &g_52cf68;
                v2 = 2;
                v5 = 0;
                v3 = &v12;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                v6 = &v11;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h863403f9a165bd80;
                v1 = &g_52d008;
                v2 = 2;
                v5 = 0;
                v3 = &v6;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hae31b381e209e077(v11, v26);
            }
            v10 = 0;
LABEL_4ba180:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbf396db49ef6ba51(&v1, &v16);
            v8 = v3;
            v47 = *((int128_t *)&v1);
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
            v6 = v47;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hc95a599cc62b1fc4(&v21, &v6);
            ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&v16);
        } while ((v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca227a6f7df71fd4(&v19), v31));
        if ((v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca227a6f7df71fd4(&v19), v31))
            goto LABEL_4ba21e;
        v4 = 9223372036854775809;
        v27 = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&v1);
    }
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h5977e179e61e5eb6(&v21);
    return v27;
}
