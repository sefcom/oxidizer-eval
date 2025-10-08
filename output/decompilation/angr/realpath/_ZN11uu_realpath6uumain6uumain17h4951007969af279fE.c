long long uu_realpath::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x3ec]
    unsigned long long v1;  // [bp-0x3e8]
    unsigned long long v2;  // [bp-0x3e0]
    unsigned long long v3;  // [bp-0x3d8]
    void* v4;  // [bp-0x3d0]
    unsigned int v5;  // [bp-0x3c4]
    unsigned long long v6;  // [bp-0x3c0]
    unsigned long long v7;  // [bp-0x3b8]
    void* v8;  // [bp-0x3b0]
    unsigned long long v9;  // [bp-0x3a8]
    unsigned long long v10;  // [bp-0x3a0]
    unsigned long long v11;  // [bp-0x398]
    unsigned long long v12;  // [bp-0x390]
    unsigned int v13;  // [bp-0x388]
    char v14;  // [bp-0x384]
    char v15;  // [bp-0x374]
    unsigned int v16;  // [bp-0x364]
    char *v17;  // [bp-0x360], Other Possible Types: char, unsigned long long
    unsigned long long v18;  // [bp-0x358]
    char *v19;  // [bp-0x350], Other Possible Types: char
    char v20;  // [bp-0x34c]
    unsigned long long v21;  // [bp-0x348]
    char v22;  // [bp-0x340]
    char v23;  // [bp-0x33c]
    char v24;  // [bp-0x330]
    char v25;  // [bp-0x32c]
    char v26;  // [bp-0x320]
    unsigned long long v27;  // [bp-0x318]
    unsigned long v28;  // [bp-0x310]
    unsigned long long v29;  // [bp-0x308]
    unsigned long long v30;  // [bp-0x300]
    int v31;  // [bp-0x2f8], Other Possible Types: unsigned long long
    void* v32;  // [bp-0x2f0], Other Possible Types: unsigned long long
    int v33;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    unsigned long long v34;  // [bp-0x2e0]
    int v35;  // [bp-0x2d8], Other Possible Types: void*, unsigned long long
    char v36;  // [bp-0x2c8]
    int v38;  // xmm0
    int v39;  // xmm1
    char v40;  // al
    unsigned int v41;  // r13d
    char v42;  // al
    char v43;  // al
    char v44;  // al
    unsigned int v45;  // r15d
    unsigned long long v46;  // rbp
    unsigned int v47;  // edi
    unsigned long long v48;  // r13
    void* v50;  // rsi
    unsigned long long v52;  // r14
    void* v53;  // r12
    void* v55;  // rbx
    unsigned long long v56;  // rax
    unsigned long long v57;  // rax
    unsigned long long v59;  // rdx

    uu_realpath::uu_app(&(char)v31);
    v17.try_get_matches_from(&(char)v31, a0, a1);
    if ((char)(((0 ^ v17) & (0 ^ -(v17))) >> 63))
        return v12.new(1);
    memcpy(&v14, &v20, 16);
    memcpy(&v15, &v23, 16);
    v16 = *((int *)&v25);
    v11 = v17;
    v12 = v18;
    v13 = *((int *)&v19);
    (char)v31.try_get_many(&v11, _ZN11uu_realpath9ARG_FILES17hb7f3293541c84ef7E, g_4eced8);
    v17.unwrap(_ZN11uu_realpath9ARG_FILES17hb7f3293541c84ef7E, g_4eced8, &(char)v31);
    if (!v17)
        core::option::unwrap_failed(&g_4eb9e0); /* do not return */
    v38 = *((int128_t *)&v17);
    v39 = *((int128_t *)&v19);
    memcpy(&v36, &v24, 16);
    *((int128_t *)&v35) = *((int128_t *)&v22);
    v33 = v39;
    v31 = v38;
    v26.collect(&(char)v31);
    v40 = v11.get_flag(_ZN11uu_realpath9OPT_STRIP17hea98d883e06261d4E, g_4ecea8);
    v41 = ((char)v11.get_flag(_ZN11uu_realpath8OPT_ZERO17h541106c6f648941bE, g_4eceb8) ? 0 : 10);
    v42 = v11.get_flag(_ZN11uu_realpath9OPT_QUIET17h2de9e0ed8df49daeE, g_4ece98);
    v43 = v11.get_flag(_ZN11uu_realpath11OPT_LOGICAL17he80554cf4834d4bbE, g_4ecec8);
    v44 = 1;
    if (!(char)v11.get_flag("canonicalize-existingcanonicalize-missing/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b", 21))
        v44 = (char)v11.get_flag("canonicalize-missing/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/error.rs", 20) * 2;
    v45 = (!v40 ? v43 + 1 : 0);
    v0 = v44;
    uu_realpath::prepare_relative_options(&(char)v31, &v11, v44, v45);
    v46 = v33;
    if (v31 == 9223372036854775809)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v26);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
        return v4;
    }
    v3 = v31;
    v4 = v32;
    v1 = v34;
    v2 = v35;
    if (v28)
    {
        v47 = v41;
        v10 = (long long)(&v35)[8];
        v48 = v27;
        if (v3 == 0x8000000000000000)
            v50 = 0;
        else
            v50 = v4;
        v8 = v50;
        *((int *)&v9) = (v1 != 0x8000000000000000 ? v2 : 0);
        v52 = v28 * 24;
        if (v42)
        {
            v53 = 0;
            do
            {
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(uu_realpath::resolve_path(*((long long *)(8 + v48 + (char *)v53)), *((long long *)(16 + v48 + (char *)v53)), v47, v45, v0, v8, v46, v9, v10));
                v53 += 24;
            } while (v52 != v53);
        }
        else
        {
            v55 = 0;
            v5 = v47;
            do
            {
                v56 = uu_realpath::resolve_path(*((long long *)(8 + v48 + (char *)v55)), *((long long *)(16 + v48 + (char *)v55)), v5, v45, v0, v8, v46, v9, v10);
                v57 = v56.map_err_context(*((long long *)(8 + v48 + (char *)v55)), *((long long *)(16 + v48 + (char *)v55)));
                if (!v57)
                {
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, &g_4ebb08);
                }
                else
                {
                    v6 = v57;
                    v7 = &g_4ebb08;
                    uucore::mods::error::set_exit_code((unsigned int)uucore::mods::error::UError::code());
                    v29 = uucore::util_name();
                    v30 = v59;
                    v17 = &v29;
                    v18 = <&T as core::fmt::Display>::fmt;
                    v19 = &v6;
                    v21 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v31 = &g_4eb9b0;
                    v32 = 3;
                    v35 = 0;
                    v33 = &v17;
                    v34 = 2;
                    std::io::stdio::_eprint(&v31);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v6, &g_4ebb08);
                }
                v55 += 24;
            } while (v52 != v55);
        }
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v1, v2);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v3, v4);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v26);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
    return 0;
}
