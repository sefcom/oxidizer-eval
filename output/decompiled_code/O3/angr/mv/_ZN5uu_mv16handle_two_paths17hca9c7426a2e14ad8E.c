long long uu_mv::handle_two_paths::hca9c7426a2e14ad8(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    unsigned long long v0;  // [sp-0x1b8]
    unsigned long long v1;  // [sp-0x1a8]
    unsigned long long v2;  // [sp-0x1a0]
    unsigned long v3;  // [sp-0x198], Other Possible Types: unsigned long long
    char v4;  // [sp-0x190]
    unsigned long long v5;  // [sp-0x168]
    unsigned long long v6;  // [sp-0x160]
    unsigned long v7;  // [sp-0x158], Other Possible Types: unsigned long long
    char v8;  // [sp-0x150]
    unsigned long long v9;  // [sp-0x148]
    unsigned long long v10;  // [sp-0x140]
    unsigned long v11;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x130]
    char v13;  // [bp-0x128]
    unsigned long v14;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x118]
    unsigned long long v16;  // [sp-0x110], Other Possible Types: unsigned long
    unsigned long long v17;  // [sp-0x108]
    unsigned long long v18;  // [sp-0x100]
    void* v19;  // [sp-0xf8], Other Possible Types: unsigned long, unsigned long long
    int v20;  // [sp-0xf0], Other Possible Types: char, unsigned long long
    unsigned long long v21;  // [sp-0xe8]
    int v22;  // [sp-0xe0], Other Possible Types: unsigned long long
    int v23;  // [bp-0xd8], Other Possible Types: void*
    unsigned long long v24;  // [sp-0xc8]
    char v25;  // [bp-0x48]
    char v27;  // r13b
    unsigned long long v28;  // rax
    unsigned long long v30;  // r14
    unsigned long long v31;  // r15
    unsigned long long v32;  // r12
    unsigned long long v33;  // rbp
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rcx
    unsigned long long v36;  // r8
    unsigned long long v37;  // r9
    unsigned long long v39;  // r14
    unsigned long long v40;  // r12
    unsigned long long v41;  // r15
    char v42;  // r13b
    unsigned long long v44;  // r15
    unsigned long long v45;  // r13
    unsigned long long v46;  // r15
    unsigned long long v48;  // r12
    void* v49;  // rax
    unsigned int v50;  // eax
    unsigned long long v51;  // rax
    unsigned long long v52;  // r14
    unsigned long long v53;  // rbp
    unsigned long long v54;  // rsi
    unsigned long long v55;  // rax
    unsigned long long v56;  // rdi

    v27 = a4->field_36;
    if (v27 == 1 && (char)uucore::features::backup_control::source_is_target_backup::ha68c9518b6e0e1fa(a0, a1, a2, a3, a4->field_8, a4->field_10))
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
        v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v16 = &v1;
        v17 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v19 = &g_587050;
        v20 = 3;
        v23 = 0;
        v21 = &v14;
        v22 = 2;
        ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v25, &v19);
        v28 = std::io::error::Error::new::hbdde03795a1f64b1(0, &v25);
        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v28);
        return v49;
    }
    v0 = a2;
    v10 = a3;
    std::fs::symlink_metadata::h5e225869e7c96063(&v19, a0, a1);
    ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v19);
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
        if (!(!(char)::0x4e71e0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v1, &v19, v34, v35, v36, v37)) || !(!(char)uucore::features::fs::are_hardlinks_to_same_file::h42360bc7a5e7419e(v31, v33, v30, v32)))
        {
            if (!(!v27))
                goto LABEL_4e87a2;
        }
        else
        {
            if (!(!v27) || !((char)uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file::h402d327c0820823d(v31, v33, v30, v32)))
            {
LABEL_4e87a2:
                v39 = v0;
                v40 = v10;
                v42 = std::path::Path::is_dir::h9ac0db933706da51(v39, v40);
                if (!(char)uucore::features::fs::path_ends_with_terminator::h549c510c97c77e48(v39, v40))
                {
                    if (!v42)
                        goto LABEL_4e8a4c;
                }
                else
                {
                    if (!v42)
                    {
                        if (!(char)std::path::Path::is_dir::h9ac0db933706da51(v9, v33) && !a4->field_30 && a4->field_37 != 2)
                        {
                            v1 = 1;
                            v2 = v0;
                            v3 = v40;
                            v4 = 1;
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v20, &v1);
                            v19 = 9;
                            alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v19);
                            return v49;
                        }
LABEL_4e8a4c:
                        std::fs::metadata::ha7346a2a69513158(&v19, v0, v40);
                        ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v19);
                        v48 = v9;
                        if ((int)v19 != 2 && (char)std::path::Path::is_dir::h9ac0db933706da51(v48, v33))
                        {
                            v50 = a4->field_35;
                            if (!v50)
                                return 0;
                            v52 = v10;
                            if (v50 != 2)
                            {
                                v1 = uucore::util_name::h412db5e565a079f3();
                                v2 = v34;
                                v5 = &v1;
                                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                                v19 = &g_587128;
                                v20 = 2;
                                v23 = 0;
                                v21 = &v5;
                                v22 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v54, v34);
                                v1 = 1;
                                v2 = v0;
                                v3 = v52;
                                v4 = 1;
                                v5 = &v1;
                                v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                v19 = &g_587148;
                                v20 = 2;
                                v23 = 0;
                                v21 = &v5;
                                v22 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v54, v34);
                                v19 = &g_587168;
                                v20 = 1;
                                v21 = 8;
                                *((int128_t *)&v22) = 0;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v54, v34);
                                v11 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                                v55 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v11, v54, v34);
                                if (v55)
                                {
                                    v14 = v55;
                                    v1 = uucore::util_name::h412db5e565a079f3();
                                    v2 = v34;
                                    v5 = &v1;
                                    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                                    v19 = &g_587128;
                                    v20 = 2;
                                    v23 = 0;
                                    v21 = &v5;
                                    v22 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v54, v34);
                                    v1 = &v14;
                                    v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                                    v19 = &g_587178;
                                    v20 = 2;
                                    v23 = 0;
                                    v21 = &v1;
                                    v22 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v54, v34);
                                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                                }
                                v53 = v18;
                                if (!(char)uucore::read_yes::h34a9f501e29598a6(v56, v54, v34))
                                {
                                    v28 = std::io::error::Error::new::h9c663fbcdb8c9096(39, 1, 0);
                                    v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v28);
                                    return v49;
                                }
                            }
                            v5 = 1;
                            v6 = v48;
                            v7 = v53;
                            v8 = 1;
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v11, &v5);
                            v1 = 1;
                            v2 = v0;
                            v3 = v52;
                            v4 = 1;
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v14, &v1);
                            v22 = *((long long *)&v13);
                            *((int128_t *)&v20) = *((int128_t *)&v11);
                            *((int128_t *)&v23) = *((int128_t *)&v14);
                            v24 = v16;
                            v19 = 6;
                            v49 = alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v19);
                            return v49;
                        }
                        v51 = uu_mv::rename::hc67228fb45a54ab1(v48, v33, v0, v10, a4, 0);
                        v49 = (!v51 ? 0 : uu_mv::handle_two_paths::_$u7b$$u7b$closure$u7d$$u7d$::h14380a97e9d1672a(v51));
                        return v49;
                    }
                }
                if (a4->field_30)
                {
                    v44 = v9;
                    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(v44, v33))
                    {
                        v1 = 1;
                        v2 = v0;
                        v3 = v40;
                        v4 = 1;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v20, &v1);
                        v19 = 5;
                        alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v19);
                        return v49;
                    }
                    v19 = v44;
                    v20 = v33;
                    v21 = v0;
                    v22 = v40;
                    v49 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hcbec9a77e41921e5(uu_mv::rename::hc67228fb45a54ab1(v44, v33, v21, v40, a4, 0), &v19);
                    return v49;
                }
                else
                {
                    v45 = v0;
                    v46 = v9;
                    if ((char)std::path::Path::starts_with::ha3102326266024a3(v45, v40, v46, v33))
                    {
                        v11 = v46;
                        v12 = v33;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1b2a5667a69a7ddf(&v5, &v11);
                        v14 = v45;
                        v15 = v40;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1b2a5667a69a7ddf(&v1, &v14);
                        v22 = v7;
                        *((int128_t *)&v20) = *((int128_t *)&v5);
                        *((int128_t *)&v23) = *((int128_t *)&v1);
                        v24 = v3;
                        v19 = 4;
                        alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v19);
                        return v49;
                    }
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v19, v46, v33);
                    v49 = uu_mv::move_files_into_dir::h2094580d118304f1(&v19, 1, v45, v40, a4, v37);
                    core::ptr::drop_in_place$LT$$u5b$std..path..PathBuf$u3b$$u20$1$u5d$$GT$::h28323bcb88c7c28d(&v19);
                    return v49;
                }
            }
        }
        v41 = v9;
        std::path::Path::components::h4f3217acf0fc8653(&v1, v41, v33);
        std::path::Path::components::h4f3217acf0fc8653(&v19, ".", 1);
        if (!(char)::0x4e71e0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v1, &v19, v34, v35, v36, v37) && !(char)std::path::Path::ends_with::h308d50134452aa6f(v41, v33, "/.: overwrite ?  \nsrc/uu/mv/src/mv.rsmv: extra operand ", 2) && !(char)std::path::Path::is_file::h82f08f46fb8d8099(v41, v33))
        {
            v1 = v41;
            v2 = v33;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1b2a5667a69a7ddf(&v20, &v1);
            v19 = 3;
            alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v19);
            return v49;
        }
        v5 = 1;
        v6 = v41;
        v7 = v33;
        v8 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v11, &v5);
        v1 = 1;
        v2 = v0;
        v3 = v10;
        v4 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v14, &v1);
        v22 = *((long long *)&v13);
        *((int128_t *)&v20) = *((int128_t *)&v11);
        *((int128_t *)&v23) = *((int128_t *)&v14);
        v24 = v16;
        v19 = 2;
        alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v19);
        return v49;
    }
    else if ((char)uucore::features::fs::path_ends_with_terminator::h549c510c97c77e48(a0, a1))
    {
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v20, &v1);
        v19 = 1;
        alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v19);
        return v49;
    }
    else
    {
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v20, &v1);
        v19 = 0;
        alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v19);
        return v49;
    }
}
