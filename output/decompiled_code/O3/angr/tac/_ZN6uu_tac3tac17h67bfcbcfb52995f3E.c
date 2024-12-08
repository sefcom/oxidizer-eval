long long uu_tac::tac::h67bfcbcfb52995f3(unsigned long a0, unsigned long a1, unsigned int a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    void* v0;  // [bp-0x210], Other Possible Types: char, unsigned long, unsigned long long
    char v1;  // [bp-0x208], Other Possible Types: unsigned long long
    char v2;  // [bp-0x200], Other Possible Types: unsigned long long
    char v3;  // [bp-0x1f8], Other Possible Types: unsigned long
    char v4;  // [bp-0x1f0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v5;  // [sp-0x1e8], Other Possible Types: unsigned long long
    char v6;  // [bp-0x1e0]
    int v7;  // [sp-0x1d8], Other Possible Types: void*, unsigned long long
    unsigned long long v8;  // [sp-0x1d0]
    void* v9;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x1a8]
    unsigned long v12;  // [sp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x198]
    unsigned long v14;  // [sp-0x190], Other Possible Types: unsigned long long
    unsigned long v15;  // [sp-0x188], Other Possible Types: unsigned long long
    char v16;  // [bp-0x180]
    unsigned long v17;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x170]
    int v19;  // [sp-0x168]
    unsigned long long v20;  // [sp-0x158]
    unsigned long long v21;  // [sp-0x148]
    unsigned long long v22;  // [sp-0x140]
    int v23;  // [sp-0x138], Other Possible Types: unsigned long long
    int v24;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x128]
    unsigned long long v26;  // [sp-0x120]
    void* v27;  // [sp-0x118]
    void* v28;  // [bp-0x88], Other Possible Types: int
    int v29;  // [sp-0x78]
    unsigned long v30;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x50]
    char v32;  // [bp-0x48]
    char v33;  // [bp-0x38]
    int v35;  // xmm0
    int v36;  // ymm0
    int v37;  // ymm0
    void* v38;  // rax
    unsigned long long v39[2];  // rax
    unsigned long long v40;  // r14
    unsigned long long v41;  // r12
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rbp
    unsigned long long v44;  // r13
    unsigned long long v45;  // r13
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax
    int v48;  // xmm0
    unsigned long long v49;  // rsi
    int v50;  // xmm0
    int v51;  // xmm0
    unsigned long long v53;  // r13
    unsigned long long v54;  // rbp
    char v55;  // r12b
    unsigned long long v56;  // rsi
    int v57;  // xmm0
    unsigned long long v58;  // rbp
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    unsigned long long v62;  // r13

    if (!a3)
    {
        v22 = a5;
        v28 = 0;
    }
    else
    {
        regex::regex::bytes::Regex::new::h5cbe252b7ef3c046(&v0, a4, a5, a3, a4, a5);
        if (!v0)
        {
            v26 = *((long long *)&v3);
            *((int128_t *)&v24) = *((int128_t *)&v1);
            v23 = 0x8000000000000000;
            v38 = alloc::boxed::Box$LT$T$GT$::new::h4dcac0d841b2099c(&v23);
            return v38;
        }
        v22 = a5;
        v35 = *((int128_t *)&v0);
        v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
        *((int128_t *)&v29) = *((int128_t *)&v2);
        v28 = v35;
    }
    v30 = a0;
    v31 = a1 * 16 + a0;
    v39 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc8675363ca29e3da(&v30);
    if (v39)
    {
        v40 = "-: \nstdinInvalidRegexInvalidArgumentFileNotFoundReadErrorWriteError";
        v41 = &v4;
        v42 = &g_6c9130;
        do
        {
            v43 = v39[0];
            v44 = v39[1];
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4c7a23bfb228c4fa(v43, v44, v40, 1))
            {
                uu_tac::try_mmap_stdin::hea665cf1290f39eb(v41);
                if (v4)
                {
                    v45 = *((long long *)&v6);
                    v5 = v5;
                    goto LABEL_59fb69;
                }
                else
                {
                    v7 = 0;
                    v8 = 1;
                    v9 = 0;
                    v12 = std::io::stdio::stdin::h7215cc131abb55d8();
                    v47 = _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_end::hc18c61afec27b79c(&v12, &v7, v46);
                    if (v47 != 1)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hff4e0e26576fa07b(v47, v46);
                        v51 = *((int128_t *)&v7);
                        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                        v19 = v51;
                        v53 = v9;
                        v20 = v53;
                        v54 = (long long)(&v19)[8];
                        v55 = v41 | -0x100 | 1;
                        if (v4)
                            core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h1affd28a2ca92b56(&v5);
                    }
                    else
                    {
                        ::0x59ecf0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1daa62634acffad4(&v0, "stdinInvalidRegexInvalidArgumentFileNotFoundReadErrorWriteError", 5);
                        v25 = v2;
                        v50 = *((int128_t *)&v0);
                        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                        v23 = v50;
                        v26 = v46;
                        *((double *)&v10) = alloc::boxed::Box$LT$T$GT$::new::h4dcac0d841b2099c(&v23);
                        v11 = v42;
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                        v14 = uucore::util_name::h412db5e565a079f3();
                        v15 = v46;
                        v0 = &v14;
                        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h91343ca654d4f042;
                        v2 = &v10;
                        v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he3d21b7149834b6c;
                        v23 = &g_6c91a0;
                        v24 = 3;
                        v27 = 0;
                        v25 = &v0;
                        v26 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v56, v46);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h35fdd21328e7e7a3(v10, v11);
                        ::0x59d900::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1c19e7f277727a62(&v7);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$memmap2..Mmap$GT$$GT$::h74735df6f4c472f5(v41);
                        continue;
                    }
                    goto LABEL_59ff8a;
                }
            }
            else
            {
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(v43, v44))
                {
                    ::0x59ecf0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1daa62634acffad4(&v0, v43, v44);
                    v26 = v2;
                    v48 = *((int128_t *)&v0);
                    v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
                    v24 = v48;
                    v23 = 9223372036854775809;
                    *((double *)&v4) = alloc::boxed::Box$LT$T$GT$::new::h4dcac0d841b2099c(&v23);
                    v5 = v42;
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    v7 = uucore::util_name::h412db5e565a079f3();
                    v8 = v46;
                    v0 = &v7;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h91343ca654d4f042;
                    v2 = v41;
                    v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he3d21b7149834b6c;
                    v23 = &g_6c91a0;
                    v24 = 3;
                    v27 = 0;
                    v25 = &v0;
                    v26 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v56, v46);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h35fdd21328e7e7a3(v4, v5);
                    continue;
                }
                std::fs::metadata::hf5a4b1b30f988d8e(&v23, v43, v44);
                v49 = v24;
                if (v23 == 2)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h05bba7298f18fbbe(2, v49);
                    ::0x59ecf0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1daa62634acffad4(&v0, v43, v44);
                    v26 = v2;
                    v57 = *((int128_t *)&v0);
                    v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
                    v24 = v57;
                    v23 = 9223372036854775810;
                    *((double *)&v4) = alloc::boxed::Box$LT$T$GT$::new::h4dcac0d841b2099c(&v23);
                    v5 = v42;
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    v7 = uucore::util_name::h412db5e565a079f3();
                    v8 = v46;
                    v0 = &v7;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h91343ca654d4f042;
                    v2 = v41;
                    v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he3d21b7149834b6c;
                    v23 = &g_6c91a0;
                    v24 = 3;
                    v27 = 0;
                    v25 = &v0;
                    v26 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v56, v46);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h35fdd21328e7e7a3(v4, v5);
                    continue;
                }
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h05bba7298f18fbbe(v23, v49);
                uu_tac::try_mmap_path::h341f50a15387d71e(&v14, v43, v44);
                if (!v14)
                {
                    std::fs::read::h4b6c790c571310e8(v41, v43, v44);
                    if (v4 != 0x8000000000000000)
                    {
                        v59 = *((int128_t *)&v4);
                        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
                        v19 = v59;
                        v53 = *((long long *)&v6);
                        v20 = v53;
                        v54 = (long long)(&v19)[8];
                        v55 = v41 | -0x100 | 1;
                        if (v14)
                            core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h1affd28a2ca92b56(&v15);
                    }
                    else
                    {
                        v21 = v5;
                        v0 = 0;
                        v1 = v43;
                        v2 = v44;
                        v3 = 1;
                        v7 = &v0;
                        v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v23 = &g_463b30;
                        v24 = 1;
                        v27 = 0;
                        v25 = &v7;
                        v26 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::h6f1ec8134b601e2d(&v32, &v23);
                        v60 = *((int128_t *)&v32);
                        v7 = v60;
                        v9 = *((long long *)&v33);
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, &v7);
                        v42 = &g_6c9130;
                        v25 = v2;
                        v61 = *((int128_t *)&v0);
                        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                        v23 = v61;
                        v26 = v21;
                        *((double *)&v12) = alloc::boxed::Box$LT$T$GT$::new::h4dcac0d841b2099c(&v23);
                        v13 = &g_6c9130;
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                        v10 = uucore::util_name::h412db5e565a079f3();
                        v11 = v46;
                        v0 = &v10;
                        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h91343ca654d4f042;
                        v2 = &v12;
                        v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he3d21b7149834b6c;
                        v23 = &g_6c91a0;
                        v24 = 3;
                        v27 = 0;
                        v25 = &v0;
                        v26 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v56, v46);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h35fdd21328e7e7a3(v12, v13);
                        ::0x59d820::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he979a0b64731f433(&v7);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$memmap2..Mmap$GT$$GT$::h74735df6f4c472f5(&v14);
                        continue;
                    }
