long long uu_mktemp::uumain::h25de7305d91ef80e(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [sp-0x4c8]
    unsigned long long v1;  // [sp-0x4b8]
    char v2;  // [bp-0x4a8]
    char v3;  // [bp-0x4a0]
    char v4;  // [bp-0x498]
    unsigned long v5;  // [sp-0x490], Other Possible Types: unsigned long long
    int v6;  // [sp-0x488]
    int v7;  // [sp-0x478]
    unsigned long long v8;  // [sp-0x468]
    int v9;  // [sp-0x458]
    unsigned long long v10;  // [sp-0x448]
    int v11;  // [bp-0x438], Other Possible Types: uint128_t [3]
    struct_1 *v12;  // [sp-0x430]
    int v13;  // [sp-0x428]
    int v14;  // [sp-0x418]
    unsigned long long v15;  // [sp-0x408]
    struct struct_2 **v16;  // [sp-0x400], Other Possible Types: unsigned long long
    int v17;  // [bp-0x3f8], Other Possible Types: struct struct_3 **, char, unsigned long
    struct_4 *v18;  // [sp-0x3f0], Other Possible Types: uint128_t [3], unsigned long long
    struct_1 *v19;  // [bp-0x3e8], Other Possible Types: char, unsigned long long
    char v20;  // [bp-0x3d8]
    char v21;  // [bp-0x3c8]
    char v22;  // [bp-0x3c0]
    char v23;  // [bp-0x3b0]
    unsigned long v24;  // [bp-0x3a8], Other Possible Types: unsigned long long
    struct_1 *v25;  // [sp-0x3a0], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x398]
    unsigned long long v27;  // [sp-0x390]
    char v28;  // [bp-0x388]
    char v29;  // [bp-0x378]
    char v30;  // [bp-0x368]
    char v31;  // [bp-0x35f]
    char v32;  // [bp-0x35e]
    int v33;  // [bp-0x358], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v34;  // [sp-0x350], Other Possible Types: unsigned long long
    int v35;  // [bp-0x348], Other Possible Types: char
    int v36;  // [sp-0x338]
    int v37;  // [sp-0x328]
    char v38;  // [bp-0x310]
    char v39;  // [bp-0x300]
    int v40;  // [bp-0x2f8], Other Possible Types: char, unsigned long
    struct_2 *v41;  // [sp-0x2f0], Other Possible Types: uint128_t [3], unsigned long long
    struct_1 *v42;  // [sp-0x2e8], Other Possible Types: int, struct_2 *, unsigned long long
    unsigned int v43;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v44;  // [bp-0x2d8], Other Possible Types: void*
    int v45;  // [sp-0x2c8]
    int v46;  // [sp-0x2b8]
    unsigned long long v51;  // rbp
    unsigned long long v52;  // rcx
    struct_4 *v53;  // r15
    char *v54;  // rax
    struct_1 *v55;  // rbp
    struct_1 *v56;  // rbp
    struct_2 *v57;  // rdx
    uint128_t v59[3];  // rax
    unsigned long long v60;  // rax
    struct_2 *v61;  // rax
    unsigned long long v62;  // rsi
    int v63;  // xmm0
    char v64;  // r14b
    char v65;  // bpl
    int v66;  // xmm0
    int v67;  // xmm1
    struct_1 *v68;  // r15
    int v69;  // xmm0
    int v70;  // xmm0
    unsigned long long v71;  // r9
    unsigned long long v72;  // r8
    unsigned long long v73;  // rsi
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rcx
    int v76;  // xmm0
    int v77;  // xmm1
    int v78;  // xmm0
    int v79;  // xmm1
    unsigned long long v80;  // rax
    uint128_t v81[3];  // r14
    struct_1 *v82;  // r15
    unsigned long long v86;  // rsi
    struct_1 *v87;  // rdx
    struct struct_0 **v88;  // rax
    unsigned int v89;  // eax
    uint128_t v90[3];  // r14
    struct_1 *v91;  // r15
    struct struct_0 **v92;  // rax

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hb926888a33db5fd1(&v2, a0, a1);
    uu_mktemp::uu_app::h3732cd7803173d3f(&v40);
    v51 = &v17;
    clap_builder::builder::command::Command::try_get_matches_from::h1210be0a293d9a9f(&v17, &v40, &v2, v52);
    if (v17 == 0x8000000000000000)
    {
        v53 = v18;
        if (v53->field_d5 == 5)
        {
            v24 = v53->field_28;
            v25 = v53->field_30 + v24;
            v26 = v53->field_40;
            v27 = v53->field_48 * 32 + v26;
            v54 = _$LT$clap_builder..util..flat_map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc99cc2cfa3f31945(&v24);
            if (v54)
            {
                v16 = &v35;
                do
                {
                    v55 = v56;
                    if (*(v54) == 1)
                    {
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h3baeae7c66f71dd1(&v33, 10, 0);
                        if (v33)
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        v57 = *((long long *)&v35);
                        v57->field_0 = 8386103211268076635;
                        *((short *)&v57->padding_8[0]) = 23909;
                        v41 = v34;
                        v42 = v57;
                        v43 = 10;
                        v40 = 2;
                        if ((char)v55->field_0 == 2)
                        {
                            ::0x43e350::core::ptr::drop_in_place$LT$clap_builder..error..context..ContextValue$GT$::h13abee15db95b4cc(&v40);
                            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1e653fe675ec0a82(v55->field_10, v55->field_18, v42, 10))
                                continue;
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h3baeae7c66f71dd1(&v40, 18, 0);
                            v51 = &v17;
                            if (*((long long *)&v40))
                            {
                                v16 = &v42;
                            }
                            else
                            {
                                v61 = v42;
                                *((int128_t *)&v61->field_0) = 154696299713976031486686225439063502708;
                                v61->field_10 = 29541;
                                v43 = 1;
                                v40 = v41;
                                v41 = v61;
                                v42 = 18;
                                v59 = __rust_alloc(32, 8);
                                if (!v59)
                                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                v63 = *((int128_t *)&v40);
                                v59[1] = *((int128_t *)&v42);
                                *((void*)&v59[0]) = v63;
                                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h1fa3b878c8dc32a2(v53);
                                v68 = &g_4ed8b8.field_0;
                                goto LABEL_43ee36;
                            }
                        }
                        else
                        {
                            ::0x43e350::core::ptr::drop_in_place$LT$clap_builder..error..context..ContextValue$GT$::h13abee15db95b4cc(&v40);
                            continue;
                        }
                    }
                } while ((v54 = _$LT$clap_builder..util..flat_map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc99cc2cfa3f31945(&v24), v54));
            }
            v51 = &v17;
        }
        v59 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v53);
