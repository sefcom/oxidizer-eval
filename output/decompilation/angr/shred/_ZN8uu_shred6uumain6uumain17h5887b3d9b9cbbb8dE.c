long long uu_shred::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3f9]
    char v1;  // [bp-0x3f8]
    unsigned long long v2;  // [bp-0x3f0]
    void* v3;  // [bp-0x3e0], Other Possible Types: char, unsigned long long
    unsigned long v4;  // [bp-0x3d8], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x3d0], Other Possible Types: char, unsigned long, unsigned long long
    char v6;  // [bp-0x3c8], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x3c0], Other Possible Types: char
    char v8;  // [bp-0x3b0]
    char v9;  // [bp-0x3a0], Other Possible Types: unsigned long long
    struct_1 *v10;  // [bp-0x398], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x390]
    unsigned long long v12;  // [bp-0x388]
    char v13;  // [bp-0x380]
    char v14;  // [bp-0x370]
    unsigned long long v15;  // [bp-0x360]
    unsigned long long v16;  // [bp-0x350]
    char *v17;  // [bp-0x348]
    unsigned long long v18;  // [bp-0x340]
    char *v19;  // [bp-0x338]
    unsigned long long v20;  // [bp-0x330]
    char v21;  // [bp-0x328]
    int v22;  // [bp-0x310], Other Possible Types: char
    unsigned long long v23;  // [bp-0x300]
    int v24;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    int v25;  // [bp-0x2f8]
    unsigned long long v26;  // [bp-0x2f0]
    int v27;  // [bp-0x2f0]
    int v28;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    int v29;  // [bp-0x2e0], Other Possible Types: unsigned long long, unsigned int
    void* v30;  // [bp-0x2d8]
    char v31;  // [bp-0x2c8]
    unsigned long long v33[3];  // rax
    unsigned long long v34;  // rbx
    unsigned long long v35;  // r12
    unsigned long long v36[3];  // rax
    unsigned long long v37;  // rbx
    unsigned long long v38;  // r15
    char v39;  // al
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v42;  // rsi
    unsigned long long v43;  // r15
    char v44;  // al
    char v45;  // al
    int v46;  // xmm0
    unsigned long long v47[3];  // rax
    struct_1 *v48;  // rdx
    unsigned long long v49;  // rax

    uu_shred::uu_app(&v24);
    v3.try_get_matches_from(&v24, a0, a1);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v12.from();
    v15 = *((long long *)&v8);
    memcpy(&v14, &v7, 16);
    memcpy(&v13, &v5, 16);
    v11 = v3;
    v12 = v4;
    if ((char)v11.contains_id("filesizei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4))
    {
        v24.try_get_one(&v11, "iterationsuremoveforceexactverboseError flushing stdout: ", 10);
        v33 = "iterationsuremoveforceexactverboseError flushing stdout: ".unwrap(10, &v24);
        if (!v33)
            core::panicking::panic("internal error: entered unreachable code/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/ptr/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/exact_size.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 40, &g_4f91f8); /* do not return */
        ::0x45ad80::core::num::<impl usize>::from_ascii_radix(&v9, v33[1], v33[2]);
        if (v9)
        {
            v3 = 0;
            v4 = v33[1];
            v5 = v33[2];
            v6 = 1;
            v17 = &v3;
            v18 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v25) = &g_4f9120;
            v26 = 1;
            v30 = 0;
            v28 = &v17;
            v29 = 1;
            v22.map_or_else(&(unsigned long long)v25);
            v29 = 1;
            v25 = v22;
            v28 = v23;
            v34 = (unsigned long long)v25.new();
        }
        else
        {
            v16 = v10;
            v35 = &v24 & 0xffffffffffffff00 | 3;
            if (!(char)v11.get_flag("uremoveforceexactverboseError flushing stdout: ", 1))
            {
                if ((char)v11.contains_id("removeforceexactverboseError flushing stdout: ", 6))
                {
                    v24.try_get_one(&v11, "removeforceexactverboseError flushing stdout: ", 6);
                    v36 = "removeforceexactverboseError flushing stdout: ".unwrap(6, &v24);
                    if (!v36)
                    {
                        v24 = &g_4f9130;
                        v26 = 1;
                        v28 = &v1;
                        *((uint128_t *)&v29) = 0;
                        core::panicking::panic_fmt(&v24, &g_4f9210); /* do not return */
                    }
                    v37 = v36[1];
                    v38 = v36[2];
                    v35 = v35 & 0xffffffffffffff00 | 1;
                    if (!(char)v37.equal(v38, "unlinkinternal error: entered unreachable code: should be caught by clap", 6))
                    {
                        v35 = v35 & 0xffffffffffffff00 | 2;
                        if (!(char)v37.equal(v38, "wipe", 4))
                        {
                            v35 = v35 & 0xffffffffffffff00 | 3;
                            if (!(char)v37.equal(v38, "wipesync", 8))
                            {
                                v24 = &g_4f9130;
                                v26 = 1;
                                v28 = &v1;
                                *((uint128_t *)&v29) = 0;
                                core::panicking::panic_fmt(&v24, &g_4f9210); /* do not return */
                            }
                        }
                    }
                }
                else
                {
                    v35 = 0;
                }
            }
            v39 = v11.get_flag("forceexactverboseError flushing stdout: ", 5);
            v24.try_get_one(&v11, "sizei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
            v40 = "sizei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG".unwrap(4, &v24);
            if (v40)
            {
                v24.clone(v40);
                memcpy(&v21, &(char)v26, 16);
            }
            else
            {
                v41 = 0x8000000000000000;
            }
            v24 = v41;
            *((int128_t *)&v27) = *((int128_t *)&v21);
            v43 = uu_shred::get_size(&v24, v42);
            v44 = v11.get_flag("exactverboseError flushing stdout: ", 5);
            v0 = v11.get_flag("zeroAnsi -- ", 4);
            v45 = v11.get_flag("verboseError flushing stdout: ", 7);
            v24.try_get_many(&v11);
            v3.unwrap(&v24);
            if (!v3)
                core::option::unwrap_failed(&g_4f9228); /* do not return */
            v46 = *((int128_t *)&v3);
            memcpy(&v31, &v8, 16);
            memcpy(&v30, &v7, 16);
            *((int128_t *)&v28) = *((int128_t *)&v5);
            v25 = v46;
            while (true)
            {
                v47 = v24.next();
                if (!v47)
                    break;
                v49 = uu_shred::wipe_file(v47[1], v47[2], v16, v35 & 4294967295, v43, v48, v44 | v43 == 1, v0, v45, v39);
                if (!v49)
                {
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v48);
                }
                else
                {
                    v2 = v49;
                    uucore::mods::error::set_exit_code(v48->field_58(v49));
                    v9 = uucore::util_name();
                    v10 = v48;
                    v17 = &v9;
                    v18 = <&T as core::fmt::Display>::fmt;
                    v19 = &v2;
                    v20 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v3 = &g_4f9140;
                    v4 = 3;
                    v7 = 0;
                    v5 = &v17;
                    v6 = 2;
                    std::io::stdio::_eprint(&v3);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v2, v48);
                }
            }
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
            return 0;
        }
    }
    else
    {
        v3.to_vec("missing file operandinvalid number of passes: ", 20);
        v28 = v5;
        *((int128_t *)&v24) = *((int128_t *)&v3);
        v29 = 1;
        v34 = v24.new();
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
    return v34;
}
