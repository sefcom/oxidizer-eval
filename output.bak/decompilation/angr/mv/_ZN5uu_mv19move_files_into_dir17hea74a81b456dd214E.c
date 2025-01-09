long long uu_mv::move_files_into_dir::hea74a81b456dd214(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55])
{
    char v0;  // [sp-0x301]
    struct struct_0 **v1;  // [sp-0x300]
    unsigned long long v2;  // [sp-0x2f8]
    struct struct_0 **v3;  // [sp-0x2e8]
    struct struct_0 **v4;  // [bp-0x2d0], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0x2c8]
    struct struct_0 **v6;  // [sp-0x2c0], Other Possible Types: unsigned long
    unsigned long long v7;  // [sp-0x2b8]
    struct struct_0 **v8;  // [bp-0x290]
    char v9;  // [bp-0x288]
    int v10;  // [bp-0x278], Other Possible Types: void*, struct struct_0 **
    unsigned long long v11;  // [sp-0x268]
    char v12;  // [bp-0x258]
    char v13;  // [bp-0x250]
    char v15;  // [bp-0x240]
    char v16;  // [bp-0x230]
    struct struct_0 **v17;  // [bp-0x228]
    struct struct_0 **v18;  // [sp-0x220], Other Possible Types: unsigned long long
    struct struct_0 **v19;  // [sp-0x218], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v20;  // [bp-0x210], Other Possible Types: char
    void* v21;  // [sp-0x208]
    struct struct_0 **v22;  // [bp-0x198], Other Possible Types: char
    unsigned long long v23;  // [sp-0x188]
    void* v24;  // [bp-0x178], Other Possible Types: struct struct_0 **, unsigned long, unsigned long long
    struct struct_0 **v25;  // [bp-0x170], Other Possible Types: unsigned long long
    struct struct_0 **v26;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v27;  // [bp-0x160], Other Possible Types: unsigned long
    struct struct_0 **v28;  // [sp-0x158], Other Possible Types: void*
    unsigned long long v29;  // [sp-0x150]
    struct struct_0 **v30;  // [sp-0xc8]
    unsigned long long v31;  // [sp-0xb8]
    unsigned long v32;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v33;  // [sp-0xa0]
    struct struct_0 **v34;  // [sp-0x98]
    unsigned long long v35;  // [sp-0x90]
    char v36;  // [bp-0x88]
    char v37;  // [bp-0x58]
    char v38;  // [bp-0x48]
    struct struct_0 **v39;  // [sp-0x40]
    unsigned long long v41;  // rdx
    struct struct_0 **v43;  // xmm0
    int v44;  // ymm0
    int v45;  // ymm0
    struct struct_0 **v46;  // xmm0
    struct_1 *v47;  // rax
    int v48;  // ymm0
    struct struct_0 **v49;  // r15
    unsigned long long v50;  // r14
    struct struct_0 **v51;  // xmm0
    int v52;  // ymm0
    unsigned long long v53;  // rax
    struct struct_0 **v54;  // xmm0
    struct struct_0 **v55;  // xmm0
    struct struct_0 **v56;  // xmm0
    struct struct_0 **v57;  // xmm0
    struct struct_0 **v58;  // xmm0
    struct struct_0 **v61;  // r9
    struct struct_0 **v63;  // rax
    struct struct_0 **v64;  // xmm0
    struct struct_0 **v65;  // rax
    struct struct_0 **v66;  // xmm0

    ::0x4e5f90::std::thread::local::LocalKey$LT$T$GT$::try_with::ha3d0a2de6b6a2a9f(&v24);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hdc874b6797fedd23(&v36, a1, ::0x4e7740::core::result::Result$LT$T$C$E$GT$::expect::hf1b80da9ba1f81f4(&v24), v41);
    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        v17 = 1;
        v18 = a2;
        v19 = a3;
        v20 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v4, &v17);
        v27 = v6;
        *((int128_t *)&v25) = *((int128_t *)&v4);
        v24 = 7;
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h3a17ce3d5c845dcb();
        return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v24);
    }
    std::fs::canonicalize::hde632c5d9c152691(&v24, a2, a3);
    if (v24 != 0x8000000000000000)
    {
        v23 = v26;
        v43 = *((int128_t *)&v24);
        v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
        v22 = v43;
    }
    else
    {
        uu_mv::move_files_into_dir::_$u7b$$u7b$closure$u7d$$u7d$::he4f083fce89ebeff(&v22, a2, a3, v25);
    }
    if (!a4[51])
    {
        v3 = 0;
        goto LABEL_4ea143;
    }
    else
    {
        v3 = core::ops::function::FnOnce::call_once::hbf1b5780df2247c4();
        if (a1 <= 1)
        {
LABEL_4ea143:
            v10 = 0;
        }
        else
        {
            indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&v4, a1);
            indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&v24, "moving {msg} {wide_bar} {pos}/{len}not replacing ? (backup: )");
            core::result::Result$LT$T$C$E$GT$::unwrap::h7d26c333f6a83544(&v17, &v24, &g_588188);
            indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&v24, &v4, &v17);
            indicatif::multi::MultiProgress::add::h9f882db003b558ae(&v17, &v3, &v24);
            v46 = *((int128_t *)&v17);
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
            v10 = v46;
            v11 = v19;
        }
    }
    v32 = a0;
    v33 = a0 + a1 * 24;
    v47 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68171754d1dad8d6(&v32);
    if (v47)
    {
        v0 = a4[54];
        do
        {
            v49 = v47->field_8;
            v50 = v47->field_10;
            std::fs::metadata::h1d9ddf5324749f9a(&v24, v49, v50);
            if ((int)v24 == 2)
            {
                ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v24);
                v17 = 1;
                v18 = v49;
                v19 = v50;
                *((char *)&v20) = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v4, &v17);
                v27 = v6;
                v51 = *((int128_t *)&v4);
                v52 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                v25 = v51;
                v24 = 0;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                v1 = uucore::util_name::h60d842bf27b05e82();
                v2 = v41;
                v4 = &v1;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                v6 = &v24;
                v7 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::h51bb9d950ecc6a52;
                v17 = &g_5880d0;
                v18 = 3;
                v21 = 0;
                v19 = &v4;
                v20 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hb0f2c59e69cfedd9(&v24);
                continue;
            }
            ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v24);
            if ((long long)v10)
            {
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v24, v49, v50);
                ::0x4e8340::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&v17, v25, v26);
                indicatif::progress_bar::ProgressBar::set_message::h77492990969b1322(&v10, &v17);
                ::0x4e6720::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hee6ae0c580e79f89(&v24);
            }
            v53 = std::path::Path::file_name::h79ecbb7850a9c7f3(v49, v50);
            if (!v53)
            {
                v17 = 1;
                v18 = v49;
                v19 = v50;
                *((char *)&v20) = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v4, &v17);
                v27 = v6;
                v54 = *((int128_t *)&v4);
                v52 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                v25 = v54;
                v24 = 0;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                v1 = uucore::util_name::h60d842bf27b05e82();
                v2 = v41;
                v4 = &v1;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                v6 = &v24;
                v7 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::h51bb9d950ecc6a52;
                v17 = &g_5880d0;
                v18 = 3;
                v21 = 0;
                v19 = &v4;
                v20 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hb0f2c59e69cfedd9(&v24);
                continue;
            }
            std::path::Path::join::h3b80008b40549e98(&v12, a2, a3, v53, v41);
            if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5c44f985d977b358(&v36, &v12) && v0 != 2)
            {
                v55 = *((int128_t *)&v13);
                v1 = v55;
                v4 = v49;
                v5 = v50;
                v17 = &v1;
                v18 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v19 = &v4;
                v20 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v24 = &g_588100;
                v25 = 3;
                v28 = 0;
                v26 = &v17;
                v27 = 2;
                ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d();
                *((int *)&v27) = 1;
                v56 = *((int128_t *)&v37);
                v52 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
                v24 = v56;
                v26 = *((long long *)&v38);
                *((double *)&v1) = alloc::boxed::Box$LT$T$GT$::new::hb29f62ded121125b(&v24);
                v2 = &g_587f60;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v1));
                v4 = uucore::util_name::h60d842bf27b05e82();
                v5 = v41;
                v17 = &v4;
                v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                v19 = &v1;
                v20 = &_$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7a0d8bad1d3a886c;
                v24 = &g_5880d0;
                v25 = 3;
                v28 = 0;
                v26 = &v17;
                v27 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v24);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::ha3c2118ebdfb1144(v1, v2);
                goto LABEL_4ea19c;
            }
            else
            {
                std::fs::canonicalize::hde632c5d9c152691(&v15, v49, v50);
                if (*((long long *)&v15) == 0x8000000000000000)
                {
LABEL_4ea61c:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h57ad1af1f1c9aa26(&v15);
LABEL_4ea629:
                    v61 = v3;
                    if (!v61)
                        v63 = v61;
                    else
                        v63 = &v3;
                    v8 = uu_mv::rename::hfc95a4bd2fcddeec(v49, v50, *((long long *)&v13), *((long long *)&(&v13)[8]), a4, v63);
                    if (v8)
                    {
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h23e5007a1b44b441(&v24, &v8);
                        if (!v26)
                        {
                            ::0x4e6550::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&v24);
                            v24 = v8;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                            ::0x4e6560::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbb55e5b4020a58ba(&v24);
                        }
                        else
                        {
                            ::0x4e6550::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&v24);
                            v65 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc501c0ef7d3cfc3f(v8, v47, &v12);
                            if (v3)
                            {
                                indicatif::multi::MultiProgress::suspend::hfe9402cb2a1cce7f(&v3, v65);
                            }
                            else
                            {
                                v1 = v65;
                                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                                v4 = uucore::util_name::h60d842bf27b05e82();
                                v5 = v41;
                                v17 = &v4;
                                v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                                v19 = &v1;
                                v20 = &_$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d9a93934d3f4680;
                                v24 = &g_5880d0;
                                v25 = 3;
                                v28 = 0;
                                v26 = &v17;
                                v27 = 2;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v24);
                                ::0x4e6f60::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hd70df9f725f15388(v1);
                            }
                        }
                    }
                    if ((long long)v10)
                        indicatif::progress_bar::ProgressBar::inc::he12f7743cfc9ae04(&v10, 1);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1e71081e8e91d8e8(&v24, &v12);
                    v19 = v26;
                    v66 = *((int128_t *)&v24);
                    v52 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
                    v17 = v66;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h663343a02dd1e8c9(&v36, &v17);
                    ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36();
                }
                else
                {
                    v57 = *((int128_t *)&v15);
                    v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
                    v30 = v57;
                    v31 = *((long long *)&v16);
                    if ((char)::0x4e7b30::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7((&v30)[1], *((long long *)&v16), (&v22)[1], v23))
                    {
                        v34 = v49;
                        v35 = v50;
                        uucore::features::fs::normalize_path::hf9d1827f61a753a1(&v8, a2, a3);
                        v58 = *((int128_t *)&v9);
                        v39 = v58;
                        std::path::Path::components::h4f3217acf0fc8653(&v24, (&v22)[1], v23);
                        *((char *)&v17) = 10;
                        ::0x4e7470::core::iter::traits::iterator::Iterator::fold::h37e4f9fde7d2dd93(&v4, &v24, &v17);
                        core::option::Option$LT$T$GT$::map_or_else::ha11fb6aa50fc66bf(&v1, &v4, a2, a3);
                        v24 = &v34;
                        v25 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v26 = &v39;
                        v27 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v28 = &v1;
                        v29 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v17 = &g_588130;
                        v18 = 4;
                        v21 = 0;
                        v19 = &v24;
                        v20 = 3;
                        ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d();
                        ::0x4e6550::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&v1);
                        ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36();
                        v26 = v6;
                        v64 = *((int128_t *)&v4);
                        v52 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                        v24 = v64;
                        *((int *)&v27) = 1;
                        *((double *)&v1) = alloc::boxed::Box$LT$T$GT$::new::hb29f62ded121125b(&v24);
                        v2 = &g_587f60;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v1));
                        v4 = uucore::util_name::h60d842bf27b05e82();
                        v5 = v41;
                        v17 = &v4;
                        v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                        v19 = &v1;
                        v20 = &_$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7a0d8bad1d3a886c;
                        v24 = &g_5880d0;
                        v25 = 3;
                        v28 = 0;
                        v26 = &v17;
                        v27 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v24);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::ha3c2118ebdfb1144(v1, v2);
                        ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36();
                        if (*((long long *)&v15) == 0x8000000000000000)
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h57ad1af1f1c9aa26(&v15);
                    }
                    else
                    {
                        ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36();
                        if ((v47 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68171754d1dad8d6(&v32), v47))
                            goto LABEL_4ea629;
                        goto LABEL_4ea61c;
                    }
LABEL_4ea19c:
                    ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36();
                }
            }
        } while ((v47 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68171754d1dad8d6(&v32), v47));
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&v10);
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..multi..MultiProgress$GT$$GT$::ha439cdb5b0953c56(&v3);
    ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36();
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h3a17ce3d5c845dcb();
    return 0;
}
