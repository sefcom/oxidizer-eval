long long linux_encryptor::main::h4012ebd29c92ad43()
{
    struct_1 *v0;  // [sp-0xc8]
    unsigned long long v1;  // [sp-0xc0]
    struct_1 *v2;  // [sp-0xb8], Other Possible Types: void*, unsigned long long
    unsigned long long v3;  // [sp-0xb0]
    struct_1 *v4;  // [sp-0xa8], Other Possible Types: struct struct_1 **, unsigned long long
    void* v5;  // [sp-0xa0], Other Possible Types: unsigned long long
    struct_1 *v6;  // [bp-0x90]
    unsigned long long v7;  // [sp-0x88]
    void* v8;  // [sp-0x80], Other Possible Types: char
    struct struct_1 **v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x60]
    unsigned long long v12;  // [sp-0x58]
    struct_1 *v13;  // [sp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    char v16;  // [bp-0x38]
    struct_1 *v18;  // xmm0
    struct_1 *v19;  // r12
    unsigned long long v20;  // rbp
    struct_1 *v21;  // r14
    void* v23;  // r15
    unsigned long long v24;  // r13
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdx
    unsigned long long v28;  // rbx
    unsigned long long v29;  // rax
    struct_0 *v30;  // rax
    unsigned int v31;  // ecx
    unsigned int v32;  // edx
    unsigned long long v33;  // rbp
    struct_1 *v34;  // r12
    void* v35;  // rsi
    unsigned long v36;  // rbp
    struct_1 *v37;  // r12
    struct_1 *v39;  // r12
    void* v40;  // r12
    unsigned long v41;  // rbx
    struct_1 *v42;  // rbp
    unsigned long long v43;  // rsi
    struct_1 *v45;  // rbp
    struct_1 *v46;  // rbp
    unsigned long long v47;  // rax

    std::env::args::h9f7e1d56856e8ac8(&v6);
    v18 = *((int128_t *)&v6);
    *((int128_t *)&v2) = *((int128_t *)&v8);
    v0 = v18;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h29f4c2317536a009(&v14, &v0);
    v19 = *((long long *)&v14);
    v20 = *((long long *)&v16);
    if (v20)
    {
        v21 = &v19->field_0;
        v11 = v20 * 8;
        v23 = 0;
        v13 = v19;
        v12 = v20;
        do
        {
            v24 = v11 * 3;
            v28 = v23;
            v23 += 1;
            v29 = v21->padding_-10;
            if (v29 == 5)
            {
                v30 = v21->field_0;
                v31 = v30->field_0 ^ 1818585133;
                v32 = v30->field_4 ^ 112;
                if (!(!v32) || !(!v31))
                {
                    if (!(v30->field_4 ^ 101) && !(v30->field_0 ^ 1818846765))
                    {
                        if (v20 <= v23)
                        {
                            core::panicking::panic_bounds_check::he579b0a9d71a3102(v28 + 1, v20, &g_474468); /* do not return */
                        }
                        else if (!(char)std::path::Path::is_file::h26f29fcceca286a1(v21->field_-18, v21->field_-8))
                        {
                            if (v20 <= v23)
                                core::panicking::panic_bounds_check::he579b0a9d71a3102(v28 + 1, v20, &g_474528); /* do not return */
                            v6 = v21;
                            v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                            v0 = &g_474508.field_-18;
                            v1 = 2;
                            v2 = 0;
                            v4 = &v6;
                            v5 = 1;
                            std::io::stdio::_print::h7035045a22bdb588(&v0, v25, v26);
                        }
                        else if (v20 <= v28)
                        {
                            core::panicking::panic_bounds_check::he579b0a9d71a3102(v28, v20, &g_4744c0); /* do not return */
                        }
                        else if (v20 <= v23)
                        {
                            core::panicking::panic_bounds_check::he579b0a9d71a3102(v28 + 1, v20, &g_4744d8); /* do not return */
                        }
                        else
                        {
                            v0 = v19;
                            v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                            v2 = &v21->field_0;
                            v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                            v4 = v21;
                            v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                            v6 = &g_474480.field_-18;
                            v7 = 4;
                            v8 = 0;
                            v9 = &v0;
                            v10 = 3;
                            std::io::stdio::_print::h7035045a22bdb588(&v6, v25, v26);
                            if (v20 <= v23)
                                core::panicking::panic_bounds_check::he579b0a9d71a3102(v28 + 1, v20, &g_4744f0); /* do not return */
                            v35 = v21->field_-18;
                            v36 = v21->field_-8;
                            if (!v36)
                            {
                                v37 = 1;
                            }
                            else
                            {
                                v37 = __rust_alloc(v36, 1);
                                if (!v37)
                                    alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
                            }
                            memcpy(v37, v35, v36);
                            v0 = v37;
                            v1 = v36;
                            v2 = v36;
                            linux_encryptor::files::add_file::h9f8ecb31ebca83c0(&v0, v25);
                            v43 = v1;
                            v33 = v12;
                            v34 = v13;
                            if (v43)
                            {
                                __rust_dealloc(v0);
                                v12 = v12;
                                v13 = v13;
                            }
                        }
                    }
                    v29 = v21->padding_-10;
                }
                else
                {
                    v0 = &g_474418.field_-18;
                    v1 = 1;
                    v2 = 0;
                    v4 = "How to use:\n -file /home/user/Desktop/file.txt (Encrypts file.txt in /home/user/Desktop directory)\nsrc/main.rs -dir /home/user/Desktop/ (Encrypts /home/user/Desktop/ directory)\n  encrypting\nError  isn't file!\n isn't directory!\n/home/username/.cargo/registry/src/github.com-1ecc6299db9ec823/base64-stream-1.2.7/src/from_base64_reader.rs/rustc/fe5b13d681f25ee6474be29d748c65adcd91f69e/library/std/src/io/impls.rs";
                    v5 = 0;
                    std::io::stdio::_print::h7035045a22bdb588(&v0, v43, v32 | v31);
                    v6 = v19;
                    v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                    v0 = &g_474428.field_-18;
                    v1 = 2;
                    v2 = 0;
                    v4 = &v6;
                    v5 = 1;
                    std::io::stdio::_print::h7035045a22bdb588(&v0, v25, v26);
                    v6 = v19;
                    v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                    v0 = &g_474448.field_-18;
                    v1 = 2;
                    v2 = 0;
                    v4 = &v6;
                    v5 = 1;
                    std::io::stdio::_print::h7035045a22bdb588(&v0, v25, v26);
                    goto LABEL_40e211;
                }
            }
            if (v29 == 4 && *((int *)v21->field_0) == 1919509549)
            {
                if (v20 <= v23)
                {
                    core::panicking::panic_bounds_check::he579b0a9d71a3102(v28 + 1, v20, &g_474540); /* do not return */
                }
                else if (!(char)std::path::Path::is_dir::ha9f0bdbf3023c324(v21->field_-18, v21->field_-8))
                {
                    if (v20 > v23)
                    {
                        v6 = v21;
                        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                        v0 = &g_4745a0.field_-18;
                        v1 = 2;
                        v2 = 0;
                        v4 = &v6;
                        v5 = 1;
                        std::io::stdio::_print::h7035045a22bdb588(&v0, v25, v26);
                    }
                    else
                    {
                        core::panicking::panic_bounds_check::he579b0a9d71a3102(v28 + 1, v20, &g_4745c0); /* do not return */
                    }
                }
                else
                {
                    if (v20 <= v28)
                    {
                        core::panicking::panic_bounds_check::he579b0a9d71a3102(v28, v20, &g_474558); /* do not return */
                    }
                    else if (v20 <= v23)
                    {
                        core::panicking::panic_bounds_check::he579b0a9d71a3102(v28 + 1, v20, &g_474570); /* do not return */
                    }
                    else
                    {
                        v0 = v19;
                        v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                        v2 = &v21->field_0;
                        v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                        v4 = v21;
                        v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
                        v6 = &g_474480.field_-18;
                        v7 = 4;
                        v8 = 0;
                        v9 = &v0;
                        v10 = 3;
                        std::io::stdio::_print::h7035045a22bdb588(&v6, v25, v26);
                        if (v20 <= v23)
                            core::panicking::panic_bounds_check::he579b0a9d71a3102(v28 + 1, v20, &g_474588); /* do not return */
                        v40 = v21->field_-18;
                        v41 = v21->field_-8;
                        if (!v41)
                        {
                            v42 = 1;
                        }
                        else
                        {
                            v42 = __rust_alloc(v41, 1);
                            if (!v42)
                                alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
                        }
                        memcpy(v42, v40, v41);
                        v0 = v42;
                        v1 = v41;
                        v2 = v41;
                        linux_encryptor::files::walk_dir::h3bbd2a8a81e3b38e(&v0);
                        v43 = v1;
                        v33 = v12;
                        v34 = v13;
                        if (v43)
                        {
                            __rust_dealloc(v0);
                            v12 = v12;
                            v13 = v13;
                        }
                    }
                }
            }
            v19 = v39;
            v21 = &v21->field_0;
        } while (v24 != 24);
        if (v20 == 1)
        {
            v0 = &g_474418.field_-18;
            v1 = 1;
            v2 = 0;
            v4 = "How to use:\n -file /home/user/Desktop/file.txt (Encrypts file.txt in /home/user/Desktop directory)\nsrc/main.rs -dir /home/user/Desktop/ (Encrypts /home/user/Desktop/ directory)\n  encrypting\nError  isn't file!\n isn't directory!\n/home/username/.cargo/registry/src/github.com-1ecc6299db9ec823/base64-stream-1.2.7/src/from_base64_reader.rs/rustc/fe5b13d681f25ee6474be29d748c65adcd91f69e/library/std/src/io/impls.rs";
            v5 = 0;
            std::io::stdio::_print::h7035045a22bdb588(&v0, v43, 1818846765);
            v6 = v19;
            v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
            v0 = &g_474428.field_-18;
            v1 = 2;
            v2 = 0;
            v4 = &v6;
            v5 = 1;
            std::io::stdio::_print::h7035045a22bdb588(&v0, v25, v26);
            v6 = v19;
            v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hc6b81e82dc44d718;
            v0 = &g_474448.field_-18;
            v1 = 2;
            v2 = 0;
            v4 = &v6;
            v5 = 1;
            std::io::stdio::_print::h7035045a22bdb588(&v0, v25, v26);
        }
        else if (v20)
        {
            v45 = 0;
            do
            {
                if (*((long long *)(v19 + v45 + 8)))
                    __rust_dealloc(*((long long *)(v19 + v45)));
            } while ((v45 += 24, v11 * 3 != v45));
        }
LABEL_40e211:
        if (v20)
        {
            v46 = 0;
            do
            {
                if (*((long long *)(v19 + v46 + 8)))
                    __rust_dealloc(*((long long *)(v19 + v46)));
            } while ((v46 += 24, v11 * 3 != v46));
        }
    }
    v47 = *((long long *)&v15);
    if (v47 && v47 * 24)
        __rust_dealloc(v19);
    return v47;
}
