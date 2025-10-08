long long uu_runcon::parse_command_line(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x2f8], Other Possible Types: char, unsigned long
    unsigned long long v1;  // [bp-0x2f8]
    unsigned long long v2;  // [bp-0x2e8]
    char v3;  // [bp-0x2d8], Other Possible Types: unsigned long long
    int v4;  // [bp-0x2d8]
    unsigned long long v5;  // [bp-0x2c8]
    int v6;  // [bp-0x2b8], Other Possible Types: char, unsigned int
    unsigned long long v7;  // [bp-0x2b0]
    unsigned long long v8;  // [bp-0x2a8]
    char v9;  // [bp-0x2a8]
    int v10;  // [bp-0x2a0]
    char v11;  // [bp-0x294]
    int v12;  // [bp-0x290]
    unsigned int v13;  // [bp-0x284]
    int v14;  // [bp-0x280]
    char v15;  // [bp-0x270]
    char v16;  // [bp-0x260]
    char v17;  // [bp-0x250]
    char v18;  // [bp-0x240]
    char v19;  // [bp-0x230]
    int v20;  // [bp-0x218], Other Possible Types: unsigned long long
    int v21;  // [bp-0x215]
    unsigned long long v22;  // [bp-0x208]
    unsigned long long v23;  // [bp-0x200]
    unsigned long long v24;  // [bp-0x1f8]
    unsigned int v25;  // [bp-0x1f0]
    char v26;  // [bp-0x1ec]
    char v27;  // [bp-0x1dc]
    unsigned int v28;  // [bp-0x1cc]
    int v29;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0x1c8]
    unsigned long long v31;  // [bp-0x1c8]
    int v32;  // [bp-0x1c0], Other Possible Types: char
    int v33;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v34;  // [bp-0x1b8]
    int v35;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v36;  // [bp-0x198]
    unsigned long long v37;  // [bp-0x198]
    unsigned long long v38;  // [bp-0x188]
    unsigned long long v39;  // [bp-0x180]
    unsigned long long v40;  // [bp-0x178]
    unsigned long long v41;  // [bp-0x170]
    unsigned long long v42;  // [bp-0x168]
    char v43;  // [bp-0x160]
    char v44;  // [bp-0x158]
    char v45;  // [bp-0x150]
    unsigned int v46;  // [bp-0x14f]
    unsigned int v47;  // [bp-0x14c]
    unsigned long long v48;  // [bp-0x148]
    unsigned long long v49;  // [bp-0x140]
    int v50;  // [bp-0x138]
    int v51;  // [bp-0x128]
    unsigned long long v52;  // [bp-0x118]
    void* v53;  // [bp-0x110]
    char v54;  // [bp-0x108], Other Possible Types: unsigned long long
    int v55;  // [bp-0x108]
    unsigned long long v56;  // [bp-0xf8]
    int v57;  // [bp-0xe8]
    unsigned long long v58;  // [bp-0xd8]
    char v59;  // [bp-0xd0]
    char v60;  // [bp-0xc8]
    unsigned long long v61;  // [bp-0xc0]
    int v62;  // [bp-0xb8]
    unsigned long long v63;  // [bp-0xa8]
    char v64;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v65;  // [bp-0x98]
    unsigned long long v66;  // [bp-0x90]
    int v67;  // [bp-0x88]
    unsigned long long v68;  // [sp-0x78]
    char v69;  // [bp-0x70]
    int v70;  // [sp-0x60]
    int v71;  // [sp-0x50]
    char v72;  // [bp-0x40]
    char v73;  // [bp-0x28]
    unsigned long long v75;  // r14
    char v76;  // bpl
    unsigned long long v77;  // rcx
    uint128_t v78;  // xmm0
    void* v79;  // rdx
    unsigned long long v80[3];  // rax
    unsigned long long v81[3];  // rax
    unsigned long v82;  // rax
    unsigned long long v83[3];  // rax
    unsigned long long v84[3];  // rax
    unsigned long long v85[3];  // rax
    unsigned long long v86[3];  // rax
    unsigned long long v87[3];  // rax
    unsigned int v88;  // ecx
    int v89;  // xmm0

    v75 = 0x8000000000000000;
    v6.try_get_matches_from(a1, a2, a3);
    if ((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63))
    {
        a0->field_8 = v24.new(125);
        a0->field_10 = &g_4eace8;
        a0->field_0 = 0x8000000000000000;
        return &g_4eace8;
    }
    memcpy(&v26, &v9, 16);
    memcpy(&v27, &v11, 16);
    v28 = v13;
    v23 = *((long long *)&v6);
    v24 = v7;
    v25 = *((int *)&v9);
    v76 = v23.get_flag("computeARGrange: \nTry ' --help' for more information.\n", 7);
    v6.try_get_many(&v23);
    (char)v29.unwrap(&v6);
    if (v30)
    {
        v77 = *((long long *)&v32);
        v37 = v36;
    }
    else
    {
        v78 = 0;
        v77 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v30 = core::ops::function::FnOnce::call_once;
        v79 = 0;
    }
    v48 = v30;
    v49 = v77;
    v50 = v33;
    *((uint128_t *)&v51) = v78;
    v52 = v36;
    v53 = v79;
    if (v76 || (char)v23.contains_id("userSomedumb", 4) || (char)v23.contains_id("role) = Zero", 4) || (char)v23.contains_id("type    TYPE\"`$\\EADV", 4) || (char)v23.contains_id("range: \nTry ' --help' for more information.\n", 5))
    {
        v6.try_get_one(&v23, "userSomedumb", 4);
        v83 = "userSomedumb".unwrap(4, &v6);
        if (v83)
        {
            v6.to_vec(v83[1], v83[2]);
            v56 = *((long long *)&v9);
            memcpy(&v54, &v6, 16);
        }
        else
        {
            v54 = 0x8000000000000000;
        }
        v6.try_get_one(&v23, "role) = Zero", 4);
        v84 = "role) = Zero".unwrap(4, &v6);
        if (v84)
        {
            v6.to_vec(v84[1], v84[2]);
            v22 = *((long long *)&v9);
            *((int128_t *)&v20) = *((int128_t *)&v6);
        }
        else
        {
            v20 = 0x8000000000000000;
        }
        v6.try_get_one(&v23, "type    TYPE\"`$\\EADV", 4);
        v85 = "type    TYPE\"`$\\EADV".unwrap(4, &v6);
        if (v85)
        {
            v6.to_vec(v85[1], v85[2]);
            v5 = *((long long *)&v9);
            memcpy(&v3, &v6, 16);
        }
        else
        {
            v3 = 0x8000000000000000;
        }
        v6.try_get_one(&v23, "range: \nTry ' --help' for more information.\n", 5);
        v86 = "range: \nTry ' --help' for more information.\n".unwrap(5, &v6);
        if (v86)
        {
            v6.to_vec(v86[1], v86[2]);
            v33 = *((long long *)&v9);
            *((int128_t *)&v29) = *((int128_t *)&v6);
        }
        else
        {
            v31 = 0x8000000000000000;
        }
        v87 = v48.next();
        if (v87)
        {
            v6.to_vec(v87[1], v87[2]);
            v75 = *((long long *)&v6);
            memcpy(&v73, &v7, 16);
        }
        v58 = v56;
        v57 = v55;
        memcpy(&v59, &(char)v20, 16);
        v61 = v22;
        v62 = v4;
        v63 = v5;
        memcpy(&v64, &(char)v29, 16);
        v66 = v33;
        v40 = v65;
        v41 = v66;
        v38 = v63;
        v39 = v64;
        memcpy(&v37, &v62, 16);
        memcpy(&v35, &v60, 16);
        memcpy(&v33, &v58, 16);
        v29 = v57;
        v42 = v75;
        memcpy(&v43, &v73, 16);
        v45 = v76;
        v88 = (int)v21;
        v46 = (int)v20;
        v47 = v88;
        v4.collect(&v48);
        memcpy(&v19, &v44, 16);
        memcpy(&v18, &v42, 16);
        memcpy(&v17, &v40, 16);
        memcpy(&v16, &v38, 16);
        v89 = (int128_t)v29;
        memcpy(&v15, &v37, 16);
        v14 = v35;
        v12 = v34;
        v10 = v89;
        v6 = v4;
        v8 = v5;
        goto LABEL_45b014;
    }
    else
    {
        v80 = v48.next();
        if (v80)
        {
            v6.to_vec(v80[1], v80[2]);
            v2 = *((long long *)&v9);
            memcpy(&v0, &v6, 16);
            if (v0 == 0x8000000000000000)
                goto LABEL_45b14a;
            v81 = v48.next();
            if (v81)
            {
                v6.to_vec(v81[1], v81[2]);
                if (*((long long *)&v6) == 0x8000000000000000)
                    goto LABEL_45b0b7;
                v68 = v2;
                v67 = v0;
                memcpy(&v69, &v48, 16);
                v70 = v50;
                v71 = v51;
                memcpy(&v72, &v52, 16);
                v29 = *((long long *)&v6);
                *((int128_t *)&v32) = *((int128_t *)&v7);
                uu_runcon::parse_command_line::{{closure}}(&v6, &v67, &v29);
LABEL_45b014:
                memcpy(a0, &v6, 152);
            }
            else
            {
LABEL_45b0b7:
                v6 = 10;
                v82 = v6.new();
                v67 = v0;
                v68 = v2;
                memcpy(&v69, &v48, 16);
                v70 = v50;
                v71 = v51;
                memcpy(&v72, &v52, 16);
                a0->field_8 = v82;
                a0->field_10 = &g_4eac60;
                a0->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place<uu_runcon::parse_command_line<core::iter::adapters::cloned::Cloned<core::slice::iter::Iter<std::ffi::os_str::OsString>>>::{{closure}}>(&v67);
            }
        }
        else
        {
            v1 = 0x8000000000000000;
LABEL_45b14a:
            core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v0);
            a0->field_0 = 0;
            a0->field_8 = 8;
            a0->field_10 = 0;
            a0->field_18 = 9223372036854775809;
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
}
