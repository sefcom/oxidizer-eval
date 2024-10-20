long long uu_dirname::uumain::h5363a835d68dac4b(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x691]
    uint128_t v1[2];  // [sp-0x690], Other Possible Types: unsigned long, unsigned long long
    struct_3 *v2;  // [sp-0x688], Other Possible Types: unsigned long long
    int v3;  // [sp-0x680]
    int v4;  // [sp-0x670]
    unsigned long long v5;  // [sp-0x660]
    char v6;  // [bp-0x658], Other Possible Types: unsigned long, unsigned long long
    unsigned long v7;  // [sp-0x650], Other Possible Types: unsigned long long
    char v8;  // [bp-0x648]
    char v9;  // [bp-0x638]
    char v10;  // [bp-0x628]
    unsigned long long v11;  // [sp-0x620]
    unsigned long v12;  // [sp-0x618], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x610]
    int v14;  // [sp-0x608]
    int v15;  // [sp-0x5f8]
    unsigned long long v16;  // [sp-0x5e8]
    unsigned long long v17;  // [sp-0x5e0]
    char v18;  // [bp-0x5d8]
    char v19;  // [bp-0x5c8]
    char v20;  // [bp-0x5c0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long *v21;  // [sp-0x5b8], Other Possible Types: unsigned long, unsigned long long
    struct struct_1 **v22;  // [sp-0x5b0], Other Possible Types: unsigned long long *, unsigned long long
    int v23;  // [bp-0x5a8], Other Possible Types: unsigned int, unsigned long long
    void* v24;  // [sp-0x5a0]
    int v25;  // [bp-0x2f8], Other Possible Types: struct struct_0 **, char, unsigned long, unsigned long long
    unsigned long long v26;  // [sp-0x2f0]
    char v27;  // [bp-0x2e8], Other Possible Types: unsigned long long
    char v28;  // [bp-0x2d8]
    char v29;  // [bp-0x2c8]
    char v30;  // [bp-0x2c0]
    uint128_t v32[2];  // rax
    int v33;  // xmm0
    int v34;  // ymm0
    int v35;  // ymm0
    unsigned long long v37;  // rax
    int v39;  // xmm0
    int v40;  // ymm0
    unsigned long long v42;  // rdx
    unsigned long long v44;  // rax
    unsigned long long v45;  // r15
    void* v46;  // rbx
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rcx
    int v49;  // ymm0
    unsigned long long v50;  // rbp
    unsigned long long v51;  // r14
    unsigned long long v52;  // r12
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rsi
    unsigned long long v55;  // rax
    unsigned long long v56;  // rsi
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rdx
    unsigned long long *v60;  // rax
    int v61;  // xmm0
    unsigned int v62;  // eax
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rsi
    uint128_t v66[2];  // r14
    struct_3 *v67;  // r15
    struct struct_2 **v68;  // rax

    uu_dirname::uu_app::h7a97a881a2f4801d(&v20);
    clap_builder::builder::command::Command::after_help::h8960046e6d203d71(&v25, &v20, &g_40fcf7, 149);
    clap_builder::builder::command::Command::try_get_matches_from::hdb1ed26ca32b7f7d(&v6, &v25, a0, a1);
    if (v1 == 0x8000000000000000)
    {
        v32 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v2);
        if (!(!v32))
            goto LABEL_4348b1;
    }
    else
    {
        v5 = *((long long *)&v10);
        v33 = *((int128_t *)&v8);
        v35 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
        *((int128_t *)&v4) = *((int128_t *)&v9);
        v3 = v33;
        v1 = v6;
        v2 = v7;
        *((int *)&v0) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v1, "zero", 4) ? 10 : 0);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc168aa900fee0e7a(&v20, &v1, "dir/./home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/dirname/src/dirname.rs", 3);
        clap_builder::parser::error::MatchesError::unwrap::heaa3fd0a262b9484(&v25, "dir/./home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/dirname/src/dirname.rs", 3, &v20);
        v37 = v25;
        if (!v37)
        {
            v40 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v37 = core::ops::function::FnOnce::call_once::h0323a262d4ad4bc4;
            v42 = 0;
        }
        else
        {
            v39 = *((int128_t *)&v28);
            v40 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
            v42 = *((long long *)&v30);
        }
        v12 = v37;
        v13 = "&";
        *((int128_t *)&v14) = *((int128_t *)&v27);
        v15 = v39;
        v16 = *((long long *)&v29);
        v17 = v42;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hb5d447e876f610f1(&v6, &v12);
        v44 = *((long long *)&v8);
        if (v44)
        {
            v45 = v7;
            v11 = v44 * 24;
            v46 = 0;
            do
            {
                v50 = *((long long *)(8 + v45 + (char *)v46));
                v51 = *((long long *)(16 + v45 + (char *)v46));
                v52 = std::path::Path::parent::h65c9a340a6266f2d(v50, v51, v47, v48);
                if (v52)
                {
                    std::path::Path::components::h4f3217acf0fc8653(&v20, v52, v53);
                    _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h327ae97aa5bd0b06(&v25, &v20);
                    if (v25 == 10)
                    {
                        v20 = &g_4d46b0;
                        v21 = 1;
                        v22 = 8;
                        v49 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((int128_t *)&v23) = 0;
                        std::io::stdio::_print::he918bceb0c89db46(&v20, v54, v53);
                    }
                    else
                    {
                        v55 = uucore::mods::display::print_verbatim::h05faa9742e2da19b(v52, v53);
                        if (v55)
                        {
                            v20 = v55;
                            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                        }
                    }
                }
                else if ((char)std::path::Path::is_absolute::h3431a23d91045560(v50, v51) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h59b3af01fef9095f(v50, v51, "/./home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/dirname/src/dirname.rs", 1))
                {
                    v20 = &g_4d46a0;
                    v21 = 1;
                    v22 = 8;
                    v49 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((int128_t *)&v23) = 0;
                    std::io::stdio::_print::he918bceb0c89db46(&v20, v56, v57);
                }
                else
                {
                    v20 = &g_4d46b0;
                    v21 = 1;
                    v22 = 8;
                    v49 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((int128_t *)&v23) = 0;
                    std::io::stdio::_print::he918bceb0c89db46(&v20, v54, v53);
                }
            } while ((v25 = (unsigned long long)&v0, v26 = (unsigned long long)_$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hfc6ce48d626fd89a, v20 = (unsigned long long)&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654, v21 = (unsigned long long)1, v24 = (void*)0, v22 = (unsigned long long)&v25, v23 = (unsigned long long)1, std::io::stdio::_print::he918bceb0c89db46(&v20, v58, v59), v46 += 24, v11 != v46));
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h068d3bff5683cd0c(&v6);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc0b56b5ffffbee17(&v6);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hda50975e7b729cba(&v1);
        }
        else
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::haa7b426276a3b379(&v20, 15, 0);
            if (v20)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v60 = v22;
            *((long long *)((char *)v60 + 7)) = 7236828795186999072;
            *(v60) = 2334956331002456429;
            v23 = 1;
            v20 = v21;
            v21 = v60;
            v22 = 15;
            v32 = __rust_alloc(32, 8);
            if (!v32)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v61 = *((int128_t *)&v20);
            v32[1] = *((int128_t *)&v22);
            *((void*)&v32[0]) = v61;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h068d3bff5683cd0c(&v6);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc0b56b5ffffbee17(&v6);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hda50975e7b729cba(&v1);
