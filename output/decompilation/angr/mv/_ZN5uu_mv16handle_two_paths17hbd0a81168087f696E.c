long long uu_mv::handle_two_paths::hbd0a81168087f696(char *a0, unsigned long long a1, struct struct_1 **a2, unsigned long long a3, struct_3 *a4)
{
    struct struct_1 **v0;  // [sp-0x1b8]
    char *v1;  // [sp-0x1a8]
    char *v2;  // [sp-0x1a0], Other Possible Types: struct struct_1 **, unsigned long long
    unsigned long v3;  // [sp-0x198], Other Possible Types: unsigned long long
    char v4;  // [sp-0x190]
    struct struct_0 **v5;  // [sp-0x168]
    struct struct_1 **v6;  // [sp-0x160], Other Possible Types: char *, unsigned long long
    unsigned long v7;  // [sp-0x158], Other Possible Types: unsigned long long
    char v8;  // [sp-0x150]
    char *v9;  // [sp-0x148]
    unsigned long long v10;  // [sp-0x140]
    char *v11;  // [sp-0x138]
    unsigned long long v12;  // [sp-0x130]
    char v13;  // [bp-0x128]
    struct struct_1 **v14;  // [sp-0x120], Other Possible Types: unsigned long
    unsigned long long v15;  // [sp-0x118]
    struct struct_0 **v16;  // [sp-0x110], Other Possible Types: unsigned long
    unsigned long long v17;  // [sp-0x108]
    unsigned long long v18;  // [sp-0x100]
    char *v19;  // [sp-0xf8]
    void* v20;  // [sp-0xf8], Other Possible Types: unsigned long long
    int v21;  // [sp-0xf0], Other Possible Types: char, unsigned long long
    struct struct_0 **v22;  // [sp-0xe8], Other Possible Types: struct struct_2 **, struct struct_1 **, unsigned long long
    int v23;  // [sp-0xe0], Other Possible Types: unsigned long long
    int v24;  // [bp-0xd8], Other Possible Types: void*
    unsigned long long v25;  // [sp-0xc8]
    char v26;  // [bp-0x48]
    char v28;  // r13b
    unsigned long long v29;  // rax
    struct struct_1 **v31;  // r14
    char *v32;  // r15
    unsigned long long v33;  // r12
    unsigned long long v34;  // rbp
    char v35;  // al
    struct struct_1 **v36;  // r14
    unsigned long long v37;  // r12
    char *v38;  // r15
    char v39;  // r13b
    char v40;  // al
    char *v41;  // r15
    struct struct_1 **v42;  // r13
    char *v43;  // r15
    char *v45;  // r12
    void* v46;  // rax
    unsigned int v47;  // eax
    unsigned long long v48;  // rax
    unsigned long long v49;  // r14
    unsigned long v50;  // rdx
    unsigned long long v51;  // rax

    v28 = a4->field_36;
    if (v28 == 1 && (char)uucore::features::backup_control::source_is_target_backup::hf52468b25c2dfb23(a0, a1, a2, a3, a4->field_8, a4->field_10))
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
        v21 = 3;
        v24 = 0;
        v22 = &v14;
        v23 = 2;
        ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v26, &v19);
        v29 = std::io::error::Error::new::h3b474d96466fa494(0, &v26);
        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v29);
        return v46;
    }
    v0 = a2;
    v10 = a3;
    std::fs::symlink_metadata::h7febb2c461a7cc90(&v19, a0, a1);
    ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v19);
    if ((int)v19 != 2)
    {
        v18 = a1;
        std::path::Path::components::h4f3217acf0fc8653(&v1, a0, v18);
        v31 = v0;
        v32 = a0;
        v33 = v10;
        std::path::Path::components::h4f3217acf0fc8653(&v19, v31, v33);
        v34 = v18;
        v9 = v32;
        if (!(!::0x4e7e00::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v1, &v19)) || !(!(char)uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(v32, v34, v31, v33)))
        {
            if (!(!v28))
                goto LABEL_4e93c2;
        }
        else
        {
            v35 = uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file::hd5db584ecbb68737(v32, v34, v31, v33);
            if (!(!v28) || !(v35))
            {
LABEL_4e93c2:
                v36 = v0;
                v37 = v10;
                v39 = std::path::Path::is_dir::h9ac0db933706da51(v36, v37);
                v40 = std::path::Path::is_dir::h9ac0db933706da51(v9, v34);
                if (!(char)uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(v36, v37))
                {
                    if (!v39)
                        goto LABEL_4e966c;
                }
                else
                {
                    if (!v39)
                    {
                        if (!v40 && !a4->field_30 && a4->field_37 != 2)
                        {
                            v1 = 1;
                            v2 = v0;
                            v3 = v37;
                            v4 = 1;
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v21, &v1);
                            v20 = 9;
                            alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
                            return v46;
                        }
LABEL_4e966c:
                        std::fs::metadata::h1d9ddf5324749f9a(&v19, v0, v37);
                        ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v19);
                        v45 = v9;
                        if ((int)v19 != 2 && (char)std::path::Path::is_dir::h9ac0db933706da51(v45, v34))
                        {
                            v47 = a4->field_35;
                            if (!v47)
                                return 0;
                            v49 = v10;
                            if (v47 != 2)
                            {
                                v1 = uucore::util_name::h60d842bf27b05e82();
                                v2 = v50;
                                v5 = &v1;
                                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                                v19 = &g_587e10;
                                v21 = 2;
                                v24 = 0;
                                v22 = &v5;
                                v23 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                                v1 = 1;
                                v2 = v0;
                                v3 = v49;
                                v4 = 1;
                                v5 = &v1;
                                v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                v19 = &g_587e30;
                                v21 = 2;
                                v24 = 0;
                                v22 = &v5;
                                v23 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                                v19 = &g_587e50;
                                v21 = 1;
                                v22 = 8;
                                *((uint128_t *)&v23) = 0;
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
                                    v21 = 2;
                                    v24 = 0;
                                    v22 = &v5;
                                    v23 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                                    v1 = &v14;
                                    v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                                    v19 = &g_587e60;
                                    v21 = 2;
                                    v24 = 0;
                                    v22 = &v1;
                                    v23 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                                }
                                v34 = v18;
                                if (!(char)uucore::read_yes::hc350e858ab85cf03())
                                {
                                    v29 = std::io::error::Error::new::h0657970bda442b78(39, 1, 0);
                                    v46 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v29);
                                    return v46;
                                }
                            }
                            v5 = 1;
                            v6 = v45;
                            v7 = v34;
                            v8 = 1;
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v11, &v5);
                            v1 = 1;
                            v2 = v0;
                            v3 = v49;
                            v4 = 1;
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v14, &v1);
                            v23 = *((long long *)&v13);
                            *((int128_t *)&v21) = *((int128_t *)&v11);
                            *((int128_t *)&v24) = *((int128_t *)&v14);
                            v25 = v16;
                            v20 = 6;
                            v46 = alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
                            return v46;
                        }
                        v48 = uu_mv::rename::hfc95a4bd2fcddeec(v45, v34, v0, v10, a4, 0);
                        v46 = (!v48 ? 0 : uu_mv::handle_two_paths::_$u7b$$u7b$closure$u7d$$u7d$::h76cfa34b6b986a26(v48));
                        return v46;
                    }
                }
                if (a4->field_30)
                {
                    v41 = v9;
                    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(v41, v34))
                    {
                        v1 = 1;
                        v2 = v0;
                        v3 = v37;
                        v4 = 1;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v21, &v1);
                        v20 = 5;
                        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
                        return v46;
                    }
                    v19 = v41;
                    v21 = v34;
                    v22 = v0;
                    v23 = v37;
                    v46 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf9aae2064c24b4d3(uu_mv::rename::hfc95a4bd2fcddeec(v41, v34, v22, v37, a4, 0), &v19);
                    return v46;
                }
                else
                {
                    v42 = v0;
                    v43 = v9;
                    if ((char)std::path::Path::starts_with::h893fbbf855320e98(v42, v37, v43, v34))
                    {
                        v11 = v43;
                        v12 = v34;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&v5, &v11);
                        v14 = v42;
                        v15 = v37;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&v1, &v14);
                        v23 = v7;
                        *((int128_t *)&v21) = *((int128_t *)&v5);
                        *((int128_t *)&v24) = *((int128_t *)&v1);
                        v25 = v3;
                        v20 = 4;
                        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
                        return v46;
                    }
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v19, v43, v34);
                    v46 = uu_mv::move_files_into_dir::hea74a81b456dd214(&v19, 1, v42, v37, a4);
                    core::ptr::drop_in_place$LT$$u5b$std..path..PathBuf$u3b$$u20$1$u5d$$GT$::hc08a4c36878649f8(&v19);
                    return v46;
                }
            }
        }
        v38 = v9;
        std::path::Path::components::h4f3217acf0fc8653(&v1, v38, v34);
        std::path::Path::components::h4f3217acf0fc8653(&v19, ".", 1);
        if (!::0x4e7e00::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v1, &v19) && !(char)std::path::Path::ends_with::h69a96bb2edb5d121(v38, v34, "/.mv: extra operand src/uu/mv/src/mv.rswill not overwrite just-created ''cannot move '", 2) && !(char)std::path::Path::is_file::h82f08f46fb8d8099(v38, v34))
        {
            v1 = v38;
            v2 = v34;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he15fdbfc0d7582ca(&v21, &v1);
            v20 = 3;
            alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
            return v46;
        }
        v5 = 1;
        v6 = v38;
        v7 = v34;
        v8 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v11, &v5);
        v1 = 1;
        v2 = v0;
        v3 = v10;
        v4 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v14, &v1);
        v23 = *((long long *)&v13);
        *((int128_t *)&v21) = *((int128_t *)&v11);
        *((int128_t *)&v24) = *((int128_t *)&v14);
        v25 = v16;
        v20 = 2;
        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
        return v46;
    }
    else if ((char)uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(a0, a1))
    {
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v21, &v1);
        v20 = 1;
        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
        return v46;
    }
    else
    {
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v21, &v1);
        v20 = 0;
        alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v19);
        return v46;
    }
}