LABEL_43ee36:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he83b2152ea1a1a2c(&v2);
        goto LABEL_43ee3e;
    }
    v15 = *((long long *)&v21);
    *((int128_t *)&v14) = *((int128_t *)&v20);
    *((int128_t *)&v13) = *((int128_t *)&v19);
    *((int128_t *)&v11) = *((int128_t *)&v17);
    uu_mktemp::Options::from::h70b375f09e130fbc(&v24, &v11);
    std::env::var::hdfc83dedafea8805(&v40, "POSIXLY_CORRECT/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/mktemp/src/mktemp.rs", 15);
    if (*((long long *)&v40))
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h5ca10790e6de5fc0(&v40);
        goto LABEL_43ed03;
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h5ca10790e6de5fc0(&v40);
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hf27b87c32ba6c0d4(&v11, _ZN9uu_mktemp12ARG_TEMPLATE17h26a915922e8b572fE, g_4f0148))
    {
        v60 = *((long long *)&v4);
        if (!v60)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v62 = *((long long *)&v3);
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1e653fe675ec0a82(*((long long *)(v62 + (v60 + (v60 << 1) << 3) - 16)), *((long long *)(v62 + (v60 + (v60 << 1) << 3) - 8)), v25, v26))
        {
            v43 = 9223372036854775814;
            v59 = __rust_alloc(48, 8);
            if (!v59)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v76 = (int128_t)v40;
            v77 = (int128_t)v42;
            v59[2] = (int128_t)v44;
            *((void*)&v59[1]) = v77;
            *((void*)&v59[0]) = v76;
            core::ptr::drop_in_place$LT$uu_mktemp..Options$GT$::hb37ea6c1493ba5b3(&v24);
            goto LABEL_43ee25;
            goto LABEL_43ee25;
        }
    }
