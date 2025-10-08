long long uu_shuf::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x438], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x438]
    unsigned long long v2;  // [bp-0x438]
    unsigned long long v3;  // [bp-0x438]
    void* v4;  // [bp-0x430], Other Possible Types: unsigned long
    void* v5;  // [bp-0x430]
    char v6;  // [bp-0x428], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [bp-0x428]
    char v8;  // [bp-0x420]
    int v9;  // [bp-0x418]
    int v10;  // [bp-0x418]
    void* v11;  // [bp-0x408]
    char v12;  // [bp-0x400]
    void* v13;  // [bp-0x3f0], Other Possible Types: unsigned long long
    int v14;  // [bp-0x3e8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x3e0]
    char v16;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned int v17;  // [bp-0x3d7]
    unsigned int v18;  // [bp-0x3d4]
    unsigned long long v19;  // [bp-0x3d0]
    int v20;  // [bp-0x3c8], Other Possible Types: unsigned int, unsigned long long
    unsigned int v21;  // [bp-0x3c5]
    void* v22;  // [bp-0x3c0]
    int v23;  // [bp-0x3b8], Other Possible Types: void*, unsigned long long
    void* v24;  // [bp-0x3b0], Other Possible Types: unsigned long long
    int v25;  // [bp-0x3a8], Other Possible Types: void*
    void* v26;  // [bp-0x3a0], Other Possible Types: unsigned long long
    int v27;  // [bp-0x398], Other Possible Types: unsigned long long
    void* v28;  // [bp-0x390], Other Possible Types: char
    char v29;  // [bp-0x38f]
    unsigned int v30;  // [bp-0x380]
    unsigned int v31;  // [bp-0x37c]
    unsigned long long v32;  // [bp-0x378]
    void* v33;  // [bp-0x370], Other Possible Types: char *
    unsigned long long v34;  // [bp-0x368]
    void* v35;  // [bp-0x360]
    void* v36;  // [bp-0x358]
    unsigned long long v37;  // [bp-0x350]
    void* v38;  // [bp-0x348]
    char v39;  // [bp-0x340]
    int v40;  // [bp-0x330]
    void* v41;  // [bp-0x320]
    unsigned long long v42;  // [bp-0x318]
    int v43;  // [bp-0x310], Other Possible Types: char
    unsigned long v44;  // [bp-0x300]
    unsigned long long v45;  // [bp-0x2f8]
    int v46;  // [bp-0x2f8], Other Possible Types: unsigned long long
    void* v47;  // [bp-0x2f0], Other Possible Types: unsigned long long
    unsigned long long v48;  // [bp-0x2f0]
    char *v49;  // [bp-0x2e8], Other Possible Types: int, unsigned long
    char v50;  // [bp-0x2e7]
    unsigned int v51;  // [bp-0x2e4]
    unsigned int v52;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v53;  // [bp-0x2d8], Other Possible Types: int
    void* v54;  // [bp-0x2c8]
    void* v55;  // [bp-0x2c0], Other Possible Types: unsigned long long
    int v57;  // xmm1
    unsigned long long v58;  // rdx
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax
    char v64;  // al
    unsigned long long v65;  // r14
    int v66;  // xmm0
    unsigned long long v67[3];  // rax
    unsigned long long v68;  // rbp
    unsigned long v69;  // r13
    unsigned long long v71;  // r12
    unsigned long long v72[3];  // rax
    void* v73;  // rcx
    uint128_t v74;  // xmm0
    void* v75;  // rdx
    void* v77;  // rsi
    char v78;  // al
    unsigned long long v79;  // r15
    unsigned long long v80[3];  // rax
    unsigned long long v81;  // rbp
    unsigned long long v82[3];  // rax
    unsigned long long v83;  // r13
    char v84;  // al
    char v85;  // al
    unsigned long v86;  // rdx
    unsigned long long v87;  // r12
    unsigned long long v88;  // rax
    unsigned long long v89;  // rdx
    char v90;  // r15b
    void* v91;  // rax

    uu_shuf::uu_app(&(char)v46);
    (char)v3.try_get_matches_from(&(char)v46, a0, a1);
    if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
        return v38.from();
    v41 = v77;
    v57 = v10;
    v40 = v57;
    memcpy(&v39, &v6, 16);
    v37 = v2;
    v38 = v4;
    if ((char)v37.get_flag(_ZN7uu_shuf7options4ECHO17h84a9804fc6ebf4b3E, g_4fa008))
    {
        (char)v46.try_get_many(&v37, _ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E, g_4fa078);
        (char)v3.unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E, g_4fa078, &(char)v46);
        if (v2)
        {
            v57 = *((int128_t *)&v6);
            v58 = *((long long *)&v12);
            v1 = v2;
            v11 = v77;
            v5 = v4;
            v9 = v10;
        }
        else
        {
            v58 = 0;
            v1 = core::ops::function::FnOnce::call_once;
            v5 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
            v9 = 0;
        }
        v46 = v1;
        v47 = v5;
        v49 = v57;
        v53 = v9;
        v54 = v11;
        v55 = v58;
        (char)v3.collect(&v46);
        *((int128_t *)&v14) = *((int128_t *)&v1);
        v16 = v7;
        v13 = 1;
        v62 = 1;
    }
    else
    {
        (char)v46.try_get_one(&v37, _ZN7uu_shuf7options11INPUT_RANGE17hc5e4b6a6169a5654E, g_4fa018);
        v63 = _ZN7uu_shuf7options11INPUT_RANGE17hc5e4b6a6169a5654E.unwrap(g_4fa018, &(char)v46);
        if (v63)
        {
            (char)v46.clone(v63);
            *((int128_t *)&v0) = *((int128_t *)&v46);
            v64 = (char)v49;
            v20 = *((int *)&v50);
            v21 = v51;
            if (v64 == 2)
                goto LABEL_45ef3f;
            *((int128_t *)&v14) = (int128_t)v0;
            v17 = v20;
            v18 = v21;
            v16 = v64;
            v13 = 2;
            v62 = 2;
        }
        else
        {
LABEL_45ef3f:
            v65 = _ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E;
            (char)v46.try_get_many(&v37, _ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E, g_4fa078);
            (char)v3.unwrap(_ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E, g_4fa078, &(char)v46);
            if (v2)
            {
                v66 = *((int128_t *)&v2);
                v57 = *((int128_t *)&v7);
                *((int128_t *)&v27) = *((int128_t *)&vvar_70{stack -1032});
                v25 = v10;
                v23 = v57;
                v20 = v66;
            }
            else
            {
                v20 = core::ops::function::FnOnce::call_once;
                v22 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
                v23 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
                v24 = 0;
                v26 = 0;
                v28 = 0;
            }
            v67 = (char)v20.next();
            if (v67)
            {
                (char)v46.clone(v67[1], v67[2]);
                v68 = v46;
                v69 = v47;
                v65 = (long long)v49;
            }
            else
            {
                v68 = 0x8000000000000000;
            }
            (char)v46.to_vec("-failed to open random source failed to open  for writing", 1);
            if (v68 == 0x8000000000000000)
            {
                v65 = (long long)v49;
                v45 = v46;
            }
            else
            {
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v46, v47);
                v47 = v69;
                v45 = v68;
            }
            v71 = v45;
            v72 = (char)v20.next();
            if (v72)
            {
                v0 = 1;
                v4 = v72[1];
                v6 = v72[2];
                v8 = 1;
                v33 = &v0;
                v34 = <os_display::Quoted as core::fmt::Display>::fmt;
                *((unsigned long long **)&v46) = &g_4f8fa0;
                v48 = 2;
                v53 = 0;
                v49 = &v33;
                v52 = 1;
                v43.map_or_else(&(unsigned long long)v46);
                v52 = 1;
                v46 = v43;
                v49 = v44;
                v4 = (unsigned long long)v46.new();
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v71, v47);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v37);
                return v4;
            }
            v14 = v71;
            v15 = v47;
            v16 = v65;
            v13 = 0;
            v62 = 0;
        }
    }
    v19 = v62;
    v46.try_get_many(&v37, _ZN7uu_shuf7options10HEAD_COUNT17hc89376d679544dccE, g_4fa028);
    (char)v3.unwrap(_ZN7uu_shuf7options10HEAD_COUNT17hc89376d679544dccE, g_4fa028, &v46);
    if (v2)
    {
        v73 = v4;
        v57 = *((int128_t *)&v7);
        v74 = v10;
        v75 = (&v11)[1];
        v3 = v2;
    }
    else
    {
        v74 = 0;
        v73 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v75 = 0;
        v3 = core::ops::function::FnOnce::call_once;
    }
    v45 = v3;
    v47 = v73;
    v49 = v57;
    *((uint128_t *)&v53) = v74;
    v54 = v77;
    v55 = v75;
    v78 = v45.reduce();
    v79 = g_4fa038;
    v45.try_get_one(&v37, _ZN7uu_shuf7options6OUTPUT17hffb8654906b4b6f3E, g_4fa038);
    v80 = _ZN7uu_shuf7options6OUTPUT17hffb8654906b4b6f3E.unwrap(g_4fa038, &v45);
    if (v80)
    {
        v45.clone(v80[1], v80[2]);
        v81 = v45;
        v36 = v47;
        v42 = (long long)v49;
    }
    else
    {
        v81 = 0x8000000000000000;
    }
    v45.try_get_one(&v37, _ZN7uu_shuf7options13RANDOM_SOURCE17h53a9ecde3a1f65d4E, g_4fa048);
    v82 = _ZN7uu_shuf7options13RANDOM_SOURCE17h53a9ecde3a1f65d4E.unwrap(g_4fa048, &v45);
    if (v82)
    {
        v45.clone(v82[1], v82[2]);
        v83 = v45;
        v35 = v47;
        v79 = (long long)v49;
    }
    else
    {
        v83 = 0x8000000000000000;
    }
    v84 = v37.get_flag(_ZN7uu_shuf7options6REPEAT17h176627c809f00ff4E, g_4fa058);
    v85 = ((char)v37.get_flag(_ZN7uu_shuf7options15ZERO_TERMINATED17h959e083b84248a6cE, g_4fa068) ? 0 : 10);
    v27 = -((v78 & 1) < 1) | v86;
    v20 = v81;
    v22 = v36;
    v23 = v42;
    v24 = v83;
    v25 = v35;
    v26 = v79;
    v28 = v84;
    v29 = v85;
    if (v81 == 0x8000000000000000)
    {
        v87 = v19;
        v88 = std::io::stdio::stdout().new();
        v89 = &g_4f9048;
    }
    else
    {
        v87 = v19;
        (char)v3.create(&(char)v20);
        (char)v33.map_err_context(&(char)v3, v22, v23);
        v4 = v33;
        if (v33)
        {
            v90 = 1;
            goto LABEL_45f7e7;
        }
        else
        {
            v88 = v34 & 4294967295.new();
            v89 = &g_4f90a0;
        }
    }
    v45.with_capacity(v88, v89);
    if (!v27)
    {
        v4 = 0;
        v90 = 1;
        goto LABEL_45f7da;
    }
    if (v24 == 0x8000000000000000)
    {
        v32 = rand::rngs::thread::rng();
        v30 = 1;
        if (!v87)
            goto LABEL_45f720;
        goto LABEL_45f5e1;
    }
    (char)v3.open(&v24);
    v33.map_err_context(&(char)v3, v25, v26);
    v4 = v33;
    if (v33)
    {
        v90 = 1;
        goto LABEL_45f7da;
    }
    v31 = v34;
    v30 = 0;
    if (v87)
    {
LABEL_45f5e1:
        if ((unsigned int)v87 == 1)
        {
            (char)v3.collect(v15, v15 + v16 * 24);
            v4 = uu_shuf::shuf_exec(&(char)v3, &(char)v20, &v30, &v45);
            if (v4)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v2, v4);
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&(char)v14);
                v90 = 1;
                goto LABEL_45f7cd;
            }
            else
            {
                core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v2, v4);
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&(char)v14);
            }
        }
        else
        {
            v6 = v16;
            *((int128_t *)&v0) = *((int128_t *)&v14);
            v4 = uu_shuf::shuf_exec(&(char)v3, &(char)v20, &v30, &v45);
            if (v4)
            {
                v90 = 1;
                goto LABEL_45f7cd;
            }
        }
    }
    else
    {
LABEL_45f720:
        uu_shuf::read_input_file(&(char)v3, v15, v16);
        if (v2 != 0x8000000000000000)
        {
            uu_shuf::split_seps(&(char)v3, v4, v7);
            v91 = uu_shuf::shuf_exec(&(char)v3, &(char)v20, &v30, &v45);
            if (v91)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v2, v4);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v2, v4);
                v4 = v91;
                goto LABEL_45f7b7;
            }
            else
            {
                core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v2, v4);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v2, v4);
                core::mem::drop(v14, v15);
            }
        }
        else
        {
LABEL_45f7b7:
            core::mem::drop(v14, v15);
            v87 = v19;
LABEL_45f7cd:
            core::ptr::drop_in_place<uu_shuf::WrappedRng>(&v30);
LABEL_45f7da:
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn uucore::mods::display::OsWrite>>>(&v45);
LABEL_45f7e7:
            core::ptr::drop_in_place<uu_shuf::Options>(&(char)v20);
            if ((unsigned int)v87 != 2)
            {
                if ((unsigned int)v87 == 1)
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&(char)v14);
                }
                else if (v90)
                {
                    core::mem::drop(v14, v15);
                }
            }
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v37);
            return v4;
        }
    }
    core::ptr::drop_in_place<uu_shuf::WrappedRng>(&v30);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn uucore::mods::display::OsWrite>>>(&v45);
    core::ptr::drop_in_place<uu_shuf::Options>(&(char)v20);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v37);
    return 0;
}
