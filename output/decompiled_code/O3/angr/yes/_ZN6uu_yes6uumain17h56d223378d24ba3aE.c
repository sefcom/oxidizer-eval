long long uu_yes::uumain::h56d223378d24ba3a(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x3e8], Other Possible Types: unsigned long long
    char *v1;  // [sp-0x3e0], Other Possible Types: struct_1 *
    char *v2;  // [sp-0x3d8], Other Possible Types: unsigned long long
    int v3;  // [bp-0x3c8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v4;  // [sp-0x3c0], Other Possible Types: unsigned long long
    int v5;  // [bp-0x3b8], Other Possible Types: char, unsigned long long
    int v6;  // [sp-0x3a8]
    int v7;  // [bp-0x398], Other Possible Types: char
    unsigned long v8;  // [sp-0x388], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x380]
    int v10;  // [sp-0x378]
    int v11;  // [sp-0x368]
    unsigned long long v12;  // [sp-0x358]
    char v13;  // [bp-0x350], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0x348]
    char v15;  // [bp-0x340]
    char v16;  // [bp-0x330]
    char v17;  // [bp-0x320]
    char v18;  // [bp-0x310]
    char v19;  // [bp-0x300]
    char v20;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    int v21;  // [sp-0x2f0], Other Possible Types: void*, unsigned long, unsigned long long
    char *v22;  // [sp-0x2e8], Other Possible Types: unsigned long long
    char v23;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v24;  // [sp-0x2d8]
    char v25;  // [bp-0x2d0]
    unsigned long long v27;  // r13
    int v28;  // xmm0
    void* v29;  // r14
    int v30;  // xmm0
    int v31;  // ymm0
    int v32;  // ymm0
    char *v33;  // rsi
    char *v34;  // rsi
    void* v35;  // rbp
    unsigned long long v36[3];  // rax
    struct_2 *v37;  // rax
    int v39;  // xmm0
    unsigned long long v40;  // rdx
    unsigned long v41;  // r14
    char *v42;  // rsi
    char *v43;  // rsi
    char *v44;  // rbx
    unsigned long long v45;  // rbx
    unsigned int v48;  // eax
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rsi
    unsigned long long v51;  // r14
    struct_1 *v52;  // r15
    struct struct_0 **v53;  // rax

    uu_yes::uu_app::h336a6372025a09bd(&v20);
    v27 = &v3;
    clap_builder::builder::command::Command::try_get_matches_from::hb4d74df48f269007(&v3, &v20, a0, a1);
    if (v8 == 0x8000000000000000)
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v9);
        if (!(!v29))
            goto LABEL_435e60;
    }
    else
    {
        v12 = *((long long *)&v7);
        v28 = *((int128_t *)&v5);
        v11 = v6;
        v10 = v28;
        v8 = v3;
        v9 = v4;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::he81d49bce24474a7(&v20, 0x4000, 0);
        if (v20)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v0 = v21;
        v1 = v22;
        v2 = 0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5864cd72830bb812(&v20, &v8, "STRINGstandard output: ", 6);
        clap_builder::parser::error::MatchesError::unwrap::hbb2f70307a035ba1(&v13, "STRINGstandard output: ", 6, &v20);
        if (!v13)
        {
            v33 = v2;
            if (v0 - v33 <= 1)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hbe8d794861c4ab55(&v0, v33, 2);
                v34 = v2;
            }
            *((short *)(v1 + v34)) = 2681;
            v45 = v2 + 2;
        }
        else
        {
            v30 = *((int128_t *)&v13);
            v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
            *((int128_t *)&v7) = *((int128_t *)&v17);
            *((int128_t *)&v6) = *((int128_t *)&v16);
            *((int128_t *)&v5) = *((int128_t *)&v15);
            v3 = v30;
            itertools::free::intersperse::h0a475bd7570f6a8d(&v20, &v3, " ", 1);
            while (true)
            {
                v22 = v22;
                if (!v20)
                {
                    v20 = 1;
                    v21 = 0;
                    if (!(*((long long *)&v25)) || !((v36 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h470b5e2f99e37170(&v25), v36)))
                        break;
                    v35 = v36[1];
                    v22 = v22;
                }
                else
                {
                    v35 = v21;
                    if (v35)
                    {
                        v21 = 0;
                        v22 = v22;
                        v22 = v22;
                    }
                    else
                    {
                        if (!*((long long *)&v25))
                            break;
                        v37 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h470b5e2f99e37170(&v25);
                        if (!(v37) || !((v39 = *((int128_t *)&(&v37->padding_0)[1]), v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39, v20 = (unsigned long long)1, v21 = v39, v35 = _$LT$itertools..intersperse..IntersperseElementSimple$LT$Item$GT$$u20$as$u20$itertools..intersperse..IntersperseElement$LT$Item$GT$$GT$::generate::hfc10920710efd437(&v23), v35)))
                            break;
                        v22 = v22;
                    }
                }
                v41 = v22;
                v22 = v22;
                v42 = v2;
                if (v0 - v42 < v41)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hbe8d794861c4ab55(&v0, v42, v41);
                    v43 = v2;
                }
                memcpy(v43 + v1, v35, v41);
                v2 = &v2[v41];
                v22 = v22;
            }
            v44 = v2;
            v27 = &v3;
            if (v44 == v0)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb40969ee43339e96(&v0);
            *((char *)(v1 + v44)) = 10;
            v45 = v44 + 1;
        }
        v2 = v45;
        uu_yes::prepare_buffer::hada7ea4a5253e80a(&v0);
        if (uu_yes::exec::hf6b85bfc7646a62d(v1, v2, v40))
            goto *((int *)(4258148 + (vvar_340{reg 16} & 3) * 4)) + 4258148;
        v29 = 0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6070a7ce9d1c8a8d();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h35f63b3fcc00feb4(&v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h12d2c10b70152606(&v8);
        if (false)
        {
LABEL_435e60:
            v0 = v29;
            v1 = &g_4d47f0.field_0;
            v3 = &v0;
            v4 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h09aa20a1e1663cde;
            v20 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v21 = 1;
            v24 = 0;
            v22 = v27;
            v23 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v18, &v20);
            *((int128_t *)&v3) = *((int128_t *)&v18);
            v49 = *((long long *)&v19);
            v5 = *((long long *)&v19);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::haa58601cb2c4cbb6(v4, v49, 1, 0))
            {
                v13 = uucore::util_name::h359eff083fe53467();
                v14 = v40;
                v8 = &v13;
                v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf050f66ad0b173bf;
                v20 = &g_4d4748;
                v21 = 2;
                v24 = 0;
                v22 = &v8;
                v23 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v50, v40);
                v13 = v22;
                v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v20 = &g_4d4768;
                v21 = 2;
                v24 = 0;
                v22 = &v13;
                v23 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v50, v40);
            }
            if ((char)v1->field_68(v0))
            {
                v13 = uucore::execution_phrase::hded5ccd87df1fcab();
                v14 = v40;
                v8 = &v13;
                v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf050f66ad0b173bf;
                v20 = &g_4d4788;
                v21 = 2;
                v24 = 0;
                v22 = &v8;
                v23 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v50, v40);
            }
            v48 = v1->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6070a7ce9d1c8a8d();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h35f63b3fcc00feb4(&v3);
            v51 = v0;
            v52 = v1;
            if (v52->field_0)
                v53(v51);
            if (v52->field_8)
            {
                __rust_dealloc(v51);
                return v48;
            }
            return v48;
        }
    }
    v48 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v48;
}