LABEL_59ff8a:
LABEL_59ff8d:
                    if (!v24)
                    {
                        if (v55)
                            ::0x59d900::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1c19e7f277727a62(&v19);
                        v41 = &v4;
                        core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h1affd28a2ca92b56(&v17);
                        v40 = "-: \nstdinInvalidRegexInvalidArgumentFileNotFoundReadErrorWriteError";
                    }
                    else
                    {
                        *((int *)&v24) = (!(long long)v28 ? uu_tac::buffer_tac::hd51ae2df78f23baa(v58, v62, a2, a4, v22) : uu_tac::buffer_tac_regex::h1f262771b03a0535(v58, v62, (long long)v28, (long long)(&v28)[8], a2));
                        v23 = 9223372036854775812;
                        v38 = alloc::boxed::Box$LT$T$GT$::new::h4dcac0d841b2099c(&v23);
                        if (v55)
                            ::0x59d900::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1c19e7f277727a62(&v19);
                        core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h1affd28a2ca92b56(&v17);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..bytes..Regex$GT$$GT$::h13eb713984eb02af(&v28);
                        return v38;
                    }
                }
                else
                {
                    v45 = *((long long *)&v16);
                    v5 = v15;
LABEL_59fb69:
                    v58 = v5;
                    v17 = v58;
                    v18 = v45;
                    v55 = 0;
                    goto LABEL_59ff8d;
                }
            }
        } while ((v39 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc8675363ca29e3da(&v30), v39));
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..bytes..Regex$GT$$GT$::h13eb713984eb02af(&v28);
    return 0;
}
