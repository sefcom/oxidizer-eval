long long uu_test::uumain::h04502722ababcd7f(unsigned long long a0, unsigned long long a1)
{
    uint128_t v0[2];  // [bp-0x3d8], Other Possible Types: int, char
    struct_1 *v1;  // [sp-0x3d0]
    unsigned long long v2;  // [sp-0x3c8]
    char v3;  // [bp-0x3c0], Other Possible Types: unsigned long, unsigned long long
    uint128_t *v4;  // [sp-0x3b8], Other Possible Types: unsigned long long [3], unsigned long, unsigned long long
    uint128_t *v5;  // [sp-0x3b0], Other Possible Types: unsigned long
    struct struct_2 **v6;  // [bp-0x3a8], Other Possible Types: int, unsigned long long, unsigned long
    unsigned long v7;  // [bp-0x3a0]
    int v8;  // [bp-0x39f]
    unsigned long v9;  // [bp-0x399]
    unsigned long long v10;  // [sp-0x398]
    unsigned long v11;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x388]
    unsigned long long v13;  // [sp-0x380]
    unsigned long long v14;  // [sp-0x378]
    int v15;  // [bp-0x368]
    unsigned long long v16;  // [sp-0x359]
    char v17;  // [bp-0x348]
    int v18;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x330]
    unsigned long long v20;  // [sp-0x328]
    char v21;  // [bp-0x300]
    char v22;  // [bp-0x2f0]
    int v23;  // [bp-0x2e8], Other Possible Types: char, unsigned int, unsigned long
    unsigned long long *v24;  // [bp-0x2e0], Other Possible Types: char, unsigned long long
    int v25;  // [bp-0x2df]
    struct struct_3 **v26;  // [sp-0x2d8], Other Possible Types: unsigned long long *, uint128_t *, unsigned long, unsigned long long
    unsigned int v27;  // [bp-0x2d0], Other Possible Types: unsigned long, unsigned long long
    void* v28;  // [sp-0x2c8]
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rcx
    uint128_t *v35;  // rcx
    uint128_t *v36;  // rax
    unsigned long long v37;  // rdx
    uint128_t v38[2];  // r14
    unsigned long long v39;  // rdi
    unsigned long long *v40;  // rax
    unsigned long long v41;  // rax
    int v42;  // xmm0
    char v43;  // cl
    unsigned long long v44;  // rcx
    struct_1 *v45;  // r15
    int v46;  // xmm0
    unsigned int v47;  // eax
    unsigned long long v48;  // rsi
    uint128_t v49[2];  // r14
    struct_1 *v50;  // r15
    struct struct_0 **v51;  // rax

    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2601c0bd0cf46170(&v23, &v17);
    if (*((long long *)&v23) != 0x8000000000000000)
    {
        v2 = v26;
        *((int128_t *)&v0) = *((int128_t *)&v23);
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, "test", 4);
    }
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hbe17a1a64f4d732a(&v3, a0, a1);
    v23 = 91;
    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h0c28fa3df6286ec7(uucore::util_name::h359eff083fe53467(), v31, &v23, 1))
    {
LABEL_437c43:
        v26 = v5;
        *((int128_t *)&v23) = *((int128_t *)&v3);
        uu_test::parser::parse::h7bdf159b1df27a0f(&v6, &v23);
        v41 = v6;
        if (v41 != 7)
        {
            v43 = (char)(&v6)[8];
            *((int128_t *)&v15) = (int128_t)v8;
            v16 = v11;
            *((int128_t *)&v6) = (int128_t)v15;
            v9 = v16;
            v27 = v9;
            *((int128_t *)&v25) = (int128_t)v6;
            v23 = v41;
            v24 = v43;
            v38 = __rust_alloc(32, 8);
            if (!v38)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        else
        {
            v20 = v11;
            *((int128_t *)&v18) = (int128_t)(&v6)[8];
            uu_test::eval::h10911f347dd42b46(&v23, &v18, v31, v11);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5d41aea6d83c4c69(&v18);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3abdd01e31f30ef3(&v18);
            v44 = (long long)v23;
            *((int128_t *)&v15) = (int128_t)v25;
            v16 = v27;
            *((int128_t *)&v6) = (int128_t)v15;
            v9 = v16;
            if (v44 == 7)
            {
                if ((v24 & 1))
                    v38 = 0;
                else
                    v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h4184ee23da6eaec7(1);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf647e5235f19c3e0();
                goto LABEL_437f1b;
            }
            else
            {
                v27 = v9;
                *((int128_t *)&v25) = (int128_t)v6;
                v23 = v44;
                v24 = v24;
                v38 = __rust_alloc(32, 8);
                if (!v38)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
        }
        v46 = *((int128_t *)&v23);
        v38[1] = (int128_t)(&v25)[7];
        *((void*)&v38[0]) = v46;
        v45 = &g_4df538.field_0;
        goto LABEL_437f13;
    }
    else
    {
        v32 = v5;
        if (v32 == 1)
        {
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3641c263f8745fbe(v4[1], v4[2], "--help--version]", 6))
            {
                if (!v5)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3641c263f8745fbe(v4[1], v4[2], "--version]", 9))
                {
                    v33 = v5;
                    goto LABEL_437bcd;
                }
            }
            uu_test::uu_app::hfde9d9823e7fec0d(&v23);
            v10 = v2;
            *((int128_t *)&v6) = (int128_t)v0;
            v34 = v4;
            v11 = v34;
            v12 = v34;
            v13 = v3;
            v14 = v34 + (v5 + v5 * 2) * 8;
            clap_builder::builder::command::Command::get_matches_from::he6b92a141669cfaa(&v18, &v23, &v6, v34);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h40eb34f33b738682(&v18);
            v38 = 0;
            if (false)
            {
LABEL_437f2c:
                *((uint128_t *[2])&v0[0]) = v38;
                v1 = v45;
                v6 = &v0;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h66cbd361347204da;
                v23 = &g_40ff60;
                v24 = 1;
                v28 = 0;
                v26 = &v6;
                v27 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v21, &v23);
                *((int128_t *)&v6) = *((int128_t *)&v21);
                v10 = *((long long *)&v22);
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3641c263f8745fbe((long long)(&v6)[8], *((long long *)&v22), 1, 0))
                {
                    v18 = uucore::util_name::h359eff083fe53467();
                    v19 = v31;
                    v3 = &v18;
                    v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h39e05a873719f7f7;
                    v23 = &g_4df488;
                    v24 = 2;
                    v28 = 0;
                    v26 = &v3;
                    v27 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v48, v31);
                    v18 = &v6;
                    v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v23 = &g_4df4a8;
                    v24 = 2;
                    v28 = 0;
                    v26 = &v18;
                    v27 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v48, v31);
                }
                if ((char)v1->field_68(v0))
                {
                    v18 = uucore::execution_phrase::hded5ccd87df1fcab();
                    v19 = v31;
                    v3 = &v18;
                    v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h39e05a873719f7f7;
                    v23 = &g_4df4c8;
                    v24 = 2;
                    v28 = 0;
                    v26 = &v3;
                    v27 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v48, v31);
                }
                v47 = v1->field_60(v0);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf647e5235f19c3e0();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hbc3e68ed44a5c857(&v6);
                v49 = v0;
                v50 = v1;
                if (v50->field_0)
                    v51(v49);
                if (!v50->field_8)
                    return v47;
                __rust_dealloc(v49);
            }
        }
        else
        {
LABEL_437bcd:
            if (!v33)
            {
                v6 = 0x8000000000000000;
                goto LABEL_437e32;
            }
            v5 = v33 - 1;
            v35 = v4;
            v36 = v5 * 3;
            v37 = *((long long *)(16 + (char *)v35 + 0x8 * v36));
            *((int128_t *)&v6) = *((int128_t *)((char *)v35 + 0x8 * v36));
            v10 = v37;
            if (!(v6 != 0x8000000000000000) || !((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3641c263f8745fbe((long long)(&v6)[8], v10, "]", 1)))
            {
LABEL_437e32:
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h13359b4e57ab11b1(&v23, 11, 0);
                v39 = *((long long *)&(&v23)[8]);
                if (*((long long *)&v23))
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v40 = v26;
                *(v40) = 2334956331002456429;
                *((int *)((char *)v40 + 7)) = 660416288;
                v27 = 2;
                v23 = v39;
                v24 = v40;
                v26 = 11;
                v38 = __rust_alloc(32, 8);
                if (!v38)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v42 = *((int128_t *)&v23);
                v38[1] = *((int128_t *)&v26);
                *((void*)&v38[0]) = v42;
                if (v6 != 0x8000000000000000)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf647e5235f19c3e0();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hbc3e68ed44a5c857(&v6);
                }
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3162937b4692a118(&v3);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf1999b5a2f6cf893(&v3);
                v45 = &g_4df5e0.field_0;
LABEL_437f13:
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf647e5235f19c3e0();
            }
            else
            {
                if (v6 != 0x8000000000000000)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf647e5235f19c3e0();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hbc3e68ed44a5c857(&v6);
                }
                goto LABEL_437c43;
            }
LABEL_437f1b:
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hbc3e68ed44a5c857(&v0);
            if (!(!v38))
                goto LABEL_437f2c;
        }
        v47 = uucore::mods::error::get_exit_code::hf050de69600a682c();
        return v47;
    }
}
