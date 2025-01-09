long long uu_shred::uumain::uumain::ha4d870c4a682fe02(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x428]
    unsigned long long v1;  // [sp-0x420]
    unsigned long long v2;  // [sp-0x418]
    unsigned long long v3;  // [sp-0x410]
    char v4;  // [sp-0x3f9]
    char v5;  // [bp-0x3f8]
    unsigned long v6;  // [sp-0x3f0], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x3e0], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long v8;  // [sp-0x3d8], Other Possible Types: unsigned long long
    struct struct_2 **v9;  // [bp-0x3d0], Other Possible Types: char, unsigned long, unsigned long long
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
    char *v21;  // [sp-0x348]
    unsigned long long v22;  // [sp-0x340]
    char *v23;  // [sp-0x338]
    unsigned long long v24;  // [sp-0x330]
    int v25;  // [sp-0x328]
    char v26;  // [bp-0x310]
    char v27;  // [bp-0x300]
    int v28;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    int v29;  // [sp-0x2f0], Other Possible Types: unsigned long long
    int v30;  // [sp-0x2e8], Other Possible Types: struct struct_2 **, unsigned long long
    int v31;  // [bp-0x2e0], Other Possible Types: unsigned long long, unsigned int
    int v32;  // [bp-0x2d8], Other Possible Types: void*
    int v33;  // [sp-0x2c8]
    void* v36;  // rax
    unsigned long long v37[3];  // rax
    unsigned long long v38;  // r14
    unsigned long long v39;  // r15
    unsigned long long v40;  // r12
    unsigned long long v41;  // rax
    unsigned long long v42;  // rbx
    struct_1 *v43;  // rdx
    unsigned long long v44;  // rax
    unsigned long long v45;  // r13
    unsigned long long v46;  // rsi
    unsigned long long v47;  // r15
    int v51;  // xmm0
    int v52;  // xmm1
    unsigned long long v53[3];  // rax
    unsigned long long v54;  // rax

    uu_shred::uu_app::h2fbccd128ef7bb3f(&v28);
    clap_builder::builder::command::Command::try_get_matches_from::h99921733234819cb(&v7, &v28, a0, a1);
    if (v15 == 0x8000000000000000)
    {
        v36 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v16);
        return v36;
    }
    v19 = *((long long *)&v12);
    *((int128_t *)&v18) = *((int128_t *)&v11);
    *((int128_t *)&v17) = *((int128_t *)&v9);
    v15 = v7;
    v16 = v8;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v15, "filei128", 4))
    {
        ::0x473a00::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h06f51ff0b681cc1d(&v7);
        v30 = v9;
        *((int128_t *)&v28) = *((int128_t *)&v7);
        v31 = 1;
        v36 = alloc::boxed::Box$LT$T$GT$::new::h6f09ec56500fdb36(&v28);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9ae0da281e336987(&v28, &v15, "iterations", 10);
        v37 = clap_builder::parser::error::MatchesError::unwrap::h232dbe99beeae5a0("iterations", 10, &v28);
        if (!v37)
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreachable code", 40, &g_535e60); /* do not return */
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
            v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v28 = &g_535d80;
            v29 = 1;
            v32 = 0;
            v30 = &v21;
            v31 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h1468cc81a7d721f1();
            v31 = 1;
            *((int128_t *)&v28) = *((int128_t *)&v26);
            v30 = *((long long *)&v27);
            v36 = alloc::boxed::Box$LT$T$GT$::new::h6f09ec56500fdb36(&v28);
        }
        else
        {
            v20 = v14;
            v40 = &v28 | -0x100 | 3;
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v15, "u", 1))
            {
LABEL_474d3c:
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v15, "force", 5);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9ae0da281e336987(&v28, &v15, "size", 4);
                v44 = clap_builder::parser::error::MatchesError::unwrap::h232dbe99beeae5a0("size", 4, &v28);
                v45 = 0x8000000000000000;
                if (v44)
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v28, v44);
                    *((int128_t *)&v25) = *((int128_t *)&v29);
                    v45 = v28;
                }
                v28 = v45;
                v29 = v25;
                v47 = uu_shred::get_size::h94b39895cde5bfc0(&v28, v46);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he002fca6a0afce48(&v28, &v15, "filei128", 4);
                clap_builder::parser::error::MatchesError::unwrap::h31860016ec26d6ae(&v7, "filei128", 4, &v28);
                if (!v7)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_535e90); /* do not return */
                v51 = *((int128_t *)&v7);
                v52 = *((int128_t *)&v9);
                *((int128_t *)&v33) = *((int128_t *)&v12);
                *((int128_t *)&v32) = *((int128_t *)&v11);
                v30 = v52;
                v28 = v51;
                while (true)
                {
                    v53 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf805dfc0e659cc7d(&v28);
                    if (!v53)
                    {
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0da6067fb215cf4f(&v15);
                        return 0;
                    }
                    v3 = v4;
                    v2 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v15, "verbose", 7);
                    v1 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v15, "zero", 4);
                    v0 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v15, "exact", 5) | v47 == 1;
                    v54 = uu_shred::wipe_file::hcdd557f5a4f902dc(v53[1], v53[2], v20, v40 & 4294967295 & 4294967295, v47, v43);
                    if (v54)
                    {
                        v6 = v54;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v43->field_60(v54));
                        v13 = uucore::util_name::h60d842bf27b05e82();
                        v14 = v43;
                        v21 = &v13;
                        v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc8f8012ae4a14f0e;
                        v23 = &v6;
                        v24 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hd17b5a2a40f7a343;
                        v7 = &g_535da0;
                        v8 = 3;
                        v11 = 0;
                        v9 = &v21;
                        v10 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v7);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::he57c1f6784037e65(v6, v43);
                    }
                }
            }
            else
            {
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v15, "remove", 6))
                {
                    v40 = 0;
                    goto LABEL_474d3c;
                }
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9ae0da281e336987(&v28, &v15, "remove", 6);
                if (!(clap_builder::parser::error::MatchesError::unwrap::h232dbe99beeae5a0("remove", 6, &v28) && (v41 = core::ops::function::FnOnce::call_once::h18758c16304d57a3(), v41)))
                {
                    v28 = &g_535d90;
                    v29 = 1;
                    v30 = &v5;
                    *((int128_t *)&v31) = 0;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v28, &g_535e78); /* do not return */
                }
                v42 = v41;
                v40 = v40 | -0x100 | 1;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4e8ad70e399e9a77(v41, v43, "unlinkinternal error: entered unreachable code: should be caught by clap", 6)))
                    goto LABEL_474d3c;
                v40 = v40 | -0x100 | 2;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4e8ad70e399e9a77(v41, v43, "unlinkinternal error: entered unreachable code: should be caught by clap", 6)))
                    goto LABEL_474d3c;
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0da6067fb215cf4f(&v15);
    return v36;
}