LABEL_43ed03:
    v51 = &v17;
    v64 = v31;
    v65 = v32;
    *((int128_t *)&v46) = *((int128_t *)&v30);
    v66 = *((int128_t *)&v24);
    v67 = *((int128_t *)&v26);
    *((int128_t *)&v45) = *((int128_t *)&v29);
    *((int128_t *)&v44) = *((int128_t *)&v28);
    v42 = v67;
    v40 = v66;
    uu_mktemp::Params::from::h0246d31d5fd913fc(&v17, &v40);
    if (v5 == 0x8000000000000000)
    {
        v69 = *((int128_t *)&(&v17)[1]);
        *((int128_t *)&v36) = *((int128_t *)&(&v20)[8]);
        *((int128_t *)&v35) = *((int128_t *)&(&v19)[8]);
        v33 = v69;
        v44 = v36;
        v42 = v35;
        v40 = v69;
        v59 = __rust_alloc(48, 8);
        if (!v59)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v78 = (int128_t)v40;
        v79 = (int128_t)v42;
        v59[2] = (int128_t)v44;
        *((void*)&v59[1]) = v79;
        *((void*)&v59[0]) = v78;
    }
    else
    {
        v70 = *((int128_t *)&(&v17)[1]);
        *((int128_t *)&v37) = *((int128_t *)&v22);
        *((int128_t *)&v36) = *((int128_t *)&(&v20)[8]);
        *((int128_t *)&v35) = *((int128_t *)&(&v19)[8]);
        v33 = v70;
        v71 = *((long long *)&v23);
        v6 = v70;
        v72 = (long long)v36;
        v8 = (long long)v36;
        v7 = v35;
        v10 = (long long)(&v37)[8];
        *((int128_t *)&v9) = (int128_t)(&v36)[8];
        v5 = v17;
        v73 = (long long)v6;
        v74 = (long long)(&v6)[8];
        v75 = (long long)(&v7)[8];
        if (v64)
        {
            v1 = v0;
            uu_mktemp::dry_exec::h0f07fcbf289fc353(&v17, v73, v74, v75, v72, v71, v1, v10, *((long long *)&v2), *((long long *)&v3));
        }
        else
        {
            v0 = v1;
            uu_mktemp::exec::h9c2a35a81b43f934(&v17, v73, v74, v75, v72, v71, v1, v10, v1);
        }
        v80 = v17;
        v81 = v18;
        v82 = v19;
        if (!v65)
        {
            v51 = &v17;
            if (v80 == 0x8000000000000000)
                goto LABEL_43f224;
LABEL_43f277:
            v40 = v80;
            *((uint128_t *[3])&v41[0]) = v81;
            v42 = v82;
            v59 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h80fbe1bd30a7d538(uucore::mods::display::println_verbatim::hcc0c8fad30c44e18(&v40, v86, v87));
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hec46afedc3fb79f1();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf48b0a7565216f52(&v9);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hec46afedc3fb79f1();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf48b0a7565216f52(&v7);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hec46afedc3fb79f1();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf48b0a7565216f52(&v5);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10b7faad02e64258(&v11);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he83b2152ea1a1a2c(&v2);
        }
        else
        {
            v51 = &v17;
            if (!(v80 == 0x8000000000000000))
                goto LABEL_43f277;
            if (v82->field_0)
                v88(v81);
            if (v82->field_8)
                __rust_dealloc(v81);
LABEL_43f224:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hec46afedc3fb79f1();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf48b0a7565216f52(&v9);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hec46afedc3fb79f1();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf48b0a7565216f52(&v7);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hec46afedc3fb79f1();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf48b0a7565216f52(&v5);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10b7faad02e64258(&v11);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he83b2152ea1a1a2c(&v2);
        }
LABEL_43ee3e:
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0278462beb4cd42b(&v2);
        if (!v59)
        {
            v89 = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v89;
        }
        *((uint128_t *[3])&v11[0]) = v59;
        v12 = v68;
        v17 = &v11;
        v18 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5a0c696afb73a0a0;
        v40 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v41 = 1;
        v44 = 0;
        v42 = v51;
        v43 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v38, &v40);
        *((int128_t *)&v17) = *((int128_t *)&v38);
        v19 = *((long long *)&v39);
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1e653fe675ec0a82(v18, *((long long *)&v39), 1, 0))
        {
            v24 = uucore::util_name::h359eff083fe53467();
            v25 = v87;
            v33 = &v24;
            v34 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc7ad61f6029767f6;
            v40 = &g_4ed760;
            v41 = 2;
            v44 = 0;
            v42 = &v33;
            v43 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v40, v86, v87);
            v24 = v51;
            v25 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v40 = &g_4ed780;
            v41 = 2;
            v44 = 0;
            v42 = &v24;
            v43 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v40, v86, v87);
        }
        if ((char)v12->field_68(v11))
        {
            v24 = uucore::execution_phrase::hded5ccd87df1fcab();
            v25 = v87;
            v33 = &v24;
            v34 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc7ad61f6029767f6;
            v40 = &g_4ed7a0;
            v41 = 2;
            v44 = 0;
            v42 = &v33;
            v43 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v40, v86, v87);
        }
        v89 = v12->field_60(v11);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hec46afedc3fb79f1();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf48b0a7565216f52(&v17);
        v90 = v11;
        v91 = v12;
        if (v91->field_0)
            v92(v90);
        if (v91->field_8)
        {
            __rust_dealloc(v90);
            return v89;
        }
        return v89;
    }
LABEL_43ee25:
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10b7faad02e64258(&v11);
    v68 = &g_4ed810.field_0;
    goto LABEL_43ee36;
}
