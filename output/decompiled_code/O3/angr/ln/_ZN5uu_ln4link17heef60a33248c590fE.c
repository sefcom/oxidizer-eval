int uu_ln::link::heef60a33248c590f()
{
    unsigned long long v0;  // [sp-0x190]
    char v1;  // [bp-0x180]
    int v2;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x170]
    unsigned long long v4;  // [sp-0x168]
    char v5;  // [sp-0x160]
    char v6;  // [bp-0x150], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0x148]
    unsigned long v8;  // [sp-0x140], Other Possible Types: unsigned long long
    char v9;  // [sp-0x138]
    char v10;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x128]
    unsigned long long v12;  // [sp-0x120]
    unsigned long v13;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x110]
    unsigned long v15;  // [sp-0x108], Other Possible Types: unsigned long long
    int v16;  // [sp-0x100], Other Possible Types: unsigned long long
    void* v17;  // [sp-0xf8]
    char v18;  // [bp-0x60], Other Possible Types: unsigned long, unsigned long long
    unsigned long v19;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long v20;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x48]
    char v22;  // [bp-0x40]
    char v24[54];  // r8
    unsigned long v26;  // rdi
    unsigned long long v27;  // rbx
    unsigned long long v28;  // r14
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rcx
    unsigned long long v31;  // rax
    unsigned long v32;  // rsi, Other Possible Types: unsigned long long
    unsigned long long v33;  // rbp
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rax
    uint128_t v36[2];  // rax
    int v37;  // xmm0
    unsigned long long v38;  // r13
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rsi
    unsigned long long v41;  // r13
    unsigned long long v42;  // rsi
    char v43;  // bl
    unsigned long long v44;  // rsi

    if (!v24[49])
    {
        v11 = v26;
        v12 = v32;
        goto LABEL_4892d4;
    }
    uucore::features::fs::canonicalize::h9b86634d4c01eb67(&v18, v26, v32, 2, 1);
    v27 = v18;
    v28 = v19;
    if (v27 == 0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h75f7b1879fd717cc(v28);
        goto LABEL_4892c0;
    }
    else
    {
        v31 = std::path::Path::parent::h65c9a340a6266f2d(v29, v30, v29, v30);
        if (!v31)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        uucore::features::fs::canonicalize::h9b86634d4c01eb67(&v6, v31, v29, 2, 1);
        if (v6 != 0x8000000000000000)
        {
            v4 = v8;
            *((int128_t *)&v2) = *((int128_t *)&v6);
            v13 = v27;
            v14 = v28;
            v15 = v20;
            uucore::features::fs::make_path_relative_to::h4b8535b263d9d770(&v10, &v13, &v2);
        }
        else
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h75f7b1879fd717cc(v7);
            if (v27)
                __rust_dealloc(v28);
LABEL_4892c0:
            v11 = v26;
            v12 = v32;
LABEL_4892d4:
            v10 = 0x8000000000000000;
        }
        if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v29, v30))
        {
            goto *((int *)(4301704 + *((char *)((long long)(stack_base)[344] + 55)) * 4)) + 4301704;
        }
        else
        {
            std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v13, v29, v30);
            if ((int)v13 != 2)
            {
                goto *((int *)(4301704 + *((char *)((long long)(stack_base)[344] + 55)) * 4)) + 4301704;
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h75f7b1879fd717cc(v14);
                v0 = 0x8000000000000000;
                if (v24[48])
                {
                    v33 = v11;
                    v34 = v12;
                    v35 = std::sys::pal::unix::fs::symlink::h11d0a05d1a49fd8c(v33, v34, v29, v30);
                    if (!v35)
                        goto LABEL_4899cb;
                    v13 = 0x8000000000000000;
                    v16 = v35;
                    v36 = __rust_alloc(32, 8);
                    if (!v36)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v37 = *((int128_t *)&v13);
                    v36[1] = *((int128_t *)&v15);
                    *((void*)&v36[0]) = v37;
                }
                else
                {
                    v33 = v11;
                    v34 = v12;
                    if (!v24[50] || !(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v33, v34))
                    {
                        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v2, v33, v34);
                        v3 = v3;
                        v2 = v2;
                        goto LABEL_489954;
                    }
                    else
                    {
                        std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v13, v33, v34);
                        if (v2 == 0x8000000000000000)
                        {
                            _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h912f9a1b33ddeff0(v3, &v10);
                        }
                        else
                        {
                            v2 = v13;
                            v3 = v14;
                            v4 = v15;
                            v3 = v3;
                            v2 = v2;
LABEL_489954:
                            v38 = std::sys::pal::unix::fs::link::hae2124bdbb987c3a(v3, v4, v29, v30);
                            if (v2)
                                __rust_dealloc(v3);
                            if (v38)
                            {
                                v13 = &v10;
                                v14 = v29;
                                v15 = v30;
                                _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h2341e6d750385ebc(v38, &v13);
                            }
                            else
                            {
LABEL_4899cb:
                                if (!v24[53])
                                {
LABEL_489aee:
                                    v43 = 0;
                                    v0 = v0;
                                }
                                else
                                {
                                    v6 = 1;
                                    v7 = v29;
                                    v8 = v30;
                                    v9 = 1;
                                    v2 = 1;
                                    v3 = v33;
                                    v4 = v34;
                                    v5 = 1;
                                    v18 = &v6;
                                    v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                    v20 = &v2;
                                    v21 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                    v13 = &g_4efaf0;
                                    v14 = 2;
                                    v17 = 0;
                                    v15 = &v18;
                                    v16 = 2;
                                    std::io::stdio::_print::he918bceb0c89db46(&v13, v40, v39);
                                    v41 = v0;
                                    if (v41 != 0x8000000000000000)
                                    {
                                        v2 = 1;
                                        v3 = *((long long *)&v1);
                                        v4 = *((long long *)&v22);
                                        v5 = 1;
                                        v6 = &v2;
                                        v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                        v13 = &g_4efb20;
                                        v14 = 2;
                                        v17 = 0;
                                        v15 = &v6;
                                        v16 = 1;
                                        std::io::stdio::_print::he918bceb0c89db46(&v13, v32, v29);
                                        v43 = &v6 | -0x100 | 1;
                                        if (v41)
                                            __rust_dealloc(*((long long *)&v1));
                                    }
                                    else
                                    {
                                        v13 = &g_4efb10;
                                        v14 = 1;
                                        v15 = 8;
                                        *((int128_t *)&v16) = 0;
                                        std::io::stdio::_print::he918bceb0c89db46(&v13, v32, v29);
                                        goto LABEL_489aee;
                                    }
                                }
                                v44 = v10;
                                if (v44 != 0x8000000000000000 && v44)
                                    __rust_dealloc(v11);
                                if (!(!v43 && v0 << 1))
                                    return;
                                __rust_dealloc(*((long long *)&v1));
                            }
                        }
                    }
                }
                v42 = v10;
                if (v42 != 0x8000000000000000 && v42)
                    __rust_dealloc(v11);
                if (!v0 << 1)
                    return;
                __rust_dealloc(*((long long *)&v1));
            }
        }
    }
}
