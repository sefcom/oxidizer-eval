long long uu_nproc::uumain::hda1c1f869548e8fb(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x420], Other Possible Types: unsigned long
    int v1;  // [sp-0x418], Other Possible Types: uint128_t [2], char, unsigned long, unsigned long long
    struct_2 *v2;  // [sp-0x410], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v3;  // [sp-0x408]
    unsigned long long v4;  // [sp-0x400]
    int v5;  // [bp-0x3f8], Other Possible Types: void*, char, unsigned long, unsigned long long
    unsigned long long v6[2];  // [sp-0x3f0], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x3e8], Other Possible Types: unsigned long long
    char v8;  // [sp-0x3e0]
    char v9;  // [bp-0x3d8]
    char v10;  // [bp-0x3c8]
    char v11;  // [bp-0x3c0]
    char v12;  // [bp-0x3bf]
    char v13;  // [bp-0x3b8]
    unsigned long v14;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x3a8]
    int v16;  // [sp-0x3a0]
    int v17;  // [sp-0x390]
    unsigned long long v18;  // [sp-0x380]
    int v19;  // [sp-0x378], Other Possible Types: void*, struct struct_0 **
    unsigned long long v20;  // [sp-0x370]
    unsigned long long v21;  // [sp-0x368]
    unsigned long long v22;  // [sp-0x360]
    void* v23;  // [sp-0x358]
    unsigned long long v24;  // [sp-0x350]
    unsigned long long v25;  // [sp-0x348]
    char v26;  // [sp-0x340]
    unsigned short v27;  // [sp-0x338]
    char v28;  // [bp-0x328]
    char v29;  // [bp-0x318]
    char v30;  // [bp-0x310]
    char v31;  // [bp-0x300]
    int v32;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    char v33;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct struct_3 **v34;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v35;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v36;  // [sp-0x2d8]
    uint128_t v38[2];  // rax
    unsigned long long v39;  // r14
    unsigned long long v40;  // r15
    unsigned long long v41[3];  // rax
    unsigned long long v42;  // r14
    unsigned long long v43;  // r15
    unsigned long long v44;  // r15
    unsigned long long v45;  // rdx
    unsigned long long v46;  // r12
    int v47;  // xmm0
    unsigned long long v48;  // rdx
    unsigned long long v52;  // rsi
    unsigned long long v53;  // rdi
    unsigned long long v54;  // rsi
    unsigned long long v55;  // rax
    unsigned long long v56;  // rdi
    unsigned long long v57;  // rsi
    unsigned long long v58;  // rax
    unsigned long long v59;  // rdi
    unsigned long long v60;  // rsi
    unsigned int v61;  // eax
    unsigned long long v62;  // rdi
    unsigned long long v63;  // rsi
    uint128_t v64[2];  // r14
    struct_2 *v65;  // r15
    struct struct_1 **v66;  // rax
    unsigned long long v67;  // rsi
    unsigned long long v68;  // rdx
    unsigned long long v69;  // r12
    unsigned long long v70;  // r14

    uu_nproc::uu_app::h799c4d17f0879d0c(&v32);
    clap_builder::builder::command::Command::try_get_matches_from::h09e2b2e955b11979(&v5, &v32, a0, a1);
    if (v14 == 0x8000000000000000)
    {
        v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v15);
        if (!(!v38))
            goto LABEL_435249;
    }
    else
    {
        v18 = *((long long *)&v10);
        *((int128_t *)&v17) = *((int128_t *)&v9);
        *((int128_t *)&v16) = *((int128_t *)&v7);
        v14 = v5;
        v15 = v6;
        v39 = _ZN8uu_nproc10OPT_IGNORE17he5bf47396f6af7d6E;
        v40 = g_4dd738;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h30a1de2b48b10874(&v32, &v14, v39, v40);
        v41 = clap_builder::parser::error::MatchesError::unwrap::hb2b50e83ad0820bb(v39, v40, &v32);
        if (!v41)
        {
            v44 = 0;
        }
        else
        {
            v42 = v41[1];
            v43 = v41[2];
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v11, core::str::_$LT$impl$u20$str$GT$::trim_matches::ha5c6dfeeb5b09887(v42, v43), v45);
            if (!v11)
            {
                v44 = *((long long *)&v13);
            }
            else
            {
                v0 = v12;
                v5 = 0;
                v6 = v42;
                v7 = v43;
                v8 = 1;
                v1 = &v5;
                v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v3 = &v0;
                v4 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
                v32 = &g_4dae68;
                v33 = 2;
                v36 = 0;
                v34 = &v1;
                v35 = 2;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v30, &v32);
                v35 = 1;
                *((int128_t *)&v32) = *((int128_t *)&v30);
                v34 = *((long long *)&v31);
                v38 = __rust_alloc(32, 8);
                if (!v38)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v47 = (int128_t)v32;
                v38[1] = *((int128_t *)&v34);
                *((void*)&v38[0]) = v47;
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfe58a476c3d632d6(&v14);
LABEL_435249:
                *((uint128_t *[2])&v1[0]) = v38;
                v2 = &g_4daec0.field_0;
                v19 = &v1;
                v20 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h441e65022a713736;
                v32 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v33 = 1;
                v36 = 0;
                v34 = &v19;
                v35 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v28, &v32);
                *((int128_t *)&v19) = *((int128_t *)&v28);
                v21 = *((long long *)&v29);
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h50ef5ab4cca0e8c2(v20, *((long long *)&v29), 1, 0))
                {
                    v5 = uucore::util_name::h359eff083fe53467();
                    v6 = v45;
                    v14 = &v5;
                    v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2937b3baae2da418;
                    v32 = &g_4dae08;
                    v33 = 2;
                    v36 = 0;
                    v34 = &v14;
                    v35 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v32, v52, v45);
                    v5 = &v19;
                    v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v32 = &g_4dae28;
                    v33 = 2;
                    v36 = 0;
                    v34 = &v5;
                    v35 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v32, v52, v45);
                }
                if ((char)v2->field_68(v1))
                {
                    v5 = uucore::execution_phrase::hded5ccd87df1fcab();
                    v6 = v45;
                    v14 = &v5;
                    v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2937b3baae2da418;
                    v32 = &g_4dae48;
                    v33 = 2;
                    v36 = 0;
                    v34 = &v14;
                    v35 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v32, v52, v45);
                }
                v61 = v2->field_60(v1);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfbc2244d421d0ad6();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4ec02703837711c8(&v19);
                v64 = v1;
                v65 = v2;
                if (v65->field_0)
                    v66(v64);
                if (v65->field_8)
                {
                    __rust_dealloc(v64);
                    return v61;
                }
                return v61;
            }
        }
        std::env::var::h1be62142b39fff3a(&v32, "OMP_THREAD_LIMITconnection reset", 16);
        v46 = -1;
        if (v32)
        {
LABEL_435553:
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h222d769a1b6c2c6b(&v32);
        }
        else
        {
            v48 = *((long long *)&v35);
            v7 = *((long long *)&v35);
            *((int128_t *)&v5) = *((int128_t *)&v33);
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v1, v6, v48);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfbc2244d421d0ad6();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4ec02703837711c8(&v5);
            v46 = -(0 < v1) | -(v2 < 1) | v2;
            if (!(!v32))
                goto LABEL_435553;
        }
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v14, _ZN8uu_nproc7OPT_ALL17h641a249421c41760E, g_4dd728))
        {
            v55 = uu_nproc::num_cpus_all::h21be193953ac1243(v53, v54, v45);
        }
        else
        {
            std::env::var::h1be62142b39fff3a(&v32, "OMP_NUM_THREADS is not a valid number: /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rs", 15);
            if (v32)
            {
                v55 = uu_nproc::available_parallelism::h6be64c127e86c75e(v56, v57, v45);
                v0 = v55;
            }
            else
            {
                v58 = *((long long *)&v35);
                v3 = v58;
                *((int128_t *)&v1) = *((int128_t *)&v33);
                v19 = 0;
                v20 = v58;
                v21 = v2;
                v22 = v58;
                v23 = 0;
                v24 = v58;
                v25 = 188978561068;
                v26 = 1;
                v27 = 0;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha69112f6c1159e30(&v5, &v19, v45);
                if (!v7)
                {
                    v55 = uu_nproc::available_parallelism::h6be64c127e86c75e(v59, v60, v45);
                    goto LABEL_43568d;
                }
                else
                {
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v11, v6[0], v6[1]);
                    if (v11 || (v55 = *((long long *)&v13), !v55))
                    {
                        v55 = uu_nproc::available_parallelism::h6be64c127e86c75e(v62, v63, v45);
LABEL_43568d:
                    }
                }
                v0 = v55;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfbc2244d421d0ad6();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8c49d222de48560(&v5);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfbc2244d421d0ad6();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4ec02703837711c8(&v1);
            }
            if (v32)
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h222d769a1b6c2c6b(&v32);
        }
        v70 = v69 - v44;
        if (v69 <= v44)
            v70 = 1;
        v0 = v70;
        v5 = &v0;
        v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v32 = &g_4dae28;
        v33 = 2;
        v36 = 0;
        v34 = &v5;
        v35 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v32, v67, v68);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfe58a476c3d632d6(&v14);
    }
    v61 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v61;
}
