long long uu_mv::move_files_into_dir::hea74a81b456dd214(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55])
{
    char v0;  // [sp-0x301]
    struct struct_0 **v1;  // [sp-0x300]
    unsigned long long v2;  // [sp-0x2f8]
    struct struct_0 **v3;  // [sp-0x2e8]
    struct struct_0 **v4;  // [sp-0x2d0]
    struct struct_0 **v5;  // [sp-0x2d0]
    unsigned long long v6;  // [sp-0x2c8]
    struct struct_0 **v7;  // [sp-0x2c0], Other Possible Types: unsigned long
    unsigned long long v8;  // [sp-0x2b8]
    struct struct_0 **v9;  // [bp-0x290]
    char v10;  // [bp-0x288]
    int v12;  // [bp-0x278], Other Possible Types: void*, struct struct_0 **
    unsigned long long v13;  // [sp-0x268]
    char v14;  // [bp-0x258]
    char v15;  // [bp-0x250]
    char v16;  // [bp-0x248]
    char v17;  // [bp-0x240]
    char v18;  // [bp-0x230]
    struct struct_0 **v19;  // [bp-0x228]
    struct struct_0 **v20;  // [sp-0x220], Other Possible Types: unsigned long long
    struct struct_0 **v21;  // [sp-0x218], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v22;  // [bp-0x210], Other Possible Types: char
    void* v23;  // [sp-0x208]
    struct struct_0 **v24;  // [bp-0x198], Other Possible Types: char
    unsigned long long v25;  // [sp-0x188]
    struct struct_0 **v26;  // [bp-0x178]
    struct struct_0 **v27;  // [sp-0x178], Other Possible Types: unsigned long
    struct struct_0 **v28;  // [sp-0x170], Other Possible Types: unsigned long long
    struct struct_0 **v29;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v30;  // [bp-0x160], Other Possible Types: unsigned long
    struct struct_0 **v31;  // [sp-0x158], Other Possible Types: void*
    unsigned long long v32;  // [sp-0x150]
    struct struct_0 **v33;  // [sp-0xc8]
    unsigned long long v34;  // [sp-0xb8]
    unsigned long v35;  // [sp-0xa8]
    unsigned long long v36;  // [sp-0xa0]
    struct struct_0 **v37;  // [sp-0x98]
    unsigned long long v38;  // [sp-0x90]
    char v39;  // [bp-0x88]
    char v40;  // [bp-0x58]
    char v41;  // [bp-0x48]
    struct struct_0 **v42;  // [sp-0x40]
    unsigned long long v44;  // rdx
    struct struct_0 **v46;  // xmm0
    struct struct_0 **v47;  // xmm0
    struct_1 *v48;  // rax
    struct_1 *v49;  // rbx
    struct struct_0 **v50;  // r15
    unsigned long long v51;  // r14
    struct struct_0 **v52;  // xmm0
    int v53;  // ymm0
    unsigned long long v54;  // rax
    struct struct_0 **v55;  // xmm0
    struct struct_0 **v56;  // xmm0
    struct struct_0 **v57;  // xmm0
    struct struct_0 **v58;  // xmm0
    struct struct_0 **v59;  // xmm0
    struct struct_0 **v62;  // r9
    struct struct_0 **v63;  // xmm0
    struct struct_0 **v64;  // rax
    struct struct_0 **v65;  // xmm0

    ::0x4e5f90::std::thread::local::LocalKey$LT$T$GT$::try_with::ha3d0a2de6b6a2a9f(&v26);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hdc874b6797fedd23(&v39, a1, ::0x4e7740::core::result::Result$LT$T$C$E$GT$::expect::hf1b80da9ba1f81f4(&v26), v44);
    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        v19 = 1;
        v20 = a2;
        v21 = a3;
        v22 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v5, &v19);
        v30 = v7;
        *((int128_t *)&v28) = *((int128_t *)&v5);
        v27 = 7;
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h3a17ce3d5c845dcb(&v39);
        return alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&v26);
    }
    std::fs::canonicalize::hde632c5d9c152691(&v26, a2, a3);
    if (v27 != 0x8000000000000000)
    {
        v25 = v29;
        v46 = *((int128_t *)&v27);
        v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
        v24 = v46;
    }
    else
    {
        uu_mv::move_files_into_dir::_$u7b$$u7b$closure$u7d$$u7d$::he4f083fce89ebeff(&v24, a2, a3, v28);
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
            v12 = 0;
        }
        else
        {
            indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&v5, a1);
            indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&v26, "moving {msg} {wide_bar} {pos}/{len}not replacing ? (backup: )");
            core::result::Result$LT$T$C$E$GT$::unwrap::h7d26c333f6a83544(&v19, &v26, &g_588188);
            indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&v26, &v5, &v19);
            indicatif::multi::MultiProgress::add::h9f882db003b558ae(&v19, &v3, &v26);
            v47 = *((int128_t *)&v19);
            v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
            v12 = v47;
            v13 = v21;
        }
    }
    v35 = a0;
    v36 = a0 + a1 * 24;
    v48 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68171754d1dad8d6(&v35);
    if (v48)
    {
        v49 = v48;
        v0 = a4[54];
        do
        {
            v50 = v49->field_8;
            v51 = v49->field_10;
            std::fs::metadata::h1d9ddf5324749f9a(&v26, v50, v51);
            if ((int)v26 == 2)
            {
                ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v26);
                v19 = 1;
                v20 = v50;
                v21 = v51;
                *((char *)&v22) = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v5, &v19);
                v30 = v7;
                v52 = *((int128_t *)&v4);
                v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
                v28 = v52;
                v26 = 0;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                v1 = uucore::util_name::h60d842bf27b05e82();
                v2 = v44;
                v4 = &v1;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                v7 = &v26;
                v8 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::h51bb9d950ecc6a52;
                v19 = &g_5880d0;
                v20 = 3;
                v23 = 0;
                v21 = &v5;
                v22 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hb0f2c59e69cfedd9(&v26);
                continue;
            }
            ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v26);
            if ((long long)v12)
            {
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v26, v50, v51);
                ::0x4e8340::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&v19, v28, v29);
                indicatif::progress_bar::ProgressBar::set_message::h77492990969b1322(&v12, &v19);
                ::0x4e6720::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hee6ae0c580e79f89(&v26);
            }
            v54 = std::path::Path::file_name::h79ecbb7850a9c7f3(v50, v51);
            if (!v54)
            {
                v19 = 1;
                v20 = v50;
                v21 = v51;
                *((char *)&v22) = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&v5, &v19);
                v30 = v7;
                v55 = *((int128_t *)&v4);
                v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
                v28 = v55;
                v26 = 0;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                v1 = uucore::util_name::h60d842bf27b05e82();
                v2 = v44;
                v4 = &v1;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                v7 = &v26;
                v8 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::h51bb9d950ecc6a52;
                v19 = &g_5880d0;
                v20 = 3;
                v23 = 0;
                v21 = &v5;
                v22 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hb0f2c59e69cfedd9(&v26);
                continue;
            }
            std::path::Path::join::h3b80008b40549e98(&v14, a2, a3, v54, v44);
            if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5c44f985d977b358(&v39, &v14) && v0 != 2)
            {
                v56 = *((int128_t *)&v16);
                v1 = v56;
                v5 = v50;
                v6 = v51;
                v19 = &v1;
                v20 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v21 = &v5;
                v22 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v27 = &g_588100;
                v28 = 3;
                v31 = 0;
                v29 = &v19;
                v30 = 2;
                ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v40, &v26);
                *((unsigned int *)&v30) = 1;
                v57 = *((int128_t *)&v40);
                v53 = (v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
                v27 = v57;
                v29 = *((long long *)&v41);
                *((double *)&v1) = alloc::boxed::Box$LT$T$GT$::new::hb29f62ded121125b(&v26);
                v2 = &g_587f60;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v1));
                v4 = uucore::util_name::h60d842bf27b05e82();
                v6 = v44;
                v19 = &v5;
                v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                v21 = &v1;
                v22 = &_$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7a0d8bad1d3a886c;
                v26 = &g_5880d0;
                v28 = 3;
                v31 = 0;
                v29 = &v19;
                v30 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v26);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::ha3c2118ebdfb1144(v1, v2);
                goto LABEL_4ea19c;
            }
            else
            {
                std::fs::canonicalize::hde632c5d9c152691(&v17, v50, v51);
                if (*((long long *)&v17) == 0x8000000000000000)
                {
LABEL_4ea61c:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h57ad1af1f1c9aa26(&v17);
LABEL_4ea629:
                    v62 = v3;
                    if (v62)
                        v62 = &v3;
                    v9 = uu_mv::rename::hfc95a4bd2fcddeec(v50, v51, *((long long *)&v15), *((long long *)&(&v16)[8]), a4, v62);
                    if (v9)
                    {
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h23e5007a1b44b441(&v26, &v9);
                        if (!v29)
                        {
                            ::0x4e6550::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&v26);
                            v26 = v9;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                            ::0x4e6560::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbb55e5b4020a58ba(&v26);
                        }
                        else
                        {
                            ::0x4e6550::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&v26);
                            v64 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc501c0ef7d3cfc3f(v9, v49, &v14);
                            if (!v3)
                            {
                                v1 = v64;
                                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                                v4 = uucore::util_name::h60d842bf27b05e82();
                                v6 = v44;
                                v19 = &v5;
                                v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                                v21 = &v1;
                                v22 = &_$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d9a93934d3f4680;
                                v26 = &g_5880d0;
                                v28 = 3;
                                v31 = 0;
                                v29 = &v19;
                                v30 = 2;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v26);
                                ::0x4e6f60::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hd70df9f725f15388(v1);
                            }
                            else
                            {
                                indicatif::multi::MultiProgress::suspend::hfe9402cb2a1cce7f(&v3, v64);
                            }
                        }
                    }
                    if ((long long)v12)
                        indicatif::progress_bar::ProgressBar::inc::he12f7743cfc9ae04(&v12, 1);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1e71081e8e91d8e8(&v26, &v14);
                    v21 = v29;
                    v65 = *((int128_t *)&v26);
                    v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                    v19 = v65;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h663343a02dd1e8c9(&v39, &v19);
                    ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v14);
                }
                else
                {
                    v58 = *((int128_t *)&v17);
                    v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
                    v33 = v58;
                    v34 = *((long long *)&v18);
                    if ((char)::0x4e7b30::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7((&v33)[1], *((long long *)&v18), (&v24)[1], v25))
                    {
                        v37 = v50;
                        v38 = v51;
                        uucore::features::fs::normalize_path::hf9d1827f61a753a1(&v9, a2, a3);
                        v59 = *((int128_t *)&v10);
                        v42 = v59;
                        std::path::Path::components::h4f3217acf0fc8653(&v26, (&v24)[1], v25);
                        *((char *)&v19) = 10;
                        ::0x4e7470::core::iter::traits::iterator::Iterator::fold::h37e4f9fde7d2dd93(&v5, &v26, &v19);
                        core::option::Option$LT$T$GT$::map_or_else::ha11fb6aa50fc66bf(&v1, &v5, a2, a3);
                        v27 = &v37;
                        v28 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v29 = &v42;
                        v30 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v31 = &v1;
                        v32 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v19 = &g_588130;
                        v20 = 4;
                        v23 = 0;
                        v21 = &v26;
                        v22 = 3;
                        ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v5, &v19);
                        ::0x4e6550::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&v1);
                        ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v9);
                        v29 = v7;
                        v63 = *((int128_t *)&v5);
                        v53 = (v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
                        v27 = v63;
                        *((unsigned int *)&v30) = 1;
                        *((double *)&v1) = alloc::boxed::Box$LT$T$GT$::new::hb29f62ded121125b(&v26);
                        v2 = &g_587f60;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v1));
                        v4 = uucore::util_name::h60d842bf27b05e82();
                        v6 = v44;
                        v19 = &v5;
                        v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                        v21 = &v1;
                        v22 = &_$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7a0d8bad1d3a886c;
                        v26 = &g_5880d0;
                        v28 = 3;
                        v31 = 0;
                        v29 = &v19;
                        v30 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v26);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::ha3c2118ebdfb1144(v1, v2);
                        ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v33);
                        if (*((long long *)&v17) == 0x8000000000000000)
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h57ad1af1f1c9aa26(&v17);
                    }
                    else
                    {
                        ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v33);
                        if (!(*((long long *)&v17) == 0x8000000000000000))
                            goto LABEL_4ea629;
                        goto LABEL_4ea61c;
                    }
LABEL_4ea19c:
                    ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v14);
                }
            }
        } while ((v49 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68171754d1dad8d6(&v35), v49));
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&v12);
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..multi..MultiProgress$GT$$GT$::ha439cdb5b0953c56(&v3);
    ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v24);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h3a17ce3d5c845dcb(&v39);
    return 0;
}
