long long uu_hostname::display_hostname::hb7e83080e266b2ca(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    struct struct_0 **v0;  // [bp-0x168]
    unsigned long long v1;  // [sp-0x160]
    struct struct_0 **v2;  // [sp-0x158]
    unsigned long long v3;  // [sp-0x150]
    void* v4;  // [bp-0x148], Other Possible Types: char
    unsigned long v5;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x130]
    unsigned long v7;  // [sp-0x128], Other Possible Types: unsigned long long
    struct struct_0 **v8;  // [sp-0x118]
    struct struct_0 **v9;  // [sp-0x108]
    struct struct_0 **v10;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v11;  // [sp-0xf0]
    struct struct_0 **v12;  // [bp-0xe8], Other Possible Types: char
    struct struct_0 **v13;  // [bp-0xd8], Other Possible Types: unsigned long
    unsigned long v14;  // [sp-0xd0], Other Possible Types: unsigned long long
    void* v15;  // [bp-0xc8], Other Possible Types: struct struct_0 **, char
    char v16;  // [bp-0xc0]
    struct struct_0 **v17;  // [sp-0xb8]
    void* v18;  // [sp-0xa8]
    unsigned long long v19;  // [sp-0xa0]
    void* v20;  // [sp-0x98]
    char v21;  // [bp-0x90]
    char v22;  // [bp-0x88]
    char v23;  // [bp-0x80]
    unsigned long v24;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x70]
    unsigned long v26;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x60]
    struct struct_0 **v28;  // [sp-0x58]
    struct struct_0 **v29;  // [sp-0x48]
    void* v31;  // rax
    struct struct_0 **v33;  // xmm0
    int v34;  // ymm0
    int v35;  // ymm0
    int v36;  // ymm0
    struct struct_0 **v37;  // xmm0
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // r8
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rdx
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rdx
    struct struct_0 **v47;  // xmm0
    struct struct_0 **v48;  // xmm1
    struct struct_0 **v49;  // xmm0
    int v50;  // ymm0
    struct struct_0 **v51;  // xmm1
    int v52;  // ymm1
    int v53;  // ymm1
    unsigned long long v54;  // rsi
    unsigned long long v55;  // rdx
    unsigned long long v56;  // r13
    unsigned long long v57;  // rax
    unsigned long long v58;  // rax
    struct struct_0 **v59;  // xmm0
    struct struct_0 **v60;  // xmm1
    struct struct_0 **v61;  // xmm0
    struct struct_0 **v62;  // xmm1
    unsigned long long v63;  // rsi
    unsigned long long v64;  // rsi
    unsigned long long v65;  // r14
    unsigned long long v66;  // rax

    hostname::get::h61ff34d453bc4655(&v0, a1, a2);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h31343d2c1a16f84a(&v13, &v0);
    v31 = v14;
    if (v5 == 0x8000000000000000)
        return v31;
    v5 = v13;
    v6 = v31;
    v7 = *((long long *)&v15);
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v10, v6, v7);
    if (v10 != 0x8000000000000000)
    {
        v9 = *((long long *)&v12);
        v33 = *((int128_t *)&v10);
        v35 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
    }
    else
    {
        ::0x4af1d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h055d5e87f2acdc55(&v0, v11, *((long long *)&v12));
        v9 = v2;
        v35 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
    }
    v8 = v33;
    ::0x4ae470::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h2b6be5ae4ecb0b10(&v5);
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "ip-address", 10))
    {
        v2 = v9;
        v37 = v8;
        v0 = v37;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v5, &v0);
        _$LT$alloc..string..String$u20$as$u20$std..net..socket_addr..ToSocketAddrs$GT$::to_socket_addrs::h05be57e59cc2cc3b(&v0, &v5, v38, v39, v40);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8a6ebe87743f1a37(&v13, &v0);
        v31 = v14;
        if (!v24)
        {
            ::0x4ae420::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(&v5);
            return v31;
        }
        v24 = v13;
        v25 = v31;
        v26 = *((long long *)&v15);
        v27 = *((long long *)&v16);
        ::0x4ae420::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(&v5);
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h339483a9a5339a88(&v0, v45, v38);
        v47 = *((int128_t *)&v0);
        v48 = *((int128_t *)&v2);
        *((int128_t *)&v17) = *((int128_t *)&v4);
        v15 = v48;
        v13 = v47;
        v18 = 0;
        v19 = 1;
        v20 = 0;
        v49 = *((int128_t *)&v24);
        v50 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
        v51 = *((int128_t *)&v26);
        v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
        v12 = v51;
        v10 = v49;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h430276f2adbaa693(&v5, &v10);
        if ((short)v5 != 2)
        {
            do
            {
                v59 = *((int128_t *)&v5);
                v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
                v60 = *((int128_t *)&v7);
                v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
                v29 = v60;
                v28 = v59;
                if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h8480289187164d9e(&v13, &v28))
                {
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h6eb467b2be988407(&v21, &v28);
                    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hc6ddc21bcea4abf2(*((long long *)&v22), *((long long *)&v23), ":1\nsrc/uu/hostname/src/hostname.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 2))
                        ::0x4af370::alloc::string::String::truncate::hafe089c60c3201e9(&v21, *((long long *)&v23) - 2);
                    ::0x4af280::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hfb321296f5c74ae6(&v18, ::0x4aefc0::core::slice::iter::Iter$LT$T$GT$::make_slice::h4d84bc7c75e20a35(*((long long *)&v22), *((long long *)&v23) + *((long long *)&v22)), v38);
                    ::0x4af300::alloc::string::String::push::h859ae11851fd8b8e(&v18, 32, v38);
                    v61 = v28;
                    v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                    v62 = v29;
                    v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
                    v2 = v62;
                    v0 = v61;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h06ac9bed48b1a8c9(&v13, &v0);
                    ::0x4ae420::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(&v21);
                }
            } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h430276f2adbaa693(&v5, &v10), (short)v5 != 2));
        }
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$core..net..socket_addr..SocketAddr$GT$$GT$::h63d022b3ffacee7e(&v10);
        v65 = v20;
        if (v65)
        {
            v66 = ::0x4aee70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v65 - 1, v19);
            if (!v66)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            v5 = v66;
            v6 = v38;
            v10 = &v5;
            v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d67e1dd5db2d0a3;
            v0 = &g_5181f8;
            v1 = 2;
            v4 = 0;
            v2 = &v10;
            v3 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v0, v45, v38);
        }
        ::0x4ae420::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(&v18);
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$core..net..socket_addr..SocketAddr$GT$$GT$::hfac6686e50cf3d19(&v13);
    }
    else
    {
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "short", 5) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "domain", 6) || (v13 = (&v8)[1], v14 = (unsigned long long)(v9 + v13), v15 = (void*)0, (unsigned int)v46 == 0x110000))
        {
            v13 = &v8;
            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v0 = &g_5181f8;
            v1 = 2;
            v4 = 0;
            v2 = &v13;
            v3 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v0, v54, v55);
            goto LABEL_4b0299;
        }
        v56 = core::iter::traits::iterator::Iterator::try_fold::hee6e80971634247b(&v13, v42, v43);
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "short", 5))
        {
            v58 = ::0x4aee90::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v56 + 1, (&v8)[1], v9);
            if (!v58)
            {
LABEL_4b02da:
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            v5 = v58;
            v6 = v46;
            v10 = &v5;
            v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d67e1dd5db2d0a3;
            v0 = &g_5181f8;
            v1 = 2;
            v4 = 0;
            v2 = &v10;
            v3 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v0, v64, v46);
        }
        else
        {
            v57 = ::0x4aee70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v56, (&v8)[1]);
            if (!v57)
            {
                goto LABEL_4b02da;
            }
            else
            {
                v5 = v57;
                v6 = v46;
                v10 = &v5;
                v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d67e1dd5db2d0a3;
                v0 = &g_5181f8;
                v1 = 2;
                v4 = 0;
                v2 = &v10;
                v3 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v0, v63, v46);
            }
        }
LABEL_4b0299:
        ::0x4ae420::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(&v8);
    }
    return 0;
}
