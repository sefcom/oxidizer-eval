long long uu_readlink::uumain::uumain::h1232513d75c26214(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x3de]
    char v1;  // [sp-0x3dd]
    unsigned int v2;  // [sp-0x3dc]
    char *v3;  // [bp-0x3d8], Other Possible Types: unsigned long
    char v4;  // [bp-0x3d0]
    unsigned long long v5;  // [sp-0x3c8]
    unsigned long v6;  // [sp-0x3b8], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x3b0], Other Possible Types: unsigned long, unsigned long long
    char *v8;  // [sp-0x3a8], Other Possible Types: unsigned long long
    void* v9;  // [sp-0x3a0], Other Possible Types: unsigned long
    char *v10;  // [bp-0x398]
    unsigned long long v11;  // [sp-0x390]
    char v12;  // [bp-0x388], Other Possible Types: unsigned long long, unsigned long
    unsigned long v13;  // [sp-0x380], Other Possible Types: unsigned long long
    char v14;  // [bp-0x378]
    char v15;  // [bp-0x368]
    char v16;  // [bp-0x358]
    unsigned long v17;  // [sp-0x348], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x340]
    char *v19;  // [sp-0x338]
    char *v20;  // [sp-0x328]
    unsigned long long v21;  // [sp-0x318]
    char v22;  // [bp-0x310]
    char v23;  // [bp-0x300]
    char *v24;  // [bp-0x2f8]
    char *v25;  // [sp-0x2f0]
    char *v26;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v27;  // [bp-0x2e0]
    char *v28;  // [bp-0x2d8]
    char *v29;  // [sp-0x2c8]
    unsigned long long v31;  // rdx
    void* v32;  // rax
    char *v33;  // xmm0
    unsigned long long v35;  // rax
    char v36;  // bpl
    char *v37;  // xmm0
    char *v39;  // xmm0
    char *v40;  // xmm0
    int v41;  // ymm0
    int v42;  // ymm0
    unsigned long long v45[3];  // rax
    unsigned long long v46[3];  // r14
    unsigned int v47;  // r12d
    char *v48;  // xmm0
    char *v49;  // xmm0
    char *v50;  // xmm0
    char *v51;  // xmm0
    unsigned long long v52;  // r12

    uu_readlink::uu_app::h387e9546761b38a6(&v24, a1, v31);
    clap_builder::builder::command::Command::try_get_matches_from::h1e41c31790ef42a3(&v12, &v24, a0, a1);
    if (v17 == 0x8000000000000000)
    {
        v32 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v18);
        return v32;
    }
    v21 = *((long long *)&v16);
    v33 = *((int128_t *)&v14);
    *((int128_t *)&v20) = *((int128_t *)&v15);
    v19 = v33;
    v17 = v12;
    v18 = v13;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "zero", 4);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "silent", 6))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "quiet", 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "verbose", 7);
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "canonicalize", 12);
    if ((char)v35)
    {
LABEL_468ed7:
        v2 = v35 | -0x100 | 2;
        v36 = 0;
    }
    else
    {
        v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "canonicalize-existing", 21);
        if (!(!(char)v35) || !((v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "canonicalize-missing", 20), !(char)v35)))
            goto LABEL_468ed7;
        v36 = vvar_207{reg 56} | -0x100 | 1;
        v2 = 0;
    }
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "canonicalize-existing", 21))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "canonicalize-missing", 20);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1d4f4734d0c0ae5a(&v24, &v17, "filesignoring --no-newline with multiple arguments\n", 5);
    clap_builder::parser::error::MatchesError::unwrap::heee1dc496edd81bc(&v12, "filesignoring --no-newline with multiple arguments\n", 5, &v24);
    if (!v12 || (v37 = *((int128_t *)&v12), *((int128_t *)&v29) = *((int128_t *)&v16), *((int128_t *)&v28) = *((int128_t *)&v15), *((int128_t *)&v26) = *((int128_t *)&v14), v24 = v37, _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h18ad71db7dde33d8(&v3, &v24, v31), v39 = *((int128_t *)&v4), v10 = v39, v7 == 0x8000000000000000))
    {
        v7 = 0;
        v8 = 8;
        v9 = 0;
    }
    else
    {
        v40 = *((int128_t *)&v10);
        v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v8 = v40;
        v7 = v3;
        if (v9)
        {
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, &g_4145d6, 10))
            {
            }
            v10 = v8;
            v11 = &v10[24 * v9];
            v45 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&v10);
            if (v45)
            {
                v46 = v45;
                if (!v36)
                {
                    v47 = (char)v2;
                }
                else
                {
                    do
                    {
                        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v24, v46[1], v46[2]);
                        v48 = *((int128_t *)&v24);
                        v3 = v48;
                        v5 = v26;
                        std::fs::read_link::he43356407758612b(&v12, &v3, v31);
                        if (v12 == 0x8000000000000000)
                            goto LABEL_469370;
                        v49 = *((int128_t *)&v12);
                        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                        v24 = v49;
                        v26 = *((long long *)&v14);
                        v32 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h375a01d8819329c7(uu_readlink::show::hf8ca6ca696dc2285(v25, *((long long *)&v14), 11));
                        if (!(!(char)v35) || !((v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "canonicalize-missing", 20), !(char)v35)))
                            goto LABEL_4693f0;
                        ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v24);
                        ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v3);
                        v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&v10);
                    } while (v46);
                    goto LABEL_469351;
                }
                do
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v24, v46[1], v46[2]);
                    v50 = *((int128_t *)&v24);
                    v3 = v50;
                    v5 = v26;
                    uucore::features::fs::canonicalize::hdcf8813f1915eb73(&v12, &v3, 1, v47);
                    if (v12 == 0x8000000000000000)
                    {
LABEL_469370:
                        v52 = v13;
                        if (!v0)
                        {
                            v32 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
                            ::0x4696f0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6923bc10bd1d0617(v52);
                        }
                        else
                        {
                            v6 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc5adabb7353559e2(v52, v46);
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hc17df59e5abcc7e2(&v22, &v6, v31);
                            v27 = 1;
                            *((int128_t *)&v24) = *((int128_t *)&v22);
                            v26 = *((long long *)&v23);
                            v32 = alloc::boxed::Box$LT$T$GT$::new::hb33387f1cdb47052(&v24);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hafbe285716c6b2ef(v6);
                            goto LABEL_46941b;
                        }
                        goto LABEL_46941b;
                    }
                    v51 = *((int128_t *)&v12);
                    v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                    v24 = v51;
                    v26 = *((long long *)&v14);
                    v32 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h375a01d8819329c7(uu_readlink::show::hf8ca6ca696dc2285(v25, *((long long *)&v14), 11));
                    if (v32)
                    {
LABEL_4693f0:
                        ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v24);
LABEL_46941b:
                        ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v3);
                        ::0x4697e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&v7);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&v17);
                        return v32;
                    }
                    ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v24);
                    ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v3);
                    v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&v10);
                } while (v46);
            }
LABEL_469351:
            ::0x4697e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&v7);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&v17);
            return 0;
        }
    }
    ::0x469b40::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd2f55730b4265e1d(&v12);
    v26 = *((long long *)&v14);
    *((int128_t *)&v24) = *((int128_t *)&v12);
    v27 = 1;
    v32 = alloc::boxed::Box$LT$T$GT$::new::hb33387f1cdb47052(&v24);
    ::0x4697e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&v7);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&v17);
    return v32;
}
