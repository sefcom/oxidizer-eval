long long uu_tac::tac::h3cfa8e66554e074d(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    void* v0;  // [bp-0x210], Other Possible Types: struct struct_0 **, unsigned long
    char v1;  // [bp-0x208], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [bp-0x200], Other Possible Types: char, unsigned long long
    char v3;  // [bp-0x1f8], Other Possible Types: unsigned long
    char v4;  // [bp-0x1f0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x1e8]
    char v6;  // [bp-0x1e0]
    void* v7;  // [sp-0x1d8], Other Possible Types: struct struct_0 **
    unsigned long long v8;  // [sp-0x1d0]
    void* v9;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x1a8]
    unsigned long v12;  // [sp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x198]
    unsigned long v14;  // [sp-0x190], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x188]
    char v16;  // [bp-0x180]
    unsigned long long v17;  // [sp-0x178]
    unsigned long long v18;  // [sp-0x170]
    int v19;  // [sp-0x168], Other Possible Types: struct struct_0 **
    unsigned long long v20;  // [sp-0x158]
    unsigned long long v21;  // [sp-0x148]
    unsigned long long v22;  // [sp-0x140]
    struct struct_0 **v23;  // [sp-0x138], Other Possible Types: unsigned long long
    struct struct_0 **v24;  // [bp-0x130], Other Possible Types: unsigned long long
    struct struct_0 **v25;  // [sp-0x128], Other Possible Types: unsigned long long
    struct struct_0 **v26;  // [sp-0x120], Other Possible Types: unsigned long long
    void* v27;  // [sp-0x118]
    void* v28;  // [bp-0x88], Other Possible Types: struct struct_0 **
    struct struct_0 **v29;  // [sp-0x78]
    unsigned long v30;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x50]
    char v32;  // [bp-0x48]
    char v33;  // [bp-0x38]
    struct struct_0 **v35;  // xmm0
    int v36;  // ymm0
    int v37;  // ymm0
    void* v38;  // rax
    unsigned long long v39[2];  // rax
    unsigned long long v40;  // r14
    struct struct_0 **v41;  // r12
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rbp
    unsigned long long v44;  // r13
    unsigned long long v45;  // r13
    unsigned long long v46;  // rax
    struct struct_0 **v47;  // xmm0
    struct struct_0 **v48;  // rsi
    unsigned long long v49;  // rdx
    struct struct_0 **v50;  // xmm0
    struct struct_0 **v51;  // xmm0
    unsigned long long v53;  // r13
    unsigned long long v54;  // rbp
    char v55;  // r12b
    struct struct_0 **v56;  // xmm0
    unsigned long long v57;  // rbp
    struct struct_0 **v58;  // xmm0
    struct struct_0 **v59;  // xmm0
    struct struct_0 **v60;  // xmm0
    unsigned long long v61;  // r13

    if (!a3)
    {
        v22 = a5;
        v28 = 0;
    }
    else
    {
        regex::regex::bytes::Regex::new::h0f09d91ae51aad3e(&v0, a4, a5);
        if (!v0)
        {
            v26 = *((long long *)&v3);
            *((int128_t *)&v24) = *((int128_t *)&v1);
            v23 = 0x8000000000000000;
            v38 = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&v23);
            return v38;
        }
        v22 = a5;
        v35 = *((int128_t *)&v0);
        v37 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
        *((int128_t *)&v29) = *((int128_t *)&v2);
        v28 = v35;
    }
    v30 = a0;
    v31 = a1 * 16 + a0;
    v39 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7ad9d1140a17634c(&v30);
    if (v39)
    {
        v40 = "-InvalidRegexInvalidArgumentFileNotFoundReadErrorWriteErrorcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rsregex: thread ID allocation space exhausted/home/34r7hm4n/.cargo/registry/src/index.cr";
        v41 = &v4;
        v42 = &g_6c8b70;
        do
        {
            v43 = v39[0];
            v44 = v39[1];
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2c09e257dce780d1(v43, v44, v40, 1))
            {
                uu_tac::try_mmap_stdin::hfe59da374b4e6932(v41);
                if (v4)
                {
                    v45 = *((long long *)&v6);
                    v5 = v5;
                    goto LABEL_59fff9;
                }
                else
                {
                    v7 = 0;
                    v8 = 1;
                    v9 = 0;
                    v12 = std::io::stdio::stdin::h7215cc131abb55d8();
                    v46 = _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_end::hc18c61afec27b79c(&v12, &v7);
                    if (v46 != 1)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h44dea3211d38b6c1(v46, v49);
                        v51 = *((int128_t *)&v7);
                        v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                        v19 = v51;
                        v53 = v9;
                        v20 = v53;
                        v54 = (&v19)[1];
                        v55 = v41 & 0xffffffffffffff00 | 1;
                        if (v4)
                            core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h9c73bf5007d11635();
                    }
                    else
                    {
                        ::0x59f180::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3d9e818b85d2e5c6(&v0, "stdin: \n-InvalidRegexInvalidArgumentFileNotFoundReadErrorWriteErrorcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rsregex: thread ID allocation space exhausted/home/34r7hm4n/.cargo/registry/src/", 5);
                        v25 = v2;
                        v50 = *((int128_t *)&v0);
                        v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                        v23 = v50;
                        v26 = v49;
                        *((double *)&v10) = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&v23);
                        v11 = v42;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        v14 = uucore::util_name::h60d842bf27b05e82();
                        v15 = v49;
                        v0 = &v14;
                        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ea929f45edcb0d0;
                        v2 = &v10;
                        v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4f1ed2bd277e0642;
                        v23 = &g_6c8b08;
                        v24 = 3;
                        v27 = 0;
                        v25 = &v0;
                        v26 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v23);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h5aa08d1e1bf905c3(v10, v11);
                        ::0x59dd90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6e91106de20a5c98(&v7);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$memmap2..Mmap$GT$$GT$::hce1e60b57f82e2de(v41);
                        continue;
                    }
                    goto LABEL_5a041a;
                }
            }
            else
            {
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(v43, v44))
                {
                    ::0x59f180::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3d9e818b85d2e5c6(&v0, v43, v44);
                    v26 = v2;
                    v47 = *((int128_t *)&v0);
                    v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
                    v24 = v47;
                    v23 = 9223372036854775809;
                    *((double *)&v4) = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&v23);
                    v5 = v42;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    v7 = uucore::util_name::h60d842bf27b05e82();
                    v8 = v49;
                    v0 = &v7;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ea929f45edcb0d0;
                    v2 = v41;
                    v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4f1ed2bd277e0642;
                    v23 = &g_6c8b08;
                    v24 = 3;
                    v27 = 0;
                    v25 = &v0;
                    v26 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h5aa08d1e1bf905c3(v4, v5);
                    continue;
                }
                std::fs::metadata::haf90637f419ddc57(&v23, v43, v44);
                v48 = v24;
                if (v23 == 2)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h896ad78236a10e00(2, v48);
                    ::0x59f180::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3d9e818b85d2e5c6(&v0, v43, v44);
                    v26 = v2;
                    v56 = *((int128_t *)&v0);
                    v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
                    v24 = v56;
                    v23 = 9223372036854775810;
                    *((double *)&v4) = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&v23);
                    v5 = v42;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    v7 = uucore::util_name::h60d842bf27b05e82();
                    v8 = v49;
                    v0 = &v7;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ea929f45edcb0d0;
                    v2 = v41;
                    v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4f1ed2bd277e0642;
                    v23 = &g_6c8b08;
                    v24 = 3;
                    v27 = 0;
                    v25 = &v0;
                    v26 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h5aa08d1e1bf905c3(v4, v5);
                    continue;
                }
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h896ad78236a10e00(v23, v48);
                uu_tac::try_mmap_path::h01ee297263e394e5(&v14, v43, v44);
                if (!v14)
                {
                    std::fs::read::hfdbc770825310844(v41, v43, v44);
                    if (v4 != 0x8000000000000000)
                    {
                        v58 = *((int128_t *)&v4);
                        v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
                        v19 = v58;
                        v53 = *((long long *)&v6);
                        v20 = v53;
                        v54 = (&v19)[1];
                        v55 = v41 & 0xffffffffffffff00 | 1;
                        if (v14)
                            core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h9c73bf5007d11635();
                    }
                    else
                    {
                        v21 = v5;
                        v0 = 0;
                        v1 = v43;
                        v2 = v44;
                        v3 = 1;
                        v7 = &v0;
                        v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v23 = &g_4636b0;
                        v24 = 1;
                        v27 = 0;
                        v25 = &v7;
                        v26 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::h375669e800639459();
                        v59 = *((int128_t *)&v32);
                        v7 = v59;
                        v9 = *((long long *)&v33);
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, &v7);
                        v42 = &g_6c8b70;
                        v25 = v2;
                        v60 = *((int128_t *)&v0);
                        v37 = (v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
                        v23 = v60;
                        v26 = v21;
                        *((double *)&v12) = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&v23);
                        v13 = &g_6c8b70;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        v10 = uucore::util_name::h60d842bf27b05e82();
                        v11 = v49;
                        v0 = &v10;
                        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ea929f45edcb0d0;
                        v2 = &v12;
                        v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4f1ed2bd277e0642;
                        v23 = &g_6c8b08;
                        v24 = 3;
                        v27 = 0;
                        v25 = &v0;
                        v26 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v23);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h5aa08d1e1bf905c3(v12, v13);
                        ::0x59dcb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2febd99232a4a33f(&v7);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$memmap2..Mmap$GT$$GT$::hce1e60b57f82e2de(&v14);
                        continue;
                    }
