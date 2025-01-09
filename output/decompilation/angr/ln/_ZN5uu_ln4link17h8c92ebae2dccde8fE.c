long long uu_ln::link::h8c92ebae2dccde8f(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[54])
{
    char v0;  // [sp-0x18d]
    unsigned int v1;  // [sp-0x18c]
    char v2;  // [bp-0x188], Other Possible Types: unsigned long, unsigned long long
    int v3;  // [sp-0x180], Other Possible Types: unsigned long, unsigned long long
    unsigned long v4;  // [sp-0x178], Other Possible Types: unsigned long long
    char v5;  // [sp-0x170]
    int v6;  // [bp-0x168], Other Possible Types: char, unsigned long long
    unsigned long long v7;  // [sp-0x160]
    unsigned long long v8;  // [sp-0x158]
    char v9;  // [sp-0x150]
    unsigned long long v10;  // [sp-0x140]
    char v11;  // [bp-0x130]
    unsigned long long v12[3];  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long v13;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x118]
    unsigned long long v15;  // [sp-0x110]
    char *v16;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned long v17;  // [sp-0x100], Other Possible Types: unsigned long long
    struct struct_0 **v18;  // [sp-0xf8], Other Possible Types: unsigned long long
    int v19;  // [sp-0xf0], Other Possible Types: unsigned long long
    void* v20;  // [sp-0xe8]
    char *v21;  // [sp-0x58]
    unsigned long long v22;  // [sp-0x50]
    char *v23;  // [sp-0x48]
    unsigned long long v24;  // [sp-0x40]
    unsigned long long v26;  // rax
    unsigned long long v27;  // 4149
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rax
    void* v30;  // rax
    char v31;  // bl

    v26 = 0x8000000000000000;
    v10 = 0x8000000000000000;
    v27 = a4[49];
    v15 = a0;
    if (!(char)v27)
    {
        v13 = a0;
        v14 = a1;
        v12 = 0x8000000000000000;
    }
    else
    {
        v26 = uu_ln::relative_path::ha14d8bdd96810d1d(v12, a0, a1, a2, a3);
    }
    v1 = v26 & 0xffffffffffffff00 | 1;
    if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3))
    {
        goto *((int *)(4319464 + a4[1 + 1] * 4)) + 4319464;
    }
    else
    {
        std::fs::metadata::hebad4fc3d3e825b8(&v16, a2, a3);
        v28 = v17;
        if (v16 != 2)
        {
            ::0x4b84f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(v16, v28);
            goto *((int *)(4319464 + a4[1 + 1] * 4)) + 4319464;
        }
        else
        {
            ::0x4b84f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(2, v28);
            v0 = a4[48];
            if (!v0)
            {
                if (!a4[50] || !(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v13, v14))
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v6, v13, v14);
                }
                else
                {
                    std::fs::canonicalize::h9984b9af66694330(&v16, v12);
                    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9a2705f0495ff63b(&v2, &v16, v12);
                    v30 = v3;
                    if (v6 == 0x8000000000000000)
                    {
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::h64f669095bad1067(v12);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h31d4f7ecf091fd1c(&v10);
                        return v30;
                    }
                    v6 = v2;
                    v7 = v30;
                    v8 = v4;
                }
                v18 = v8;
                v16 = v6;
                v17 = v7;
                *((unsigned long long [3])&v16) = v12;
                v17 = a2;
                v18 = a3;
                v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h35311f61e0a1e46b(std::fs::hard_link::hedb4a065c044017d(&v16, a2, a3), &v16);
                if (!v30)
                {
LABEL_4baa44:
                    if (!a4[53])
                    {
LABEL_4bab5c:
                        v31 = 0;
                    }
                    else
                    {
                        v6 = 1;
                        v7 = a2;
                        v8 = a3;
                        v9 = 1;
                        v2 = 1;
                        *((int128_t *)&v3) = *((int128_t *)&v13);
                        v5 = 1;
                        v21 = &v6;
                        v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v23 = &v2;
                        v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v16 = &g_52d088;
                        v17 = 2;
                        v20 = 0;
                        v18 = &v21;
                        v19 = 2;
                        *((char **)&v1) = &g_52d001;
                        std::io::stdio::_print::he918bceb0c89db46(&v16);
                        if (v10 != 0x8000000000000000)
                        {
                            v8 = *((long long *)&v11);
                            *((int128_t *)&v6) = *((int128_t *)&v10);
                            v2 = 1;
                            v3 = v7;
                            v4 = v8;
                            v5 = 1;
                            v21 = &v2;
                            v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            v16 = &g_52d0b8;
                            v17 = 2;
                            v20 = 0;
                            v18 = &v21;
                            v19 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&v16);
                            v1 = 0;
                            ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3();
                            v31 = 1;
                        }
                        else
                        {
                            v16 = &g_52d0a8;
                            v17 = 1;
                            v18 = 8;
                            *((uint128_t *)&v19) = 0;
                            std::io::stdio::_print::he918bceb0c89db46(&v16);
                            goto LABEL_4bab5c;
                        }
                    }
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::h64f669095bad1067(v12);
                    if (!(v10 != 0x8000000000000000 & ~(v31)))
                        return 0;
                    ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3();
                }
            }
            else
            {
                v29 = std::os::unix::fs::symlink::ha8160bb27397fc33(v12, a2, a3);
                if (!v29)
                    goto LABEL_4baa44;
                v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v29);
            }
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::h64f669095bad1067(v12);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h31d4f7ecf091fd1c(&v10);
            return v30;
        }
    }
}
