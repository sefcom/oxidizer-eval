long long uu_readlink::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3fe]
    char v1;  // [bp-0x3fd]
    unsigned int v2;  // [bp-0x3fc]
    void* v3;  // [bp-0x3f8], Other Possible Types: int, char
    char v6;  // [bp-0x3f0]
    char *v7;  // [bp-0x3e8]
    unsigned long long v8;  // [bp-0x3e0]
    int v9;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x3d0]
    void* v11;  // [bp-0x3c0]
    int v12;  // [bp-0x3b8], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x3b0], Other Possible Types: unsigned long
    unsigned long long v15;  // [bp-0x3a8]
    unsigned long long v16;  // [bp-0x3a0]
    int v17;  // [bp-0x398]
    int v18;  // [bp-0x388]
    char v19;  // [bp-0x378]
    unsigned long long v20;  // [bp-0x360]
    unsigned long long v21;  // [bp-0x358]
    int v22;  // [bp-0x350]
    int v23;  // [bp-0x340]
    unsigned long long v24;  // [bp-0x330]
    int v25;  // [bp-0x328], Other Possible Types: char
    unsigned long long v26;  // [bp-0x318]
    int v27;  // [bp-0x310], Other Possible Types: char
    unsigned long long v28;  // [bp-0x300]
    int v29;  // [bp-0x2f8]
    int v32;  // [bp-0x2f8]
    unsigned long long v34;  // [bp-0x2f0]
    int v35;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    unsigned int v36;  // [bp-0x2e0]
    int v37;  // [bp-0x2d8]
    char v38;  // [bp-0x2c8]
    char v40;  // al
    unsigned long long v41;  // rax
    char v42;  // bpl
    char v43;  // r12b
    int v44;  // xmm0
    char v45;  // r15b
    unsigned long long v46;  // rdx
    unsigned long long v47[3];  // rax
    unsigned long long v48;  // r14
    unsigned long long v49[3];  // r14

    uu_readlink::uu_app(&(char)v29);
    (char)v15.try_get_matches_from(&(char)v29, a0, a1);
    if ((char)(((0 ^ v15) & (0 ^ -(v15))) >> 63))
        return v21.from();
    v24 = *((long long *)&v19);
    v23 = v18;
    v22 = v17;
    v20 = v15;
    v21 = v16;
    v40 = v20.get_flag("no-newline", 10);
    v1 = v20.get_flag("zeroAnsi -- ", 4);
    if (!(char)v20.get_flag("silentquietverbosecanonicalizecanonicalize-existingcanonicalize-missingfiles/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignor", 6))
        v20.get_flag("quietverbosecanonicalizecanonicalize-existingcanonicalize-missingfiles/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignoring-no", 5);
    v0 = v20.get_flag("verbosecanonicalizecanonicalize-existingcanonicalize-missingfiles/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignoring-no-newl", 7);
    v41 = v20.get_flag("canonicalizecanonicalize-existingcanonicalize-missingfiles/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignoring-no-newlinea Di", 12);
    if (!(char)v41)
    {
        v41 = v20.get_flag("canonicalize-existingcanonicalize-missingfiles/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignoring-no-newlinea Display implem", 21);
        if (!(!(v41 & 255)))
            goto LABEL_496b40;
        v41 = v20.get_flag("canonicalize-missingfiles/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignoring-no-newlinea Display implementation returned an ", 20);
        if (!(!(v41 & 255)))
            goto LABEL_496b40;
        v42 = 1;
        v2 = 0;
    }
    else
    {
LABEL_496b40:
        v2 = (unsigned int)v41 & 0xffffff00 | 2;
    }
    v43 = 1;
    if (!(char)v20.get_flag("canonicalize-existingcanonicalize-missingfiles/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignoring-no-newlinea Display implem", 21))
        v43 = (char)v20.get_flag("canonicalize-missingfiles/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignoring-no-newlinea Display implementation returned an ", 20) * 2;
    (char)v29.try_get_many(&v20, "files/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignoring-no-newlinea Display implementation returned an error unexpectedly/r", 5);
    (char)v15.unwrap("files/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsreadlink-error-missing-operandreadlink-error-ignoring-no-newlinea Display implementation returned an error unexpectedly/r", 5, &(char)v29);
    if (v15)
    {
        v44 = *((int128_t *)&v15);
        memcpy(&v38, &v19, 16);
        v37 = v18;
        v35 = v17;
        v29 = v44;
        v3.from_iter(&(char)v29, &g_5708b0);
        *((int128_t *)&v9) = *((int128_t *)&v6);
        if (v3 == 0x8000000000000000)
            goto LABEL_496c4b;
        *((int128_t *)&v12) = (int128_t)v9;
        v11 = v3;
        if (v13)
        {
            if (v40)
            {
                v45 = 11;
            }
            else
            {
            }
            v9 = v11.into_iter();
            v10 = v46;
            v47 = v9.next();
            if (v47)
            {
                v49 = v47;
                if (v42)
                {
                    do
                    {
                        (char)v29.to_owned(v49[1], v49[2]);
                        *((int128_t *)&v3) = (int128_t)v32;
                        v7 = v35;
                        std::fs::read_link(&(char)v15, &v3);
                        if (v15 == 0x8000000000000000)
                            goto LABEL_497030;
                        *((int128_t *)&v32) = *((int128_t *)&v15);
                        v35 = (long long)v17;
                        if (!(!uu_readlink::show(v34, (long long)v17, v45).map_err_context()))
                            goto LABEL_4970b0;
                        ::0x4973a0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v29);
                        ::0x4973a0::core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                        v49 = v9.next();
                    } while (v49);
                }
                else
                {
                    do
                    {
                        (char)v29.to_owned(v49[1], v49[2]);
                        *((int128_t *)&v3) = (int128_t)v32;
                        v7 = v35;
                        uucore::features::fs::canonicalize(&(char)v15, &v3, v43);
                        if (v15 == 0x8000000000000000)
                        {
LABEL_497030:
                            if (v0)
                            {
                                v8 = v16.map_err_context(v49);
                                v27.spec_to_string(&v8);
                                v36 = 1;
                                v29 = v27;
                                v35 = v28;
                                v48 = (char)v29.new();
                                core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v8);
                                goto LABEL_4970db;
                            }
                            else
                            {
                                v48 = 1.from();
                                ::0x4973c0::core::ptr::drop_in_place<std::io::error::Error>(v16);
                            }
                        }
                        *((int128_t *)&v32) = *((int128_t *)&v15);
                        v35 = (long long)v17;
                        v48 = uu_readlink::show(v34, (long long)v17, v45).map_err_context();
                        if (v48)
                        {
LABEL_4970b0:
                            ::0x4973a0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v29);
LABEL_4970db:
                            ::0x4973a0::core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                            ::0x4974b0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v11);
                            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
                            return v48;
                        }
                        ::0x4973a0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v29);
                        ::0x4973a0::core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                        v49 = v9.next();
                    } while (v49);
                }
            }
            ::0x4974b0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v11);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
            return 0;
        }
    }
    else
    {
LABEL_496c4b:
        v11 = 0;
        v12 = 8;
        v13 = 0;
    }
    uucore::mods::locale::get_message(&v25, "readlink-error-missing-operandreadlink-error-ignoring-no-newlinea Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 30);
    v36 = 1;
    v29 = v25;
    v35 = v26;
    v48 = (char)v29.new();
    ::0x4974b0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
    return v48;
}
