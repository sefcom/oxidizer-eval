long long uu_dd::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x528], Other Possible Types: char, unsigned int, unsigned long
    unsigned int v1;  // [bp-0x525]
    unsigned long long v2;  // [bp-0x520]
    int v3;  // [bp-0x518], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x510]
    int v5;  // [bp-0x508]
    void* v6;  // [bp-0x500]
    int v7;  // [bp-0x4f8]
    void* v8;  // [bp-0x4f0]
    unsigned long long v9;  // [bp-0x4d8]
    int v10;  // [bp-0x4d0]
    unsigned long v11;  // [bp-0x4c8]
    int v12;  // [bp-0x4c0]
    unsigned long long v13;  // [bp-0x4b8]
    int v14;  // [bp-0x4b0]
    unsigned long long v15;  // [bp-0x4a8]
    int v16;  // [bp-0x4a0]
    int v17;  // [bp-0x490]
    int v18;  // [bp-0x480]
    char v19;  // [bp-0x470]
    int v20;  // [bp-0x460]
    char v21;  // [bp-0x450]
    int v22;  // [bp-0x440]
    unsigned long long v23;  // [bp-0x430]
    unsigned long long v24;  // [bp-0x428]
    char v25;  // [bp-0x420]
    char v26;  // [bp-0x410]
    unsigned long long v27;  // [bp-0x400]
    int v28;  // [bp-0x3f8], Other Possible Types: char
    int v29;  // [bp-0x3e8], Other Possible Types: char
    char v30;  // [bp-0x3d0], Other Possible Types: unsigned long long
    void* v31;  // [bp-0x3c8], Other Possible Types: unsigned long long
    char v32;  // [bp-0x3c0]
    char v33;  // [bp-0x3b8]
    char v34;  // [bp-0x3b0]
    char v35;  // [bp-0x3a8]
    unsigned long long v36;  // [bp-0x3a0]
    int v37;  // [bp-0x398]
    int v38;  // [bp-0x388]
    int v39;  // [bp-0x378]
    char v40;  // [bp-0x368]
    int v41;  // [bp-0x358]
    char v42;  // [bp-0x348]
    int v43;  // [bp-0x338]
    int v44;  // [bp-0x328], Other Possible Types: char
    int v45;  // [bp-0x318]
    int v46;  // [bp-0x308]
    int v47;  // [bp-0x2f8]
    void* v48;  // [bp-0x2e8], Other Possible Types: char
    char v49;  // [bp-0x2e8]
    unsigned int v50;  // [bp-0x2e7]
    unsigned int v51;  // [bp-0x2e4]
    int v52;  // [bp-0x2e0], Other Possible Types: char
    void* v53;  // [bp-0x2d8]
    void* v54;  // [bp-0x2c8]
    void* v55;  // [bp-0x2b8]
    uint128_t v56;  // [bp-0x2a8]
    uint128_t v57;  // [bp-0x298]
    unsigned long long v58;  // [bp-0x288]
    unsigned long long v59;  // [bp-0x278]
    unsigned long long v60;  // [bp-0x260]
    uint128_t v61;  // [bp-0x248]
    uint128_t v62;  // [bp-0x238]
    uint128_t v63;  // [bp-0x228]
    char v64;  // [bp-0x218]
    unsigned long long v66;  // rdi
    unsigned long long v67;  // r15
    unsigned long long v68;  // r14
    unsigned long long v69;  // r15
    int v70;  // xmm0
    unsigned long long v71;  // r15

    uu_dd::uu_app(&(char)v48);
    v30.try_get_matches_from(&(char)v48, a0, a1);
    v66 = v31;
    if ((char)(((0 ^ v30) & (0 ^ -(v30))) >> 63))
        return v24.from();
    v27 = v36;
    memcpy(&v26, &v34, 16);
    memcpy(&v25, &v32, 16);
    v23 = v30;
    v24 = v31;
    v59 = 0x8000000000000000;
    v60 = 0x8000000000000000;
    v48 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 2;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 3;
    v0.try_get_many(&v23);
    v44.unwrap(&v0);
    if (*((long long *)&v44))
    {
        v7 = v47;
        v5 = v46;
        v3 = v45;
        v0 = v44;
    }
    else
    {
        v0 = core::ops::function::FnOnce::call_once;
        v2 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v3 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v4 = 0;
        v6 = 0;
        v8 = 0;
    }
    v30.parse(&(char)v48, &v0);
    memcpy(&v28, &v31, 16);
    memcpy(&v29, &v33, 16);
    if (v30 == 3)
    {
        v67 = v28.new();
    }
    else
    {
        v22 = v43;
        memcpy(&v21, &v42, 16);
        v20 = v41;
        memcpy(&v19, &v40, 16);
        v18 = v39;
        v17 = v38;
        v16 = v37;
        *((int128_t *)&v14) = *((int128_t *)&v35);
        v10 = v28;
        v12 = v29;
        v9 = v30;
        if (v11 == 0x8000000000000000)
        {
            (char)v48.new_stdin(&v9);
        }
        else if ((char)uu_dd::is_fifo((long long)v12, v13))
        {
            (char)v48.new_fifo((long long)v12, v13, &v9);
        }
        else
        {
            (char)v48.new_file((long long)v12, v13, &v9);
        }
        v68 = *((long long *)&v52);
        v67 = v68;
        if (!(v48 & 1))
        {
            if ((long long)v14 == 0x8000000000000000)
            {
                if ((char)uu_dd::is_stdout_redirected_to_seekable_file())
                    (char)v48.new_file_from_stdout(&v9);
                else
                    (char)v48.new_stdout(&v9);
            }
            else
            {
                if ((char)uu_dd::is_fifo(v15, (long long)v16))
                    (char)v48.new_fifo(v15, (long long)v16, &v9);
                else
                    (char)v48.new_file(v15, (long long)v16, &v9);
            }
            if (v48 != 4)
            {
                v1 = v51;
                v0 = *((int *)((char *)&v48 + 1));
                v70 = *((int128_t *)&v52);
                v30 = v68;
                v31 = 0;
                v49 = v48;
                v50 = v0;
                v51 = v1;
                v52 = v70;
                v71 = uu_dd::dd_copy(&v30, &v49).map_err_context();
                core::ptr::drop_in_place<uu_dd::Settings>(&v9);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
                return v71;
            }
            v69 = *((long long *)&v52);
            core::ptr::drop_in_place<uu_dd::Input>(v68 >> 32);
            v67 = v69;
        }
        core::ptr::drop_in_place<uu_dd::Settings>(&v9);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
    return v67;
}
