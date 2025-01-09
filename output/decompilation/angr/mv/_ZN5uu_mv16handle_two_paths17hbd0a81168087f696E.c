long long uu_mv::handle_two_paths::hbd0a81168087f696(char *a0, unsigned long long a1, struct struct_1 **a2, unsigned long long a3, struct_3 *a4)
{
    struct struct_1 **v0;  // [sp-0x1b8]
    char *v1;  // [sp-0x1a8], Other Possible Types: unsigned long long
    char *v2;  // [sp-0x1a0], Other Possible Types: struct struct_1 **, unsigned long long
    unsigned long v3;  // [sp-0x198], Other Possible Types: unsigned long long
    char v4;  // [sp-0x190]
    struct struct_0 **v5;  // [sp-0x168], Other Possible Types: unsigned long long
    struct struct_1 **v6;  // [sp-0x160], Other Possible Types: char *, unsigned long long
    unsigned long v7;  // [sp-0x158], Other Possible Types: unsigned long long
    char v8;  // [sp-0x150]
    char *v9;  // [sp-0x148]
    unsigned long long v10;  // [sp-0x140]
    char *v11;  // [sp-0x138]
    unsigned long long v12;  // [sp-0x130]
    char v13;  // [bp-0x128]
    struct struct_1 **v14;  // [sp-0x120], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [sp-0x118]
    struct struct_0 **v16;  // [sp-0x110], Other Possible Types: unsigned long
    unsigned long long v17;  // [sp-0x108]
    unsigned long long v18;  // [sp-0x100]
    void* v19;  // [sp-0xf8], Other Possible Types: char *, unsigned long long
    int v20;  // [sp-0xf0], Other Possible Types: char, unsigned long long
    struct struct_0 **v21;  // [sp-0xe8], Other Possible Types: struct struct_2 **, struct struct_1 **, unsigned long long
    int v22;  // [sp-0xe0], Other Possible Types: unsigned long long
    int v23;  // [bp-0xd8], Other Possible Types: void*
    unsigned long long v24;  // [sp-0xc8]
    char v25;  // [bp-0x48]
    char v27;  // r13b
    unsigned long long v28;  // rax
    struct struct_1 **v30;  // r14
    char *v31;  // r15
    unsigned long long v32;  // r12
    unsigned long long v33;  // rbp
    struct struct_1 **v35;  // r14
    unsigned long long v36;  // r12
    char *v37;  // r15
    char v38;  // r13b
    char *v40;  // r15
    struct struct_1 **v41;  // r13
    char *v42;  // r15
    char *v44;  // r12
    void* v45;  // rax
    unsigned int v46;  // eax
    unsigned long long v47;  // rax
    unsigned long long v48;  // r14
    unsigned long long v49;  // rbp
    unsigned long v50;  // rdx
    unsigned long long v51;  // rax

    v27 = a4->field_36;
    if (v27 == 1 && (char)uucore::features::backup_control::source_is_target_backup::hf52468b25c2dfb23(a0, a1, a2, a3, a4->field_8, a4->field_10))
    {
        v5 = 1;
        v6 = a2;
        v7 = a3;
        v8 = 1;
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        v14 = &v5;
        v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v16 = &v1;
        v17 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v19 = &g_587de0;
        v20 = 3;
        v23 = 0;
        v21 = &v14;
        v22 = 2;
        ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d();
        v28 = std::io::error::Error::new::h3b474d96466fa494(0, &v25);
        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v28);
        return v45;
    }
    v0 = a2;
    v10 = a3;
    std::fs::symlink_metadata::h7febb2c461a7cc90(&v19, a0, a1);
    ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v19);
    if ((int)v19 != 2)
    {
        v18 = a1;
        std::path::Path::components::h4f3217acf0fc8653(&v1, a0, v18);
        v30 = v0;
        v31 = a0;
        v32 = v10;
        std::path::Path::components::h4f3217acf0fc8653(&v19, v30, v32);
        v33 = v18;
        v9 = v31;
        if (!(!::0x4e7e00::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v1, &v19)) || !(!(char)uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(v31, v33, v30, v32)))
        {
            if (!(!v27))
                goto LABEL_4e93c2;
        }
        else
        {
            if (!(!v27) || !((char)uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file::hd5db584ecbb68737(v31, v33, v30, v32)))
            {
LABEL_4e93c2:
                v35 = v0;
                v36 = v10;
                v38 = std::path::Path::is_dir::h9ac0db933706da51(v35, v36);
                if (!(char)uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(v35, v36))
                {
                    if (!v38)
                        goto LABEL_4e966c;
                }
                else
                {
                    if (!v38)
                    {
                        if (!(char)std::path::Path::is_dir::h9ac0db933706da51(v9, v33) && !a4->field_30 && a4->field_37 != 2)
                        {
                            v1 = 1;
                            v2 = v0;
                            v3 = v36;
                            v4 = 1;
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v20, &v1);
                            v19 = 9;
                            alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
                            return v45;
                        }
LABEL_4e966c:
                        std::fs::metadata::h1d9ddf5324749f9a(&v19, v0, v36);
                        ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v19);
                        v44 = v9;
                        if ((int)v19 != 2 && (char)std::path::Path::is_dir::h9ac0db933706da51(v44, v33))
                        {
                            v46 = a4->field_35;
                            if (!v46)
                                return 0;
                            v48 = v10;
                            if (v46 != 2)
                            {
                                v1 = uucore::util_name::h60d842bf27b05e82();
                                v2 = v50;
                                v5 = &v1;
                                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                                v19 = &g_587e10;
                                v20 = 2;
                                v23 = 0;
                                v21 = &v5;
                                v22 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                                v1 = 1;
                                v2 = v0;
                                v3 = v48;
                                v4 = 1;
                                v5 = &v1;
                                v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                v19 = &g_587e30;
                                v20 = 2;
                                v23 = 0;
                                v21 = &v5;
                                v22 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                                v19 = &g_587e50;
                                v20 = 1;
                                v21 = 8;
                                *((uint128_t *)&v22) = 0;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                                v11 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                                v51 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v11);
                                if (v51)
                                {
                                    v14 = v51;
                                    v1 = uucore::util_name::h60d842bf27b05e82();
                                    v2 = v50;
                                    v5 = &v1;
                                    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                                    v19 = &g_587e10;
                                    v20 = 2;
                                    v23 = 0;
                                    v21 = &v5;
                                    v22 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                                    v1 = &v14;
                                    v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                                    v19 = &g_587e60;
                                    v20 = 2;
                                    v23 = 0;
                                    v21 = &v1;
                                    v22 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                                }
                                v49 = v18;
                                if (!(char)uucore::read_yes::hc350e858ab85cf03())
                                {
                                    v28 = std::io::error::Error::new::h0657970bda442b78(39, 1, 0);
                                    v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v28);
                                    return v45;
                                }
                            }
                            v5 = 1;
                            v6 = v44;
                            v7 = v49;
                            v8 = 1;
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v11, &v5);
                            v1 = 1;
                            v2 = v0;
                            v3 = v48;
                            v4 = 1;
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v14, &v1);
                            v22 = *((long long *)&v13);
                            *((int128_t *)&v20) = *((int128_t *)&v11);
                            *((int128_t *)&v23) = *((int128_t *)&v14);
                            v24 = v16;
                            v19 = 6;
                            v45 = alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
                            return v45;
                        }
                        v47 = uu_mv::rename::hfc95a4bd2fcddeec(v44, v33, v0, v10, a4, 0);
                        v45 = (!v47 ? 0 : uu_mv::handle_two_paths::_$u7b$$u7b$closure$u7d$$u7d$::h76cfa34b6b986a26(v47));
                        return v45;
                    }
                }
                if (a4->field_30)
                {
                    v40 = v9;
                    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(v40, v33))
                    {
                        v1 = 1;
                        v2 = v0;
                        v3 = v36;
                        v4 = 1;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v20, &v1);
                        v19 = 5;
                        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
                        return v45;
                    }
                    v19 = v40;
                    v20 = v33;
                    v21 = v0;
                    v22 = v36;
                    v45 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf9aae2064c24b4d3(uu_mv::rename::hfc95a4bd2fcddeec(v40, v33, v21, v36, a4, 0), &v19);
                    return v45;
                }
                else
                {
                    v41 = v0;
                    v42 = v9;
                    if ((char)std::path::Path::starts_with::h893fbbf855320e98(v41, v36, v42, v33))
                    {
                        v11 = v42;
                        v12 = v33;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&v5, &v11);
                        v14 = v41;
                        v15 = v36;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&v1, &v14);
                        v22 = v7;
                        *((int128_t *)&v20) = *((int128_t *)&v5);
                        *((int128_t *)&v23) = *((int128_t *)&v1);
                        v24 = v3;
                        v19 = 4;
                        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
                        return v45;
                    }
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v19, v42, v33);
                    v45 = uu_mv::move_files_into_dir::hea74a81b456dd214(&v19, 1, v41, v36, a4);
                    core::ptr::drop_in_place$LT$$u5b$std..path..PathBuf$u3b$$u20$1$u5d$$GT$::hc08a4c36878649f8();
                    return v45;
                }
            }
        }
        v37 = v9;
        std::path::Path::components::h4f3217acf0fc8653(&v1, v37, v33);
        std::path::Path::components::h4f3217acf0fc8653(&v19, ".", 1);
        if (!::0x4e7e00::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v1, &v19) && !(char)std::path::Path::ends_with::h69a96bb2edb5d121(v37, v33, "/.mv: extra operand src/uu/mv/src/mv.rswill not overwrite just-created ''cannot move '", 2) && !(char)std::path::Path::is_file::h82f08f46fb8d8099(v37, v33))
        {
            v1 = v37;
            v2 = v33;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&v20, &v1);
            v19 = 3;
            alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
            return v45;
        }
        v5 = 1;
        v6 = v37;
        v7 = v33;
        v8 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v11, &v5);
        v1 = 1;
        v2 = v0;
        v3 = v10;
        v4 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v14, &v1);
        v22 = *((long long *)&v13);
        *((int128_t *)&v20) = *((int128_t *)&v11);
        *((int128_t *)&v23) = *((int128_t *)&v14);
        v24 = v16;
        v19 = 2;
        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
        return v45;
    }
    else if ((char)uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(a0, a1))
    {
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v20, &v1);
        v19 = 1;
        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
        return v45;
    }
    else
    {
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v20, &v1);
        v19 = 0;
        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
        return v45;
    }
}
