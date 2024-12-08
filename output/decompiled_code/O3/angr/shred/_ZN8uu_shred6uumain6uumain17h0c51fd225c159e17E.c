long long uu_shred::uumain::uumain::h0c51fd225c159e17(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x428]
    char v1;  // [bp-0x420]
    char v2;  // [bp-0x418]
    char v3;  // [bp-0x410]
    char v4;  // [sp-0x3f9]
    char v5;  // [bp-0x3f8]
    unsigned long v6;  // [sp-0x3f0], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x3e0], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long v8;  // [sp-0x3d8], Other Possible Types: unsigned long long
    char v9;  // [bp-0x3d0], Other Possible Types: unsigned long, unsigned long long
    char v10;  // [bp-0x3c8], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x3c0], Other Possible Types: char
    char v12;  // [bp-0x3b0]
    char v13;  // [bp-0x3a0], Other Possible Types: unsigned long long
    struct_1 *v14;  // [sp-0x398], Other Possible Types: unsigned long
    unsigned long v15;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x388]
    int v17;  // [sp-0x380]
    int v18;  // [sp-0x370]
    unsigned long long v19;  // [sp-0x360]
    unsigned long long v20;  // [sp-0x350]
    unsigned long v21;  // [sp-0x348], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x340]
    unsigned long long v23;  // [sp-0x338]
    unsigned long long v24;  // [sp-0x330]
    int v25;  // [sp-0x328]
    char v26;  // [bp-0x310]
    char v27;  // [bp-0x300]
    int v28;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    int v29;  // [sp-0x2f0], Other Possible Types: unsigned long long
    int v30;  // [sp-0x2e8], Other Possible Types: unsigned long long
    int v31;  // [bp-0x2e0], Other Possible Types: unsigned long long, unsigned int
    int v32;  // [bp-0x2d8], Other Possible Types: void*
    int v33;  // [sp-0x2c8]
    void* v36;  // rax
    unsigned long long v37[3];  // rax
    unsigned long long v38;  // r14
    unsigned long long v39;  // r15
    unsigned long long v40;  // r12
    unsigned long long v41[3];  // rax
    unsigned long long v42;  // rax
    unsigned long long v43;  // rbx
    struct_1 *v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // r13
    unsigned long long v47;  // rsi
    int v49;  // xmm0
    int v50;  // xmm1
    unsigned long long v51;  // rsi
    unsigned long long v52;  // rdx
    unsigned long long v53[3];  // rax
    unsigned long long v54;  // rax
    unsigned long long v55;  // rsi

    uu_shred::uu_app::h7dccf86ad4ded41c(&v28, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h5b50d2ab247124f8(&v7, &v28, a0, a1);
    if (v15 == 0x8000000000000000)
    {
        v36 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v16);
        return v36;
    }
    v19 = *((long long *)&v12);
    *((int128_t *)&v18) = *((int128_t *)&v11);
    *((int128_t *)&v17) = *((int128_t *)&v9);
    v15 = v7;
    v16 = v8;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v15, "file", 4))
    {
        ::0x46f2c0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha859b89d64c8e094(&v7);
        v30 = v9;
        *((int128_t *)&v28) = *((int128_t *)&v7);
        v31 = 1;
        v36 = alloc::boxed::Box$LT$T$GT$::new::hbd97479fb1c082d4(&v28);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb36b33ce1a99ece6(&v28, &v15, "iterations", 10);
        v37 = clap_builder::parser::error::MatchesError::unwrap::he84c278377c46bed("iterations", 10, &v28);
        if (!v37)
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        v38 = v37[1];
        v39 = v37[2];
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v13, v38, v39);
        if (v13)
        {
            v7 = 0;
            v8 = v38;
            v9 = v39;
            v10 = 1;
            v21 = &v7;
            v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v28 = &g_5352f8;
            v29 = 1;
            v32 = 0;
            v30 = &v21;
            v31 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h91a7f4002ca821c4(&v26, &v28);
            v31 = 1;
            *((int128_t *)&v28) = *((int128_t *)&v26);
            v30 = *((long long *)&v27);
            v36 = alloc::boxed::Box$LT$T$GT$::new::hbd97479fb1c082d4(&v28);
        }
        else
        {
            v20 = v14;
            v40 = &v28 | -0x100 | 3;
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v15, "u", 1))
            {
LABEL_4709ac:
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v15, "force", 5);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb36b33ce1a99ece6(&v28, &v15, "sizei128", 4);
                v45 = clap_builder::parser::error::MatchesError::unwrap::he84c278377c46bed("sizei128", 4, &v28);
                if (v45)
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v28, v45);
                    *((int128_t *)&v25) = *((int128_t *)&v29);
                    v46 = v28;
                }
                v28 = v46;
                v29 = v25;
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v15, "exact", 5);
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v15, "zero", 4);
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v15, "verboseinvalid number of passes: capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 7);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h79496e17bbebdcc0(&v28, &v15, "file", 4);
                clap_builder::parser::error::MatchesError::unwrap::h5f8088bc8709892c(&v7, "file", 4, &v28);
                if (!v7)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v49 = *((int128_t *)&v7);
                v50 = *((int128_t *)&v9);
                *((int128_t *)&v33) = *((int128_t *)&v12);
                *((int128_t *)&v32) = *((int128_t *)&v11);
                v30 = v50;
                v28 = v49;
                while (true)
                {
                    v53 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfff021da3ee165cd(&v28, v51, v52);
                    if (!v53)
                    {
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h982cfcb937abef3d(&v15);
                        return 0;
                    }
                    v54 = uu_shred::wipe_file::hae5b506f16bbc90d(v53[1], v53[2], v20, v40 & 4294967295 & 4294967295, uu_shred::get_size::h7b8806beb7cebdb8(&v28, v47, v44), v44, v0, v1, v2, v3);
                    if (v54)
                    {
                        v6 = v54;
                        v44->field_60(v54);
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                        v13 = uucore::util_name::h412db5e565a079f3();
                        v14 = v44;
                        v21 = &v13;
                        v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6a2d0300e46b4ef6;
                        v23 = &v6;
                        v24 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4127277b4c824abf;
                        v7 = &g_5352c8;
                        v8 = 3;
                        v11 = 0;
                        v9 = &v21;
                        v10 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v7, v55, v44);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hc7baa197976f9656(v6, v44);
                    }
                }
            }
            else
            {
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v15, "remove", 6))
                {
                    v40 = 0;
                    goto LABEL_4709ac;
                }
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb36b33ce1a99ece6(&v28, &v15, "remove", 6);
                v41 = clap_builder::parser::error::MatchesError::unwrap::he84c278377c46bed("remove", 6, &v28);
                if (!(v41 && (v42 = core::ops::function::FnOnce::call_once::hae9142ee72413bc6(v41[1], v41[2]), v42)))
                {
                    v28 = &g_535288;
                    v29 = 1;
                    v30 = &v5;
                    *((int128_t *)&v31) = 0;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v28); /* do not return */
                }
                v43 = v42;
                v40 = v40 | -0x100 | 1;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc085e3e12dc08fc(v42, v44, "unlinkinternal error: entered unreachable code: should be caught by clap", 6)))
                    goto LABEL_4709ac;
                v40 = v40 | -0x100 | 2;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc085e3e12dc08fc(v42, v44, "unlinkinternal error: entered unreachable code: should be caught by clap", 6)))
                    goto LABEL_4709ac;
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h982cfcb937abef3d(&v15);
    return v36;
}
