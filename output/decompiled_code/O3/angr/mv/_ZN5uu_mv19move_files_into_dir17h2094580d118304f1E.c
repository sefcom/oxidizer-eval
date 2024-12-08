long long uu_mv::move_files_into_dir::h2094580d118304f1(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55], unsigned long a5)
{
    char v0;  // [sp-0x301]
    int v1;  // [sp-0x300], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x2f8]
    struct struct_0 **v3;  // [sp-0x2e8]
    char v4;  // [bp-0x2d0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x2c8]
    unsigned long v6;  // [sp-0x2c0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x2b8]
    unsigned long v8;  // [bp-0x290], Other Possible Types: unsigned long long
    char v9;  // [bp-0x288]
    void* v10;  // [bp-0x278], Other Possible Types: int
    unsigned long long v11;  // [sp-0x268]
    char v12;  // [bp-0x258]
    char v13;  // [bp-0x250]
    char v14;  // [bp-0x248]
    char v15;  // [bp-0x240]
    char v16;  // [bp-0x230]
    int v17;  // [bp-0x228], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long long v18;  // [sp-0x220]
    unsigned long v19;  // [sp-0x218], Other Possible Types: unsigned long long
    char v20;  // [bp-0x210], Other Possible Types: unsigned long long, unsigned long
    void* v21;  // [sp-0x208]
    int v22;  // [bp-0x198], Other Possible Types: char
    unsigned long long v23;  // [sp-0x188]
    int v24;  // [bp-0x178], Other Possible Types: void*, char, unsigned long, unsigned long long
    int v25;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long v26;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned int v27;  // [bp-0x160], Other Possible Types: unsigned long, unsigned long long
    void* v28;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x150]
    int v30;  // [sp-0xc8]
    unsigned long long v31;  // [sp-0xb8]
    unsigned long v32;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v33;  // [sp-0xa0]
    unsigned long v34;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v35;  // [sp-0x90]
    char v36;  // [bp-0x88]
    char v37;  // [bp-0x58]
    char v38;  // [bp-0x48]
    int v39;  // [sp-0x40]
    unsigned long long v41;  // rdx
    int v43;  // xmm0
    int v44;  // ymm0
    int v45;  // ymm0
    unsigned long long v46;  // rdi
    unsigned long long v47;  // rsi
    unsigned long long v48;  // rdx
    int v49;  // xmm0
    unsigned long long v50[3];  // rax
    int v51;  // ymm0
    unsigned long long v52;  // r15
    unsigned long long v53;  // r14
    int v54;  // xmm0
    int v55;  // ymm0
    unsigned long long v56;  // rsi
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rcx
    unsigned long long v59;  // rax
    int v60;  // xmm0
    unsigned long long v61;  // r8
    unsigned long long v62;  // r9
    int v63;  // xmm0
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm0
    struct struct_0 **v71;  // rax
    int v72;  // xmm0
    unsigned long long v73;  // rax
    unsigned long long v74;  // rdx
    int v75;  // xmm0
    unsigned long long v76;  // rsi
    unsigned long long v77;  // rdx

    ::0x4e5370::std::thread::local::LocalKey$LT$T$GT$::try_with::hdbd0e540a1395040(&v24, a1, a2);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hbcff3b106f84c70e(&v36, a1, ::0x4e6b20::core::result::Result$LT$T$C$E$GT$::expect::hc564c0648d10ed5c(&v24), v41);
    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        v17 = 1;
        v18 = a2;
        v19 = a3;
        v20 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v4, &v17);
        v27 = v6;
        *((int128_t *)&v25) = *((int128_t *)&v4);
        v24 = 7;
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h039b33d50c25d3c2(&v36);
        return alloc::boxed::Box$LT$T$GT$::new::h590dadc9ea55037f(&v24);
    }
    std::fs::canonicalize::h92292e2159c12124(&v24, a2, a3);
    if (v24 != 0x8000000000000000)
    {
        v23 = v26;
        v43 = *((int128_t *)&v24);
        v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
        v22 = v43;
    }
    else
    {
        uu_mv::move_files_into_dir::_$u7b$$u7b$closure$u7d$$u7d$::h02b63bbc8d61239a(&v22, a2, a3, v25);
    }
    if (!a4[51])
    {
        v3 = 0;
        goto LABEL_4e9523;
    }
    else
    {
        v3 = core::ops::function::FnOnce::call_once::hffb4a332b449fbc4(v46, v47, v48);
        if (a1 <= 1)
        {
LABEL_4e9523:
            v10 = 0;
        }
        else
        {
            indicatif::progress_bar::ProgressBar::new::haefb4e1b56f8434e(&v4, a1, v41);
            indicatif::style::ProgressStyle::with_template::hf3f5e5e18e71351f(&v24, "moving {msg} {wide_bar} {pos}/{len}will not overwrite just-created ''cannot move 'not replacing ?", 35);
            core::result::Result$LT$T$C$E$GT$::unwrap::h00ffd49cc349a49a(&v17, &v24, &g_587358);
            indicatif::progress_bar::ProgressBar::with_style::hb9e195dcb73dee57(&v24, &v4, &v17);
            indicatif::multi::MultiProgress::add::he1be2a6de0ee983c(&v17, &v3, &v24);
            v49 = *((int128_t *)&v17);
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            v10 = v49;
            v11 = v19;
        }
    }
    v32 = a0;
    v33 = a0 + a1 * 24;
    v50 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hda354f7fff64df52(&v32);
    if (v50)
    {
        v0 = a4[54];
        do
        {
            v52 = v50[1];
            v53 = v50[2];
            std::fs::metadata::ha7346a2a69513158(&v24, v52, v53);
            if ((int)v24 == 2)
            {
                ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v24);
                v17 = 1;
                v18 = v52;
                v19 = v53;
                v20 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v4, &v17);
                v27 = v6;
                v54 = *((int128_t *)&v4);
                v55 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                v25 = v54;
                v24 = 0;
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v1 = uucore::util_name::h412db5e565a079f3();
                v2 = v41;
                v4 = &v1;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                v6 = &v24;
                v7 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::hf39212da04571081;
                v17 = &g_587370;
                v18 = 3;
                v21 = 0;
                v19 = &v4;
                v20 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v56, v41);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hee908d7bc85d5e53(&v24);
                continue;
            }
            ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v24);
            if ((long long)v10)
            {
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v24, v52, v53);
                ::0x4e7720::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&v17, v25, v26);
                indicatif::progress_bar::ProgressBar::set_message::h34395439d562e4fb(&v10, &v17, v41);
                ::0x4e5b00::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::heb5ba12d6ac12a7e(&v24);
            }
            v59 = std::path::Path::file_name::h79ecbb7850a9c7f3(v52, v53, v57, v58);
            if (!v59)
            {
                v17 = 1;
                v18 = v52;
                v19 = v53;
                v20 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h899ffdeadb5d2a8f(&v4, &v17);
                v27 = v6;
                v60 = *((int128_t *)&v4);
                v55 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
                v25 = v60;
                v24 = 0;
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v1 = uucore::util_name::h412db5e565a079f3();
                v2 = v41;
                v4 = &v1;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                v6 = &v24;
                v7 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::hf39212da04571081;
                v17 = &g_587370;
                v18 = 3;
                v21 = 0;
                v19 = &v4;
                v20 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v56, v41);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hee908d7bc85d5e53(&v24);
                continue;
            }
            std::path::Path::join::h919fe34c88b557b0(&v12, a2, a3, v59, v41);
            if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf3c3010e29d8267d(&v36, &v12, v41, v58, v61, v62) && v0 != 2)
            {
                v63 = *((int128_t *)&v13);
                v1 = v63;
                v4 = v52;
                v5 = v53;
                v17 = &v1;
                v18 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v19 = &v4;
                v20 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v24 = &g_5873a0;
                v25 = 3;
                v28 = 0;
                v26 = &v17;
                v27 = 2;
                ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v37, &v24);
                v27 = 1;
                v64 = *((int128_t *)&v37);
                v55 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                v24 = v64;
                v26 = *((long long *)&v38);
                *((double *)&v1) = alloc::boxed::Box$LT$T$GT$::new::hdf6ac089fb6d6a11(&v24);
                v2 = &g_5871d0;
                _$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::hc1cfb9e598268e23(v1);
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v4 = uucore::util_name::h412db5e565a079f3();
                v5 = v41;
                v17 = &v4;
                v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                v19 = &v1;
                v20 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha7535b98a2b374c3;
                v24 = &g_587370;
                v25 = 3;
                v28 = 0;
                v26 = &v17;
                v27 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v24, v56, v41);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hfc7ab5e2246bdfad(v1, v2);
                goto LABEL_4e957c;
            }
            else
            {
                std::fs::canonicalize::h92292e2159c12124(&v15, v52, v53);
                if (*((long long *)&v15) == 0x8000000000000000)
                {
LABEL_4e99fc:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd027b5cd8a5a0bf1(&v15);
LABEL_4e9a09:
                    v8 = uu_mv::rename::hc67228fb45a54ab1(v52, v53, *((long long *)&v13), *((long long *)&v14), a4, v71);
                    if (v8)
                    {
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h38199d0809aa2302(&v24, &v8);
                        if (!v26)
                        {
                            ::0x4e5930::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd60cb76546f8f2d1(&v24);
                            v24 = v8;
                            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                            ::0x4e5940::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbed791a0d2ad8391(&v24);
                        }
                        else
                        {
                            ::0x4e5930::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd60cb76546f8f2d1(&v24);
                            v73 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbb7913cab9a892ca(v8, v50, &v12);
                            if (v3)
                            {
                                indicatif::multi::MultiProgress::suspend::hae3e342f0c987edd(&v3, v73, v41);
                            }
                            else
                            {
                                v1 = v73;
                                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                                v4 = uucore::util_name::h412db5e565a079f3();
                                v5 = v41;
                                v17 = &v4;
                                v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                                v19 = &v1;
                                v20 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3775376e9fe30cc3;
                                v24 = &g_587370;
                                v25 = 3;
                                v28 = 0;
                                v26 = &v17;
                                v27 = 2;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v24, v56, v41);
                                ::0x4e6340::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h20de2d286823a179(v1);
                            }
                        }
                    }
                    if ((long long)v10)
                        indicatif::progress_bar::ProgressBar::inc::h68b57dcf0fa4530e(&v10, 1, v74);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1723b3eaa918cb47(&v24, &v12);
                    v19 = v26;
                    v75 = *((int128_t *)&v24);
                    v55 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
                    v17 = v75;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hdd12d61bd0515be6(&v36, &v17);
                    ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v12);
                }
                else
                {
                    v65 = *((int128_t *)&v15);
                    v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                    v30 = v65;
                    v31 = *((long long *)&v16);
                    if ((char)::0x4e6f10::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7((long long)(&v30)[8], *((long long *)&v16), (long long)(&v22)[8], v23, v61, v62))
                    {
                        v34 = v52;
                        v35 = v53;
                        uucore::features::fs::normalize_path::hcda0da6e5738e455(&v8, a2, a3);
                        v66 = *((int128_t *)&v9);
                        v39 = v66;
                        std::path::Path::components::h4f3217acf0fc8653(&v24, (long long)(&v22)[8], v23);
                        v17 = 10;
                        ::0x4e6850::core::iter::traits::iterator::Iterator::fold::h7b650d158ef726ce(&v4, &v24, &v17, v58, v61, v62);
                        core::option::Option$LT$T$GT$::map_or_else::heb787df27fc3f016(&v1, &v4, a2, a3);
                        v24 = &v34;
                        v25 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v26 = &v39;
                        v27 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v28 = &v1;
                        v29 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v17 = &g_5873d0;
                        v18 = 4;
                        v21 = 0;
                        v19 = &v24;
                        v20 = 3;
                        ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v4, &v17);
                        ::0x4e5930::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd60cb76546f8f2d1(&v1);
                        ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v8);
                        v26 = v6;
                        v72 = *((int128_t *)&v4);
                        v55 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                        v24 = v72;
                        v27 = 1;
                        *((double *)&v1) = alloc::boxed::Box$LT$T$GT$::new::hdf6ac089fb6d6a11(&v24);
                        v2 = &g_5871d0;
                        _$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::hc1cfb9e598268e23(v1);
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                        v4 = uucore::util_name::h412db5e565a079f3();
                        v5 = v41;
                        v17 = &v4;
                        v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                        v19 = &v1;
                        v20 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha7535b98a2b374c3;
                        v24 = &g_587370;
                        v25 = 3;
                        v28 = 0;
                        v26 = &v17;
                        v27 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v24, v56, v41);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hfc7ab5e2246bdfad(v1, v2);
                        ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v30);
                        if (*((long long *)&v15) == 0x8000000000000000)
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd027b5cd8a5a0bf1(&v15);
                    }
                    else
                    {
                        ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v30);
                        if ((v50 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hda354f7fff64df52(&v32), v50))
                            goto LABEL_4e9a09;
                        goto LABEL_4e99fc;
                    }
LABEL_4e957c:
                    ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v12);
                }
            }
        } while ((v50 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hda354f7fff64df52(&v32), v50));
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::hd02d19bc3f5e5d4d(&v10, v76, v77);
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..multi..MultiProgress$GT$$GT$::had39cdfae11381ba(&v3);
    ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v22);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h039b33d50c25d3c2(&v36);
    return 0;
}
