long long uu_mv::move_files_into_dir::h2094580d118304f1(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55], unsigned long a5)
{
    char v0;  // [bp-0x308]
    char v1;  // [sp-0x301]
    int v2;  // [sp-0x300], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0x2f8]
    struct struct_0 **v4;  // [sp-0x2e8]
    char v5;  // [bp-0x2d0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0x2c8]
    unsigned long v7;  // [sp-0x2c0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x2b8]
    unsigned long v9;  // [bp-0x290], Other Possible Types: unsigned long long
    char v10;  // [bp-0x288]
    void* v11;  // [bp-0x278], Other Possible Types: int
    unsigned long long v12;  // [sp-0x268]
    char v13;  // [bp-0x258]
    char v14;  // [bp-0x250]
    char v16;  // [bp-0x240]
    char v17;  // [bp-0x230]
    int v18;  // [bp-0x228], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long long v19;  // [sp-0x220]
    unsigned long v20;  // [sp-0x218], Other Possible Types: unsigned long long
    char v21;  // [bp-0x210], Other Possible Types: unsigned long long, unsigned long
    void* v22;  // [sp-0x208]
    int v23;  // [bp-0x198], Other Possible Types: char
    unsigned long long v24;  // [sp-0x188]
    int v25;  // [bp-0x178], Other Possible Types: void*, char, unsigned long, unsigned long long
    int v26;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long v27;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned int v28;  // [bp-0x160], Other Possible Types: unsigned long, unsigned long long
    void* v29;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v30;  // [sp-0x150]
    int v31;  // [sp-0xc8]
    unsigned long long v32;  // [sp-0xb8]
    unsigned long v33;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0xa0]
    unsigned long v35;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x90]
    char v37;  // [bp-0x88]
    char v38;  // [bp-0x58]
    char v39;  // [bp-0x48]
    int v40;  // [sp-0x40]
    unsigned long long v42;  // rdx
    int v44;  // xmm0
    int v45;  // ymm0
    int v46;  // ymm0
    unsigned long long v47;  // rdi
    unsigned long long v48;  // rsi
    unsigned long long v49;  // rdx
    int v50;  // xmm0
    unsigned long long v51[3];  // rax
    int v52;  // ymm0
    unsigned long long v53;  // r15
    unsigned long long v54;  // r14
    int v55;  // xmm0
    int v56;  // ymm0
    unsigned long long v57;  // rsi
    unsigned long long v58;  // rdx
    unsigned long long v59;  // rcx
    unsigned long long v60;  // rax
    int v61;  // xmm0
    unsigned long long v62;  // r8
    unsigned long long v63;  // r9
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm0
    int v67;  // xmm0
    struct struct_0 **v72;  // rax
    int v73;  // xmm0
    unsigned long long v74;  // rax
    unsigned long long v75;  // rdx
    int v76;  // xmm0
    unsigned long long v77;  // rsi
    unsigned long long v78;  // rdx

    ::0x4e5370::std::thread::local::LocalKey$LT$T$GT$::try_with::hdbd0e540a1395040(&v25, a1, a2);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hbcff3b106f84c70e(&v37, a1, ::0x4e6b20::core::result::Result$LT$T$C$E$GT$::expect::hc564c0648d10ed5c(&v25), v42);
    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        v18 = 1;
        v19 = a2;
        v20 = a3;
        v21 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v5, &v18);
        v28 = v7;
        *((int128_t *)&v26) = *((int128_t *)&v5);
        v25 = 7;
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h039b33d50c25d3c2(&v37);
        return alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v25);
    }
    std::fs::canonicalize::h92292e2159c12124(&v25, a2, a3);
    if (v25 != 0x8000000000000000)
    {
        v24 = v27;
        v44 = *((int128_t *)&v25);
        v46 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
        v23 = v44;
    }
    else
    {
        uu_mv::move_files_into_dir::_$u7b$$u7b$closure$u7d$$u7d$::h02b63bbc8d61239a(&v23, a2, a3, v26);
    }
    if (!a4[51])
    {
        v4 = 0;
        goto LABEL_4e9523;
    }
    else
    {
        v4 = core::ops::function::FnOnce::call_once::hffb4a332b449fbc4(v47, v48, v49);
        if (a1 <= 1)
        {
LABEL_4e9523:
            v11 = 0;
        }
        else
        {
            indicatif::progress_bar::ProgressBar::new::haefb4e1b56f8434e(&v5, a1, v42);
            indicatif::style::ProgressStyle::with_template::hf3f5e5e18e71351f(&v25, "moving {msg} {wide_bar} {pos}/{len}will not overwrite just-created ''cannot move 'not replacing ?", 35);
            core::result::Result$LT$T$C$E$GT$::unwrap::h00ffd49cc349a49a(&v18, &v25, &g_587358);
            indicatif::progress_bar::ProgressBar::with_style::hb9e195dcb73dee57(&v25, &v5, &v18);
            indicatif::multi::MultiProgress::add::he1be2a6de0ee983c(&v18, &v4, &v25);
            v50 = *((int128_t *)&v18);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
            v11 = v50;
            v12 = v20;
        }
    }
    v33 = a0;
    v34 = a0 + a1 * 24;
    v51 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hda354f7fff64df52(&v33);
    if (v51)
    {
        v1 = a4[54];
        do
        {
            v53 = v51[1];
            v54 = v51[2];
            std::fs::metadata::ha7346a2a69513158(&v25, v53, v54);
            if ((int)v25 == 2)
            {
                ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v25);
                v18 = 1;
                v19 = v53;
                v20 = v54;
                v21 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v5, &v18);
                v28 = v7;
                v55 = *((int128_t *)&v5);
                v56 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
                v26 = v55;
                v25 = 0;
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v2 = uucore::util_name::h412db5e565a079f3();
                v3 = v42;
                v5 = &v2;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                v7 = &v25;
                v8 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::hf39212da04571081;
                v18 = &g_587370;
                v19 = 3;
                v22 = 0;
                v20 = &v5;
                v21 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v57, v42);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hee908d7bc85d5e53(&v25);
                continue;
            }
            ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v25);
            if ((long long)v11)
            {
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v25, v53, v54);
                ::0x4e7720::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&v18, v26, v27);
                indicatif::progress_bar::ProgressBar::set_message::h34395439d562e4fb(&v11, &v18, v42);
                ::0x4e5b00::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::heb5ba12d6ac12a7e(&v25);
            }
            v60 = std::path::Path::file_name::h79ecbb7850a9c7f3(v53, v54, v58, v59);
            if (!v60)
            {
                v18 = 1;
                v19 = v53;
                v20 = v54;
                v21 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v5, &v18);
                v28 = v7;
                v61 = *((int128_t *)&v5);
                v56 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                v26 = v61;
                v25 = 0;
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v2 = uucore::util_name::h412db5e565a079f3();
                v3 = v42;
                v5 = &v2;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                v7 = &v25;
                v8 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::hf39212da04571081;
                v18 = &g_587370;
                v19 = 3;
                v22 = 0;
                v20 = &v5;
                v21 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v57, v42);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hee908d7bc85d5e53(&v25);
                continue;
            }
            std::path::Path::join::h919fe34c88b557b0(&v13, a2, a3, v60, v42);
            if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf3c3010e29d8267d(&v37, &v13, v42, v59, v62, v63) && v1 != 2)
            {
                v64 = *((int128_t *)&v14);
                v2 = v64;
                v5 = v53;
                v6 = v54;
                v18 = &v2;
                v19 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v20 = &v5;
                v21 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v25 = &g_5873a0;
                v26 = 3;
                v29 = 0;
                v27 = &v18;
                v28 = 2;
                ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v38, &v25);
                v28 = 1;
                v65 = *((int128_t *)&v38);
                v56 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                v25 = v65;
                v27 = *((long long *)&v39);
                *((double *)&v2) = alloc::boxed::Box$LT$T$GT$::new::hdf6ac089fb6d6a11(&v25);
                v3 = &g_5871d0;
                _$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::hc1cfb9e598268e23(v2);
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v5 = uucore::util_name::h412db5e565a079f3();
                v6 = v42;
                v18 = &v5;
                v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                v20 = &v2;
                v21 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha7535b98a2b374c3;
                v25 = &g_587370;
                v26 = 3;
                v29 = 0;
                v27 = &v18;
                v28 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v25, v57, v42);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hfc7ab5e2246bdfad(v2, v3);
                goto LABEL_4e957c;
            }
            else
            {
                std::fs::canonicalize::h92292e2159c12124(&v16, v53, v54);
                if (*((long long *)&v16) == 0x8000000000000000)
                {
LABEL_4e99fc:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd027b5cd8a5a0bf1(&v16);
LABEL_4e9a09:
                    v9 = uu_mv::rename::hc67228fb45a54ab1(v53, v54, *((long long *)&v14), *((long long *)&(&v14)[8]), a4, v72);
                    if (v9)
                    {
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h38199d0809aa2302(&v25, &v9);
                        if (!v27)
                        {
                            ::0x4e5930::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd60cb76546f8f2d1(&v25);
                            v25 = v9;
                            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                            ::0x4e5940::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbed791a0d2ad8391(&v25);
                        }
                        else
                        {
                            ::0x4e5930::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd60cb76546f8f2d1(&v25);
                            v74 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbb7913cab9a892ca(v9, v51, &v13);
                            if (v4)
                            {
                                indicatif::multi::MultiProgress::suspend::hae3e342f0c987edd(&v4, v74, v42);
                            }
                            else
                            {
                                v2 = v74;
                                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                                v5 = uucore::util_name::h412db5e565a079f3();
                                v6 = v42;
                                v18 = &v5;
                                v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                                v20 = &v2;
                                v21 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3775376e9fe30cc3;
                                v25 = &g_587370;
                                v26 = 3;
                                v29 = 0;
                                v27 = &v18;
                                v28 = 2;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v25, v57, v42);
                                ::0x4e6340::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h20de2d286823a179(v2);
                            }
                        }
                    }
                    if ((long long)v11)
                        indicatif::progress_bar::ProgressBar::inc::h68b57dcf0fa4530e(&v11, 1, v75);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1723b3eaa918cb47(&v25, &v13);
                    v20 = v27;
                    v76 = *((int128_t *)&v25);
                    v56 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                    v18 = v76;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hdd12d61bd0515be6(&v37, &v18);
                    ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v13);
                }
                else
                {
                    v66 = *((int128_t *)&v16);
                    v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
                    v31 = v66;
                    v32 = *((long long *)&v17);
                    if ((char)::0x4e6f10::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7((long long)(&v31)[8], *((long long *)&v17), (long long)(&v23)[8], v24, v62, v63))
                    {
                        v35 = v53;
                        v36 = v54;
                        uucore::features::fs::normalize_path::hcda0da6e5738e455(&v9, a2, a3, v59, v62, v63, *((long long *)&v0), v2);
                        v67 = *((int128_t *)&v10);
                        v40 = v67;
                        std::path::Path::components::h4f3217acf0fc8653(&v25, (long long)(&v23)[8], v24);
                        v18 = 10;
                        ::0x4e6850::core::iter::traits::iterator::Iterator::fold::h7b650d158ef726ce(&v5, &v25, &v18, v59, v62, v63);
                        core::option::Option$LT$T$GT$::map_or_else::heb787df27fc3f016(&v2, &v5, a2, a3);
                        v25 = &v35;
                        v26 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v27 = &v40;
                        v28 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v29 = &v2;
                        v30 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v18 = &g_5873d0;
                        v19 = 4;
                        v22 = 0;
                        v20 = &v25;
                        v21 = 3;
                        ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v5, &v18);
                        ::0x4e5930::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd60cb76546f8f2d1(&v2);
                        ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v9);
                        v27 = v7;
                        v73 = *((int128_t *)&v5);
                        v56 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
                        v25 = v73;
                        v28 = 1;
                        *((double *)&v2) = alloc::boxed::Box$LT$T$GT$::new::hdf6ac089fb6d6a11(&v25);
                        v3 = &g_5871d0;
                        _$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::hc1cfb9e598268e23(v2);
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                        v5 = uucore::util_name::h412db5e565a079f3();
                        v6 = v42;
                        v18 = &v5;
                        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                        v20 = &v2;
                        v21 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha7535b98a2b374c3;
                        v25 = &g_587370;
                        v26 = 3;
                        v29 = 0;
                        v27 = &v18;
                        v28 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v25, v57, v42);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hfc7ab5e2246bdfad(v2, v3);
                        ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v31);
                        if (*((long long *)&v16) == 0x8000000000000000)
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd027b5cd8a5a0bf1(&v16);
                    }
                    else
                    {
                        ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v31);
                        if ((v51 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hda354f7fff64df52(&v33), v51))
                            goto LABEL_4e9a09;
                        goto LABEL_4e99fc;
                    }
LABEL_4e957c:
                    ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v13);
                }
            }
        } while ((v51 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hda354f7fff64df52(&v33), v51));
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::hd02d19bc3f5e5d4d(&v11, v77, v78);
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..multi..MultiProgress$GT$$GT$::had39cdfae11381ba(&v4);
    ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v23);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h039b33d50c25d3c2(&v37);
    return 0;
}
