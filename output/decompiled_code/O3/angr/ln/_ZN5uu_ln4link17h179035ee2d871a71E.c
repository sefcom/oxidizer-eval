int uu_ln::link::h179035ee2d871a71()
{
    unsigned int v0;  // [sp-0x18c]
    char v1;  // [bp-0x188], Other Possible Types: unsigned long, unsigned long long
    int v2;  // [sp-0x180], Other Possible Types: unsigned long, unsigned long long
    unsigned long v3;  // [sp-0x178], Other Possible Types: unsigned long long
    char v4;  // [sp-0x170]
    int v5;  // [bp-0x168], Other Possible Types: char, unsigned long long
    unsigned long long v6;  // [sp-0x160]
    unsigned long long v7;  // [sp-0x158]
    char v8;  // [sp-0x150]
    unsigned long long v9;  // [sp-0x140]
    char v10;  // [bp-0x130]
    unsigned long long v11[3];  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long v12;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x118]
    unsigned long long v14;  // [sp-0x110]
    char v15;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned long v16;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0xf8]
    int v18;  // [sp-0xf0], Other Possible Types: unsigned long long
    void* v19;  // [sp-0xe8]
    unsigned long v20;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x50]
    unsigned long long v22;  // [sp-0x48]
    unsigned long long v23;  // [sp-0x40]
    unsigned long long v25;  // rax
    char v26[54];  // r8
    unsigned long long v27;  // 4149
    unsigned long long v28;  // rdi
    unsigned long v29;  // rsi
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rcx
    unsigned int v32;  // r9
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rsi
    char v37;  // bl

    v25 = 0x8000000000000000;
    v9 = 0x8000000000000000;
    v27 = v26[49];
    v14 = v28;
    if (!(char)v27)
    {
        v12 = v28;
        v13 = v29;
        v11 = 0x8000000000000000;
    }
    else
    {
        v25 = uu_ln::relative_path::he28c1e1cf68f2c09(v11, v28, v29, v30, v31, v32);
    }
    v0 = v25 | -0x100 | 1;
    if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v30, v31))
    {
        goto *((int *)(4319496 + *((char *)(vvar_116{reg 80} + 55)) * 4)) + 4319496;
    }
    else
    {
        std::fs::metadata::hf1d4ccf38989bef2(&v15, v30, v31);
        v33 = v16;
        if (v15 != 2)
        {
            ::0x4b81d0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h628b93203760f254(v15, v33);
            goto *((int *)(4319496 + *((char *)(vvar_116{reg 80} + 55)) * 4)) + 4319496;
        }
        else
        {
            ::0x4b81d0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h628b93203760f254(2, v33);
            if (!*((char *)(vvar_116{reg 80} + 48)))
            {
                if (!*((char *)(vvar_116{reg 80} + 50)) || !(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v12, v13))
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v5, v12, v13);
                }
                else
                {
                    std::fs::canonicalize::hf7c739fc858451dd(&v15, v11, v30);
                    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hff17566fe7553024(&v1, &v15, v11);
                    if (v5 == 0x8000000000000000)
                    {
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::h51d02f312066ad70(v11);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7d787026f5826d79(&v9);
                        return;
                    }
                    v5 = v1;
                    v6 = v2;
                    v7 = v3;
                }
                v17 = v7;
                v15 = v5;
                v16 = v6;
                *((unsigned long long [3])&v15) = v11;
                v16 = v30;
                v17 = v31;
                if (!_$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h97539a8cfa2226ff(std::fs::hard_link::h390e165ca862a246(&v15, v30, v31), &v15))
                {
LABEL_4ba771:
                    if (!*((char *)(vvar_116{reg 80} + 53)))
                    {
LABEL_4ba889:
                        v37 = 0;
                    }
                    else
                    {
                        v5 = 1;
                        v6 = v30;
                        v7 = v31;
                        v8 = 1;
                        v1 = 1;
                        *((int128_t *)&v2) = *((int128_t *)&v12);
                        v4 = 1;
                        v20 = &v5;
                        v21 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v22 = &v1;
                        v23 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v15 = &g_52d7b0;
                        v16 = 2;
                        v19 = 0;
                        v17 = &v20;
                        v18 = 2;
                        v0 = -79;
                        std::io::stdio::_print::he918bceb0c89db46(&v15, v36, v35);
                        if (v9 != 0x8000000000000000)
                        {
                            v7 = *((long long *)&v10);
                            *((int128_t *)&v5) = *((int128_t *)&v9);
                            v1 = 1;
                            v2 = v6;
                            v3 = v7;
                            v4 = 1;
                            v20 = &v1;
                            v21 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v15 = &g_52d7e0;
                            v16 = 2;
                            v19 = 0;
                            v17 = &v20;
                            v18 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&v15, v29, v30);
                            v0 = 0;
                            ::0x4b77a0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc15fd571fc19ad9b(&v5);
                            v37 = 209;
                        }
                        else
                        {
                            v15 = &g_52d7d0;
                            v16 = 1;
                            v17 = 8;
                            *((int128_t *)&v18) = 0;
                            std::io::stdio::_print::he918bceb0c89db46(&v15, v29, v30);
                            goto LABEL_4ba889;
                        }
                    }
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::h51d02f312066ad70(v11);
                    if (!(v9 != 0x8000000000000000 & ~(v37)))
                        return;
                    ::0x4b77a0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc15fd571fc19ad9b(&v9);
                }
            }
            else
            {
                v34 = std::os::unix::fs::symlink::h2f23a95abb8b5291(v11, v30, v31);
                if (!v34)
                    goto LABEL_4ba771;
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v34);
            }
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::h51d02f312066ad70(v11);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7d787026f5826d79(&v9);
            return;
        }
    }
}
