long long uu_readlink::uumain::uumain::h1232513d75c26214(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x3de]
    char v1;  // [sp-0x3dd]
    unsigned int v2;  // [sp-0x3dc]
    char *v3;  // [sp-0x3d8]
    char *v4;  // [bp-0x3d8], Other Possible Types: unsigned long
    char v5;  // [bp-0x3d0]
    unsigned long long v6;  // [sp-0x3c8]
    unsigned long v7;  // [sp-0x3b8]
    void* v8;  // [sp-0x3b0], Other Possible Types: unsigned long
    char *v9;  // [sp-0x3a8], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x3a0], Other Possible Types: unsigned long
    char *v11;  // [bp-0x398]
    unsigned long long v12;  // [sp-0x390]
    char v13;  // [sp-0x388], Other Possible Types: unsigned long
    unsigned long v14;  // [sp-0x388]
    unsigned long v15;  // [sp-0x380], Other Possible Types: unsigned long long
    char v16;  // [bp-0x378]
    char v17;  // [bp-0x368]
    char v18;  // [bp-0x358]
    unsigned long v19;  // [sp-0x348]
    unsigned long long v20;  // [sp-0x340]
    char *v21;  // [sp-0x338]
    char *v22;  // [sp-0x328]
    unsigned long long v23;  // [sp-0x318]
    char v24;  // [bp-0x310]
    char v25;  // [bp-0x300]
    char *v26;  // [bp-0x2f8]
    char *v27;  // [bp-0x2f8]
    char *v29;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v30;  // [bp-0x2e0]
    char *v31;  // [bp-0x2d8]
    char *v32;  // [sp-0x2c8]
    char *v34;  // xmm0
    void* v36;  // r14
    unsigned long long v37;  // rax
    char v38;  // bpl
    char *v39;  // xmm0
    char *v41;  // xmm0
    char *v42;  // xmm0
    int v43;  // ymm0
    int v44;  // ymm0
    unsigned long long v47[3];  // rax
    unsigned long long v48[3];  // r14
    unsigned int v49;  // r12d
    char *v50;  // xmm0
    char *v51;  // xmm0
    char *v52;  // xmm0
    char *v53;  // xmm0
    unsigned long long v54;  // r12

    uu_readlink::uu_app::h387e9546761b38a6(&v26);
    clap_builder::builder::command::Command::try_get_matches_from::h1e41c31790ef42a3(&v13, &v26, a0, a1);
    if (v19 == 0x8000000000000000)
    {
        v36 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v20);
        return v36;
    }
    v23 = *((long long *)&v18);
    v34 = *((int128_t *)&v16);
    *((int128_t *)&v22) = *((int128_t *)&v17);
    v21 = v34;
    v19 = v13;
    v20 = v15;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "zero", 4);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "silent", 6))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "quiet", 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "verbose", 7);
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "canonicalize", 12);
    if ((char)v37)
    {
LABEL_468ed7:
        v2 = v37 & 0xffffffffffffff00 | 2;
        v38 = 0;
    }
    else
    {
        v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "canonicalize-existing", 21);
        if (!(!(char)v37 && (v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "canonicalize-missing", 20), !(char)v37)))
            goto LABEL_468ed7;
        v38 = vvar_205{reg 56} & 0xffffffffffffff00 | 1;
        v2 = 0;
    }
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "canonicalize-existing", 21))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "canonicalize-missing", 20);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1d4f4734d0c0ae5a(&v26, &v19, "filesignoring --no-newline with multiple arguments\n", 5);
    clap_builder::parser::error::MatchesError::unwrap::heee1dc496edd81bc(&v13, "filesignoring --no-newline with multiple arguments\n", 5, &v26);
    if (!v14 || (v39 = *((int128_t *)&v13), *((int128_t *)&v32) = *((int128_t *)&v18), *((int128_t *)&v31) = *((int128_t *)&v17), *((int128_t *)&v29) = *((int128_t *)&v16), v27 = v39, _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h18ad71db7dde33d8(&v4, &v26), v41 = *((int128_t *)&v5), v11 = v41, v8 == 0x8000000000000000))
    {
        v8 = 0;
        v9 = 8;
        v10 = 0;
    }
    else
    {
        v42 = *((int128_t *)&v11);
        v44 = (((v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
        v9 = v42;
        v8 = v4;
        if (v10)
        {
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, &g_4145d6, 10))
            {
            }
            v11 = v9;
            v12 = &v11[24 * v10];
            v47 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&v11);
            if (v47)
            {
                v48 = v47;
                if (!v38)
                {
                    v49 = (char)v2;
                }
                else
                {
                    do
                    {
                        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v26, v48[1], v48[2]);
                        v50 = *((int128_t *)&v27);
                        v3 = v50;
                        v6 = v29;
                        std::fs::read_link::he43356407758612b(&v13, &v4);
                        if (v14 == 0x8000000000000000)
                            goto LABEL_469370;
                        v51 = *((int128_t *)&v14);
                        v44 = (v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                        v27 = v51;
                        v29 = *((long long *)&v16);
                        v36 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h375a01d8819329c7(uu_readlink::show::hf8ca6ca696dc2285(v27, *((long long *)&v16), 11));
                        if (!(!v36))
                            goto LABEL_4693f0;
                        ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v26);
                        ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v4);
                        v48 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&v11);
                    } while (v48);
                    goto LABEL_469351;
                }
                do
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v26, v48[1], v48[2]);
                    v52 = *((int128_t *)&v27);
                    v3 = v52;
                    v6 = v29;
                    uucore::features::fs::canonicalize::hdcf8813f1915eb73(&v13, &v4, 1, v49);
                    if (v14 == 0x8000000000000000)
                    {
LABEL_469370:
                        v54 = v15;
                        if (!v0)
                        {
                            v36 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
                            ::0x4696f0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6923bc10bd1d0617(v54);
                        }
                        else
                        {
                            v7 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc5adabb7353559e2(v54, v48);
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hc17df59e5abcc7e2(&v24, &v7);
                            v30 = 1;
                            *((int128_t *)&v26) = *((int128_t *)&v24);
                            v29 = *((long long *)&v25);
                            v36 = alloc::boxed::Box$LT$T$GT$::new::hb33387f1cdb47052(&v26);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hafbe285716c6b2ef(v7);
                            goto LABEL_46941b;
                        }
                        goto LABEL_46941b;
                    }
                    v53 = *((int128_t *)&v14);
                    v44 = (v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                    v27 = v53;
                    v29 = *((long long *)&v16);
                    v36 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h375a01d8819329c7(uu_readlink::show::hf8ca6ca696dc2285(v27, *((long long *)&v16), 11));
                    if (v36)
                    {
LABEL_4693f0:
                        ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v26);
LABEL_46941b:
                        ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v4);
                        ::0x4697e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&v8);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&v19);
                        return v36;
                    }
                    ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v26);
                    ::0x4696d0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&v4);
                    v48 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&v11);
                } while (v48);
            }
LABEL_469351:
            ::0x4697e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&v8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&v19);
            return 0;
        }
    }
    ::0x469b40::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd2f55730b4265e1d(&v13);
    v29 = *((long long *)&v16);
    *((int128_t *)&v26) = *((int128_t *)&v13);
    v30 = 1;
    v36 = alloc::boxed::Box$LT$T$GT$::new::hb33387f1cdb47052(&v26);
    ::0x4697e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&v8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&v19);
    return v36;
}
