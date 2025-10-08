long long uu_sync::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3c8]
    int v1;  // [bp-0x3c0], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x3b8]
    unsigned long long v3;  // [bp-0x3b0]
    unsigned long long v4;  // [bp-0x3a8]
    int v5;  // [bp-0x3a0]
    char v6;  // [bp-0x390]
    unsigned long long v7;  // [bp-0x380]
    int v8;  // [bp-0x378], Other Possible Types: char
    unsigned long long v9;  // [bp-0x370]
    int v10;  // [bp-0x368]
    char v11;  // [bp-0x358]
    char v12;  // [bp-0x348]
    char v13;  // [bp-0x338]
    int v14;  // [bp-0x2f8], Other Possible Types: char
    char v15;  // [bp-0x2f0]
    void* v16;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v17;  // [bp-0x2e0]
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbx
    void* v21;  // rbp
    unsigned int v22;  // edx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax

    uu_sync::uu_app(&v14);
    (char)v8.try_get_matches_from(&v14, a0, a1);
    if ((char)(((0 ^ *((long long *)&v8)) & (0 ^ -(*((long long *)&v8)))) >> 63))
        return v4.from();
    v7 = *((long long *)&v12);
    memcpy(&v6, &v11, 16);
    v5 = v10;
    v3 = *((long long *)&v8);
    v4 = v9;
    v14.try_get_many(&v3, _ZN7uu_sync9ARG_FILES17h8f9deb3d73e42b94E, g_4de578);
    v13.unwrap(_ZN7uu_sync9ARG_FILES17h8f9deb3d73e42b94E, g_4de578, &v14);
    if (*((long long *)&v13))
    {
        v14.collect(&v13);
        v19 = *((long long *)&v14);
        *((int128_t *)&v8) = *((int128_t *)&v15);
        if (v19 == 0x8000000000000000)
            goto LABEL_453348;
        *((int128_t *)&v1) = (int128_t)v8;
        v0 = v19;
    }
    else
    {
LABEL_453348:
        v0 = 0;
        v1 = 8;
        v2 = 0;
    }
    if ((char)v3.get_flag(_ZN7uu_sync7options4DATA17hd37ca9d5acec4f06E, g_4de568))
    {
        if (v2)
            goto LABEL_4533f2;
        (char)v8.to_vec("--data needs at least one argumenterror opening /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 34);
        v16 = (long long)v10;
        *((int128_t *)&v14) = (int128_t)v8;
        v17 = 1;
        v20 = v14.new();
        goto LABEL_453464;
    }
    if (!v2)
        goto LABEL_453471;
LABEL_4533f2:
    v21 = 0;
    do
    {
        if (((char)nix::fcntl::open(*((long long *)(8 + v1 + (char *)v21)), *((long long *)(16 + v1 + (char *)v21))) & 1) && (v22 != 13 || (char)*((long long *)(8 + v1 + (char *)v21)).is_dir(*((long long *)(16 + v1 + (char *)v21)))))
        {
            v20 = v22.map_err_context(*((long long *)(8 + v1 + (char *)v21)), *((long long *)(16 + v1 + (char *)v21)));
            goto LABEL_453464;
        }
        v21 += 24;
    } while (v2 * 24 != v21);
LABEL_453471:
    if ((char)v3.get_flag(_ZN7uu_sync7options11FILE_SYSTEM17h935b9c99356008ffE, g_4de558))
    {
        v16 = v2;
        *((int128_t *)&v14) = *((int128_t *)&v0);
        v23 = uu_sync::syncfs(&v14);
        goto LABEL_4534fb;
    }
    else
    {
        if ((char)v3.get_flag(_ZN7uu_sync7options4DATA17hd37ca9d5acec4f06E, g_4de568))
        {
            v16 = v2;
            *((int128_t *)&v14) = *((int128_t *)&v0);
            v23 = uu_sync::fdatasync(&v14);
LABEL_4534fb:
            if (!v23)
            {
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
                return 0;
            }
            v20 = v23;
        }
        else
        {
            v24 = uu_sync::sync();
            if (!v24)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
                return 0;
            }
            v20 = v24;
LABEL_453464:
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
        return v20;
    }
}
