long long uu_shuf::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x4a8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x4a8]
    unsigned long long v2;  // [bp-0x4a0]
    unsigned long long v3;  // [bp-0x498]
    int v4;  // [bp-0x488]
    unsigned long long v5;  // [bp-0x488]
    unsigned long long v6;  // [bp-0x488]
    unsigned long long v7;  // [bp-0x488]
    int v8;  // [bp-0x480], Other Possible Types: char
    char v9;  // [bp-0x478], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x478]
    char v11;  // [bp-0x470]
    int v12;  // [bp-0x468]
    int v13;  // [bp-0x468]
    unsigned long long v14;  // [bp-0x458]
    void* v15;  // [bp-0x450]
    unsigned long long v16;  // [bp-0x450]
    unsigned long long v17;  // [bp-0x448]
    int v18;  // [bp-0x440], Other Possible Types: char
    char v19;  // [bp-0x430], Other Possible Types: unsigned long long
    unsigned int v20;  // [bp-0x42f]
    unsigned int v21;  // [bp-0x42c]
    int v22;  // [bp-0x428]
    int v23;  // [bp-0x428]
    unsigned long long v24;  // [bp-0x420]
    unsigned long long v25;  // [bp-0x418]
    int v26;  // [bp-0x408], Other Possible Types: unsigned int, unsigned long long
    unsigned int v27;  // [bp-0x405]
    unsigned long long v28;  // [bp-0x400]
    int v29;  // [bp-0x3f8], Other Possible Types: unsigned long long
    void* v30;  // [bp-0x3f0], Other Possible Types: unsigned long long
    int v31;  // [bp-0x3f0]
    int v32;  // [bp-0x3e8]
    void* v33;  // [bp-0x3e0], Other Possible Types: unsigned long long
    int v34;  // [bp-0x3d8], Other Possible Types: unsigned long long
    void* v35;  // [bp-0x3d0], Other Possible Types: char
    char v36;  // [bp-0x3cf]
    unsigned int v37;  // [bp-0x3c8]
    unsigned int v38;  // [bp-0x3c4]
    unsigned long long v39;  // [bp-0x3c0]
    unsigned long long v40;  // [bp-0x3b8]
    unsigned long long v41;  // [bp-0x3b0]
    char v42;  // [bp-0x3a8]
    int v43;  // [bp-0x398]
    unsigned long long v44;  // [bp-0x388]
    int v45;  // [bp-0x380], Other Possible Types: char
    unsigned long v46;  // [bp-0x370]
    unsigned long long v47;  // [bp-0x368]
    unsigned long long v48;  // [bp-0x360]
    int v49;  // [bp-0x358]
    int v50;  // [bp-0x348]
    unsigned long long v51;  // [bp-0x338]
    unsigned long long v52;  // [bp-0x330]
    char v53;  // [bp-0x328]
    unsigned long long v54;  // [bp-0x318]
    char v55;  // [bp-0x310]
    unsigned long long v56;  // [bp-0x300]
    int v57;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long long v58;  // [bp-0x2f0]
    int v59;  // [bp-0x2e8], Other Possible Types: char, unsigned long
    char v60;  // [bp-0x2e7]
    unsigned int v61;  // [bp-0x2e4]
    unsigned int v62;  // [bp-0x2e0]
    int v63;  // [bp-0x2d8]
    unsigned long long v64;  // [bp-0x2c8]
    unsigned long long v65;  // [bp-0x2c0]
    int v67;  // xmm1
    unsigned long long v68;  // rcx
    unsigned long long v71;  // rax
    char v72;  // al
    int v73;  // xmm0
    unsigned long long v74;  // rax
    struct_0 *v75;  // rax
    unsigned long long v76;  // rbx
    unsigned long long v77;  // rcx
    uint128_t v78;  // xmm0
    void* v79;  // rdx
    unsigned long long v81;  // rsi
    unsigned long long v82;  // rax
    unsigned long long v83;  // rax
    unsigned long long v84;  // rax
    char v85;  // al
    char v86;  // al
    unsigned long v87;  // rdx
    unsigned long long v88;  // rax
    unsigned long long v89;  // rcx
    char v90;  // r13b
    unsigned int v91;  // eax
    unsigned long long v92;  // rdx
    unsigned long long v93;  // [bp-0x4a0]

    uu_shuf::uu_app(&v57);
    (char)v6.try_get_matches_from(&v57, a0, a1);
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
        return *((long long *)&v8).from();
    v44 = v81;
    v67 = v13;
    v43 = v67;
    memcpy(&v42, &v9, 16);
    v40 = v6;
    v41 = *((long long *)&v8);
    if ((char)v40.get_flag(_ZN7uu_shuf7options4ECHO17h03e57bd2988bae02E, g_58f978))
    {
        v57.try_get_many(&v40, _ZN7uu_shuf7options12FILE_OR_ARGS17hf1addcb51a4f46c3E, g_58f9e8);
        (char)v6.unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17hf1addcb51a4f46c3E, g_58f9e8, &v57);
        if (v6)
        {
            v68 = *((long long *)&v8);
            v67 = *((int128_t *)&v9);
            v16 = v15;
            v5 = v6;
            v14 = v81;
            v12 = v13;
        }
        else
        {
            v68 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
            v15 = 0;
            v5 = core::ops::function::FnOnce::call_once;
            v12 = 0;
        }
        v47 = v5;
        v48 = v68;
        v49 = v67;
        v50 = v12;
        v51 = v14;
        v52 = v15;
        v57.from_iter(&v47, &g_58ea78);
        v19 = *((long long *)&v59);
        memcpy(&v18, &v57, 16);
        v17 = 1;
    }
    else
    {
        v57.try_get_one(&v40, _ZN7uu_shuf7options11INPUT_RANGE17h8c668f1194421642E, g_58f988);
        v71 = _ZN7uu_shuf7options11INPUT_RANGE17h8c668f1194421642E.unwrap(g_58f988, &v57);
        if (v71)
        {
            v57.clone(v71);
            *((int128_t *)&v4) = *((int128_t *)&v57);
            v72 = v59;
            v26 = *((int *)&v60);
            v27 = v61;
            if (v72 == 2)
                goto LABEL_4a1c5c;
            memcpy(&v18, &v4, 16);
            v20 = v26;
            v21 = v27;
            v19 = v72;
            v17 = 2;
        }
        else
        {
LABEL_4a1c5c:
            v57.try_get_many(&v40, _ZN7uu_shuf7options12FILE_OR_ARGS17hf1addcb51a4f46c3E, g_58f9e8);
            (char)v6.unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17hf1addcb51a4f46c3E, g_58f9e8, &v57);
            if (v6)
            {
                v73 = (int128_t)v4;
                v67 = *((int128_t *)&v9);
                *((int128_t *)&v34) = *((int128_t *)&vvar_65{stack -1112});
                v32 = v13;
                v29 = v67;
                v26 = v73;
            }
            else
            {
                v26 = core::ops::function::FnOnce::call_once;
                v28 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
                v29 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
                v30 = 0;
                v33 = 0;
                v35 = 0;
            }
            v74 = (char)v26.next();
            if (v74)
            {
                v57.clone(v74);
                v3 = *((long long *)&v59);
                *((int128_t *)&v0) = *((int128_t *)&v57);
            }
            else
            {
                v1 = 0x8000000000000000;
            }
            v57.to_owned("-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 1);
            v10 = *((long long *)&v59);
            memcpy(&(char)v6, &v57, 16);
            if (v1 == 0x8000000000000000)
            {
                v25 = v10;
                *((int128_t *)&v23) = (int128_t)v4;
            }
            else
            {
                v25 = v3;
                *((int128_t *)&v23) = *((int128_t *)&v1);
                ::0x4a0d50::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v6);
            }
            v75 = (char)v26.next();
            if (v75)
            {
                v57.to_vec();
                v3 = *((long long *)&v59);
                *((int128_t *)&v0) = *((int128_t *)&v57);
                v5 = 1;
                *((int128_t *)&v8) = *((int128_t *)&(&v75->padding_0)[1]);
                v11 = 1;
                v57.spec_to_string(&v5);
                v54 = v3;
                memcpy(&v53, &v0, 16);
                memcpy(&v55, &v57, 16);
                v56 = *((long long *)&v59);
                v57.from_iter(&v53);
                uucore::mods::locale::get_message_with_args(&v45, "shuf-error-unexpected-argument/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 30, &v57);
                v62 = 1;
                v57 = v45;
                v59 = v46;
                v76 = v57.new();
                ::0x4a0d50::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v23);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
                return v76;
            }
            v19 = v25;
            memcpy(&v18, &v23, 16);
            v17 = 0;
        }
    }
    v57.try_get_many(&v40, _ZN7uu_shuf7options10HEAD_COUNT17h3102fae5d1b57ed4E, g_58f998);
    (char)v6.unwrap(_ZN7uu_shuf7options10HEAD_COUNT17h3102fae5d1b57ed4E, g_58f998, &v57);
    if (v6)
    {
        v77 = (long long)(&v4)[8];
        v67 = *((int128_t *)&v10);
        v78 = v13;
        v79 = v16;
        v7 = v6;
    }
    else
    {
        v78 = 0;
        v77 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v79 = 0;
        v7 = core::ops::function::FnOnce::call_once;
    }
    v57 = v7;
    v58 = v77;
    v59 = v67;
    *((uint128_t *)&v63) = v78;
    v64 = v81;
    v65 = v79;
    v82 = v57.reduce();
    v57.try_get_one(&v40, _ZN7uu_shuf7options6OUTPUT17h7356d359ad2fc376E, g_58f9a8);
    v83 = _ZN7uu_shuf7options6OUTPUT17h7356d359ad2fc376E.unwrap(g_58f9a8, &v57);
    if (v83)
    {
        v57.clone(v83);
        v3 = (long long)v59;
        *((int128_t *)&v0) = *((int128_t *)&v57);
    }
    else
    {
        v1 = 0x8000000000000000;
    }
    v57.try_get_one(&v40, _ZN7uu_shuf7options13RANDOM_SOURCE17hc1b9901da096501dE, g_58f9b8);
    v84 = _ZN7uu_shuf7options13RANDOM_SOURCE17hc1b9901da096501dE.unwrap(g_58f9b8, &v57);
    if (v84)
    {
        v57.clone(v84);
        v10 = (long long)v59;
        *((int128_t *)&v4) = *((int128_t *)&v57);
    }
    else
    {
        v6 = 0x8000000000000000;
    }
    v85 = v40.get_flag(_ZN7uu_shuf7options6REPEAT17h65928e931cec9ae5E, g_58f9c8);
    v86 = ((char)v40.get_flag(_ZN7uu_shuf7options15ZERO_TERMINATED17hb4763797e98ad578E, g_58f9d8) ? 0 : 10);
    v34 = -(v82 < 1) | v87;
    *((int128_t *)&v26) = *((int128_t *)&v1);
    v29 = v3;
    *((int128_t *)&v31) = (int128_t)v4;
    v33 = v10;
    v35 = v85;
    v36 = v86;
    if ((long long)v26 == 0x8000000000000000)
    {
        v88 = std::io::stdio::stdout().new();
        v89 = &g_58ea90;
    }
    else
    {
        (char)v6.create(&(char)v26);
        v1.map_err_context(&(char)v6, &(char)v26);
        v76 = v1;
        if (v1)
        {
            v90 = 1;
            goto LABEL_4a25cb;
        }
        else
        {
            v88 = (unsigned int)v93.new();
            v89 = &g_58eae8;
        }
    }
    v57.with_capacity(0x2000, v88, v89);
    if (!v34)
    {
        v76 = 0;
        v90 = 1;
        goto LABEL_4a25be;
    }
    if (v30 == 0x8000000000000000)
    {
        v39 = rand::rngs::thread::rng();
        v37 = 1;
        v91 = v17;
        if (!v17)
            goto LABEL_4a24e3;
        goto LABEL_4a238b;
    }
    (char)v6.open(&v30);
    v1.map_err_context(&(char)v6, &v30);
    v76 = v1;
    if (v1)
    {
        v90 = 1;
        goto LABEL_4a25be;
    }
    v38 = v93;
    v37 = 0;
    v91 = v17;
    if (v17)
    {
LABEL_4a238b:
        if (v91 == 1)
        {
            v3 = v19;
            v0 = v18;
            (char)v6.from_iter(v93, v93 + v3 * 24, &g_58ea78);
            v76 = uu_shuf::shuf_exec(&(char)v6, &(char)v26, &v37, &v57);
            if (v76)
            {
                ::0x4a0f30::core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&(char)v6);
                ::0x4a0ee0::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v1);
                v90 = 1;
                goto LABEL_4a25b1;
            }
            else
            {
                ::0x4a0f30::core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&(char)v6);
                ::0x4a0ee0::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v1);
            }
        }
        else
        {
            v9 = v19;
            v4 = v18;
            v76 = uu_shuf::shuf_exec(&(char)v6, &(char)v26, &v37, &v57);
            if (v76)
            {
                v90 = 1;
                goto LABEL_4a25b1;
            }
        }
    }
    else
    {
LABEL_4a24e3:
        v92 = v19;
        v25 = v19;
        v22 = v18;
        uu_shuf::read_input_file(&(char)v6, v24, v92);
        v76 = (long long)(&v4)[8];
        if (v6 != 0x8000000000000000)
        {
            v0 = v6;
            v2 = (long long)(&v4)[8];
            v3 = v10;
            uu_shuf::split_seps(&(char)v6, v2, v10);
            v76 = uu_shuf::shuf_exec(&(char)v6, &(char)v26, &v37, &v57);
            if (v76)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(&(char)v6);
                ::0x4a0d10::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
                goto LABEL_4a2598;
            }
            else
            {
                core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(&(char)v6);
                ::0x4a0d10::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
                ::0x4a0ca0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v22);
            }
        }
        else
        {
LABEL_4a2598:
            ::0x4a0ca0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v22);
LABEL_4a25b1:
            core::ptr::drop_in_place<uu_shuf::WrappedRng>(&v37);
LABEL_4a25be:
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn uucore::mods::display::OsWrite>>>(&v57);
LABEL_4a25cb:
            core::ptr::drop_in_place<uu_shuf::Options>(&(char)v26);
            if (v17 != 2)
            {
                if ((unsigned int)v17 == 1)
                {
                    ::0x4a0ee0::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v18);
                }
                else if (v90)
                {
                    ::0x4a0ca0::core::ptr::drop_in_place<std::path::PathBuf>(&v18);
                }
            }
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
            return v76;
        }
    }
    core::ptr::drop_in_place<uu_shuf::WrappedRng>(&v37);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn uucore::mods::display::OsWrite>>>(&v57);
    core::ptr::drop_in_place<uu_shuf::Options>(&(char)v26);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
    return 0;
}
