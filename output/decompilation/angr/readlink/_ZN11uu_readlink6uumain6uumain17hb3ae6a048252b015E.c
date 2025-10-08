long long uu_readlink::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x411]
    unsigned int v1;  // [bp-0x410]
    char v2;  // [bp-0x40c], Other Possible Types: unsigned int
    int v4;  // [bp-0x408]
    unsigned long long v6;  // [bp-0x400]
    unsigned long long v7;  // [bp-0x3f8]
    void* v8;  // [bp-0x3f0]
    int v9;  // [bp-0x3e8], Other Possible Types: unsigned long long [3], unsigned long long
    void* v10;  // [bp-0x3e0], Other Possible Types: unsigned long
    int v11;  // [bp-0x3d8]
    unsigned long long v12;  // [bp-0x3d8]
    unsigned long long v13;  // [bp-0x3d0]
    int v14;  // [bp-0x3c8]
    char v15;  // [bp-0x3b8]
    unsigned long long v16;  // [bp-0x3a8]
    unsigned long long v17;  // [bp-0x3a0]
    unsigned long long v18;  // [bp-0x398]
    int v19;  // [bp-0x390]
    char v20;  // [bp-0x380]
    unsigned long long v21;  // [bp-0x370]
    unsigned long long v22;  // [bp-0x368]
    int v24;  // [bp-0x350], Other Possible Types: char
    unsigned long long v25;  // [bp-0x340]
    char v26;  // [bp-0x338]
    void* v27;  // [bp-0x2f8], Other Possible Types: int
    unsigned long long v29;  // [bp-0x2f8]
    char v30;  // [bp-0x2f0]
    unsigned long long v31;  // [bp-0x2e8]
    unsigned long long v32;  // [bp-0x2e8]
    unsigned int v33;  // [bp-0x2e0]
    char v36;  // al
    char v37;  // al
    unsigned long long v38;  // rax
    char v39;  // r15b
    char v40;  // r13b
    char v41;  // al
    unsigned long long v43[3];  // rbp
    unsigned long long v44;  // rbx
    unsigned long long v45;  // r13
    unsigned long long v46;  // r13
    unsigned long long v47;  // r15
    unsigned long long v48;  // r12
    unsigned long long v49;  // r14
    unsigned long long v51;  // rbx
    unsigned long long v52;  // rbx
    unsigned long long v54;  // rax

    uu_readlink::uu_app(&(char)v27);
    (char)v12.try_get_matches_from(&(char)v27, a0, a1);
    if ((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63))
        return v18.from();
    v21 = v16;
    memcpy(&v20, &v15, 16);
    v19 = v14;
    v17 = v12;
    v18 = v13;
    v36 = v17.get_flag("no-newline", 10);
    v2 = v17.get_flag("zeroAnsi -- ", 4);
    if (!(char)v17.get_flag("silentquietverbosecanonicalizecanonicalize-existingcanonicalize-missingfiles/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/regi", 6))
        v17.get_flag("quietverbosecanonicalizecanonicalize-existingcanonicalize-missingfiles/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/s", 5);
    v37 = v17.get_flag("verbosecanonicalizecanonicalize-existingcanonicalize-missingfiles/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/in", 7);
    v38 = v17.get_flag("canonicalizecanonicalize-existingcanonicalize-missingfiles/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.cra", 12);
    if (!(char)v38)
    {
        v38 = v17.get_flag("canonicalize-existingcanonicalize-missingfiles/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949c", 21);
        if ((v38 & 255))
            goto LABEL_45408f;
        v38 = v17.get_flag("canonicalize-missingfiles/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_buil", 20);
        if ((v38 & 255))
            goto LABEL_45408f;
        v39 = 1;
        v1 = 0;
    }
    else
    {
LABEL_45408f:
        v1 = (unsigned int)v38 & 0xffffff00 | 2;
    }
    v40 = 1;
    if (!(char)v17.get_flag("canonicalize-existingcanonicalize-missingfiles/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949c", 21))
        v40 = (char)v17.get_flag("canonicalize-missingfiles/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_buil", 20) * 2;
    (char)v27.try_get_many(&v17);
    v26.unwrap(&(char)v27);
    if (!*((long long *)&v26))
    {
LABEL_454142:
        v8 = 0;
        v9 = 8;
        v10 = 0;
        goto LABEL_45415d;
    }
    (char)v27.collect(&v26);
    *((int128_t *)&v11) = *((int128_t *)&v30);
    if (v27 == 0x8000000000000000)
        goto LABEL_454142;
    v0 = v37;
    *((int128_t *)&v9) = (int128_t)v11;
    v8 = v27;
    if (!v10)
    {
LABEL_45415d:
        (char)v12.to_vec("missing operandignoring --no-newline with multiple arguments\n", 15);
        v31 = (long long)v14;
        *((int128_t *)&v27) = (int128_t)v11;
        v33 = 1;
        (char)v27.new();
        goto LABEL_0x4541af;
    }
    if (v36)
    {
        v41 = 11;
    }
    else
    {
    }
    v43 = v9;
    v44 = v10 * 8;
    if (v39)
    {
        v45 = v44 * 3;
        while (true)
        {
            v46 = v45;
            (char)v27.to_vec(v43[1], v43[2]);
            *((int128_t *)&v4) = *((int128_t *)&v29);
            v7 = v32;
            std::fs::read_link(&(char)v12, &(char)v4);
            v47 = v12;
            if (v12 == 0x8000000000000000)
                goto LABEL_4544a8;
            v48 = v13;
            if (uu_readlink::show(v48, (long long)v14, v41).map_err_context())
                break;
            core::mem::drop(v12, v48);
            core::mem::drop((long long)v4, v6);
            v43 += 1;
            v45 = v46 - 24;
            if (!v46 - 24)
                goto LABEL_45448c;
        }
LABEL_45452c:
        core::mem::drop(v47, v48);
    }
    else
    {
        v51 = v44 * 3;
        v2 = v40;
        v1 = v41;
        while (true)
        {
            v52 = v51;
            (char)v27.to_vec(v43[1], v43[2]);
            *((int128_t *)&v4) = *((int128_t *)&v29);
            v7 = v32;
            uucore::features::fs::canonicalize(&(char)v12, &(char)v4, v2);
            v47 = v12;
            if (v12 == 0x8000000000000000)
                break;
            v48 = v13;
            if (uu_readlink::show(v48, (long long)v14, v1).map_err_context())
                goto LABEL_45452c;
            core::mem::drop(v12, v48);
            core::mem::drop((long long)v4, v6);
            v43 += 1;
            v51 = v52 - 24;
            if (v52 == 24)
            {
LABEL_45448c:
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v8);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
                return 0;
            }
        }
LABEL_4544a8:
        v22 = v13;
        if (v0)
        {
            v54 = v13.map_err_context(v43[1], v43[2]);
            v24.spec_to_string(v54);
            v33 = 1;
            v27 = v24;
            v31 = v25;
            v49 = (char)v27.new();
            core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v54);
        }
        else
        {
            v49 = 1.from();
            core::ptr::drop_in_place<std::io::error::Error>(&v22);
        }
    }
    core::mem::drop((long long)v4, v6);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v8);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
    return v49;
}
