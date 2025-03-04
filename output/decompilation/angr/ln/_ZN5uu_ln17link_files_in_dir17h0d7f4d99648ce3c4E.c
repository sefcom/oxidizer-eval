long long uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55])
{
    char v0;  // [sp-0x129]
    char v1;  // [bp-0x128], Other Possible Types: unsigned long
    unsigned long long v2;  // [sp-0x120]
    struct struct_0 **v3;  // [sp-0x118], Other Possible Types: char
    unsigned long long v4;  // [sp-0x110]
    void* v5;  // [sp-0x108], Other Possible Types: char
    struct struct_0 **v6;  // [sp-0xf8]
    unsigned long long v7;  // [sp-0xf0]
    struct struct_0 **v8;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long v9;  // [bp-0xe0], Other Possible Types: char
    unsigned int v10;  // [sp-0xcc]
    struct struct_0 **v11;  // [bp-0xc8]
    struct struct_0 **v12;  // [bp-0xb8]
    unsigned long long v13;  // [sp-0xb0]
    struct struct_0 **v14;  // [sp-0xa8]
    unsigned long long v15;  // [sp-0xa0]
    char v16;  // [bp-0x98]
    char v17;  // [bp-0x90]
    unsigned long v18;  // [sp-0x78]
    unsigned long long v19;  // [sp-0x70]
    struct struct_0 **v20;  // [sp-0x68]
    struct struct_0 **v21;  // [sp-0x58]
    struct struct_0 **v22;  // [sp-0x48]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    struct struct_0 **v26;  // xmm0
    int v27;  // ymm0
    int v28;  // ymm0
    struct_1 *v29;  // rax
    struct_1 *v30;  // r15
    unsigned long long v31;  // rbp
    unsigned long long v32;  // r12
    struct struct_0 **v33;  // rax
    unsigned long long v34;  // r12
    struct struct_0 **v35;  // rbp
    unsigned long long v36;  // rax
    struct struct_0 **v37;  // rax
    struct struct_0 **v38;  // rax
    struct struct_0 **v39;  // xmm0
    struct struct_0 **v40;  // xmm0
    struct struct_0 **v41;  // xmm0
    void* v42;  // rbx

    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v1, a2, a3);
        v4 = 0x8000000000000000;
        v24 = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&v1);
        return v24;
    }
    ::0x4b77d0::std::thread::local::LocalKey$LT$T$GT$::try_with::h0d9f788c4dae22c7(&v1);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h75cd1283ff7601d9(&v1, a1, ::0x4b8620::core::result::Result$LT$T$C$E$GT$::expect::h5a01a070efd742e5(&v1), v25);
    v26 = *((int128_t *)&v1);
    v28 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
    *((int128_t *)&v22) = *((int128_t *)&v5);
    *((int128_t *)&v21) = *((int128_t *)&v3);
    v20 = v26;
    v18 = a0;
    v19 = a0 + a1 * 24;
    v29 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca227a6f7df71fd4(&v18);
    if (!v29)
    {
LABEL_4ba21e:
        v42 = 0;
    }
    else
    {
        v30 = v29;
        v0 = a4[54] == 2 & a4[52];
        v10 = v29 & 0xffffffffffffff00 | 1;
        do
        {
            if (v0 && (char)std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3))
            {
                if ((char)std::path::Path::is_file::h82f08f46fb8d8099(a2, a3))
                {
                    v33 = std::fs::remove_file::h49bdff741c081dc5(a2, a3);
                    if (v33)
                    {
                        v11 = v33;
                        v6 = uucore::util_name::h60d842bf27b05e82();
                        v7 = v25;
                        v12 = &v6;
                        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        v1 = &g_52cf68;
                        v2 = 2;
                        v5 = 0;
                        v3 = &v12;
                        v4 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
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
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                        ::0x4b7ae0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h106838a02a13d9fd(v11);
                    }
                }
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
                {
                    v37 = std::fs::remove_dir::h9bddb08efc8342d5(a2, a3);
                    if (v37)
                    {
                        v11 = v37;
                        v6 = uucore::util_name::h60d842bf27b05e82();
                        v7 = v25;
                        v12 = &v6;
                        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        v1 = &g_52cf68;
                        v2 = 2;
                        v5 = 0;
                        v3 = &v12;
                        v4 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
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
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                        ::0x4b7ae0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h106838a02a13d9fd(v11);
                    }
                }
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v16, a2, a3);
            }
            else
            {
                v31 = v30->field_8;
                v32 = v30[1].padding_0;
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, v31, v32);
                if (!v1)
                {
                    v34 = v2;
                    v35 = v3;
                    v36 = std::path::Path::file_name::h79ecbb7850a9c7f3(v34, v35);
                    if (!v36)
                        std::path::Path::join::he50aec8d5a7ea1a7(&v16, a2, a3, v34, v35);
                    else
                        std::path::Path::join::hbea12235afa21da2(&v16, a2, a3, v36, v25);
                }
                else
                {
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v7 = v25;
                    v12 = &v6;
                    v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                    v1 = &g_52cf68;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v12;
                    v4 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                    v6 = 1;
                    v7 = v31;
                    v8 = v32;
                    v9 = 1;
                    v12 = &v6;
                    v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v1 = &g_52cfb8;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v12;
                    v4 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                    v10 = 0;
                    continue;
                }
            }
            if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0bc31a4b071d28ea(&v20, &v16))
            {
                v6 = uucore::util_name::h60d842bf27b05e82();
                v7 = v25;
                v12 = &v6;
                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                v1 = &g_52cf68;
                v2 = 2;
                v5 = 0;
                v3 = &v12;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                v39 = *((int128_t *)&v17);
                v11 = v39;
                v40 = *((int128_t *)&v30->field_8);
                v28 = (v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                v12 = v40;
                v6 = &v11;
                v7 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v8 = &v12;
                v9 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v1 = &g_52cfd8;
                v2 = 3;
                v5 = 0;
                v3 = &v6;
                v4 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            }
            else
            {
                v38 = uu_ln::link::h8c92ebae2dccde8f(v30->field_8, v30[1].padding_0, *((long long *)&v17), *((long long *)&(&v17)[8]), a4);
                if (!v38)
                    goto LABEL_4ba180;
                v11 = v38;
                v6 = uucore::util_name::h60d842bf27b05e82();
                v7 = v25;
                v12 = &v6;
                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                v1 = &g_52cf68;
                v2 = 2;
                v5 = 0;
                v3 = &v12;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                v6 = &v11;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h863403f9a165bd80;
                v1 = &g_52d008;
                v2 = 2;
                v5 = 0;
                v3 = &v6;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hae31b381e209e077(v11, v25);
            }
            v10 = 0;
LABEL_4ba180:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbf396db49ef6ba51(&v1, &v16);
            v8 = v3;
            v41 = *((int128_t *)&v1);
            v28 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
            v6 = v41;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hc95a599cc62b1fc4(&v20, &v6);
            ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&v16);
        } while ((v30 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca227a6f7df71fd4(&v18), v30));
        if (!(!((char)v10 & 1)))
            goto LABEL_4ba21e;
        v4 = 9223372036854775809;
        v42 = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&v1);
    }
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h5977e179e61e5eb6(&v20);
    v24 = v42;
    return v24;
}