LABEL_5a041a:
LABEL_5a041d:
                    if (v24)
                    {
                        *((int *)&v24) = (!v28 ? uu_tac::buffer_tac::h5d70b4a3a838e71b(v57, v61, a2, a4, v22) : uu_tac::buffer_tac_regex::ha3032000df62e130(v57, v61, v28, (&v28)[1], a2));
                        v23 = 9223372036854775812;
                        v38 = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&v23);
                        if (v55)
                            ::0x59dd90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6e91106de20a5c98(&v19);
                        core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h9c73bf5007d11635();
                        core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..bytes..Regex$GT$$GT$::h8038a3a4482dc4a5(&v28);
                        return v38;
                    }
                    if (v55)
                        ::0x59dd90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6e91106de20a5c98(&v19);
                    v41 = &v4;
                    core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h9c73bf5007d11635();
                    v40 = "-InvalidRegexInvalidArgumentFileNotFoundReadErrorWriteErrorcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rsregex: thread ID allocation space exhausted/home/34r7hm4n/.cargo/registry/src/index.cr";
                }
                else
                {
                    v45 = *((long long *)&v16);
                    v5 = v15;
LABEL_59fff9:
                    v57 = v5;
                    v17 = v57;
                    v18 = v45;
                    v55 = 0;
                    goto LABEL_5a041d;
                }
            }
        } while ((v39 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7ad9d1140a17634c(&v30), v39));
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..bytes..Regex$GT$$GT$::h8038a3a4482dc4a5(&v28);
    return 0;
}