LABEL_4348b1:
            *((uint128_t *[2])&v1[0]) = v32;
            v2 = &g_4d4630.field_0;
            v25 = &v1;
            v26 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h65a82d9f301e9ee9;
            v20 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v21 = 1;
            v24 = 0;
            v22 = &v25;
            v23 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v18, &v20);
            *((int128_t *)&v25) = *((int128_t *)&v18);
            v27 = *((long long *)&v19);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h59b3af01fef9095f(v26, *((long long *)&v19), 1, 0))
            {
                v12 = uucore::util_name::h359eff083fe53467();
                v13 = v64;
                v6 = &v12;
                v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4765a1ce89be1cdc;
                v20 = &g_4d4598;
                v21 = 2;
                v24 = 0;
                v22 = &v6;
                v23 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v65, v64);
                v12 = &v25;
                v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v20 = &g_4d45b8;
                v21 = 2;
                v24 = 0;
                v22 = &v12;
                v23 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v65, v64);
            }
            if ((char)v2->field_68(v1))
            {
                v12 = uucore::execution_phrase::hded5ccd87df1fcab();
                v13 = v64;
                v6 = &v12;
                v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4765a1ce89be1cdc;
                v20 = &g_4d45d8;
                v21 = 2;
                v24 = 0;
                v22 = &v6;
                v23 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v65, v64);
            }
            v62 = v2->field_60(v1);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf2f3ed2daa5d3e17();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2dfb8322fc27a760(&v25);
            v66 = v1;
            v67 = v2;
            if (v67->field_0)
                v68(v66);
            if (!v67->field_8)
                return v62;
            __rust_dealloc(v66);
        }
    }
    v62 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v62;
}
