long long just::run::run(unsigned long long a0)
{
    char v0;  // [bp-0x768]
    unsigned short v1;  // [bp-0x758]
    int v2;  // [bp-0x748], Other Possible Types: char
    int v3;  // [bp-0x738]
    int v4;  // [bp-0x728], Other Possible Types: char
    int v5;  // [bp-0x718], Other Possible Types: char
    int v6;  // [bp-0x708], Other Possible Types: char
    char v7;  // [bp-0x6f8]
    unsigned long long v8;  // [bp-0x6e8]
    int v9;  // [bp-0x6e0]
    char v10;  // [bp-0x6d9]
    char v11;  // [bp-0x6d0], Other Possible Types: unsigned short
    int v12;  // [bp-0x6ce]
    int v13;  // [bp-0x6c9]
    int v14;  // [bp-0x6b9]
    int v15;  // [bp-0x6a9]
    unsigned long long v16;  // [bp-0x670]
    unsigned int v17;  // [bp-0x668]
    char v18;  // [bp-0x664]
    int v19;  // [bp-0x654]
    char v20;  // [bp-0x638]
    int v21;  // [bp-0x638], Other Possible Types: unsigned long long
    int v22;  // [bp-0x637]
    int v23;  // [bp-0x630], Other Possible Types: char *, char
    char v24;  // [bp-0x62c]
    int v25;  // [bp-0x628]
    unsigned short v26;  // [bp-0x627]
    char v27;  // [bp-0x625]
    int v28;  // [bp-0x620], Other Possible Types: char
    char v29;  // [bp-0x61c]
    int v30;  // [bp-0x618]
    int v31;  // [bp-0x610]
    int v32;  // [bp-0x608]
    int v33;  // [bp-0x600], Other Possible Types: char
    int v34;  // [bp-0x5f8]
    char v35;  // [bp-0x5f0]
    char v36;  // [bp-0x5e8]
    char v37;  // [bp-0x5e0]
    unsigned long long v38;  // [bp-0x5d8]
    unsigned long long v39;  // [bp-0x5d0]
    char v40;  // [bp-0x5c8]
    unsigned long long v41;  // [bp-0x490]
    char v42;  // [bp-0x488]
    int v43;  // [bp-0x487]
    int v44;  // [bp-0x478]
    char v45;  // [bp-0x477]
    char v46;  // [bp-0x468]
    int v47;  // [bp-0x467]
    char v48;  // [bp-0x458]
    int v49;  // [bp-0x457]
    unsigned long long v50;  // [bp-0x448]
    char v51;  // [bp-0x438]
    unsigned long long v52;  // [bp-0x428]
    char v53;  // [bp-0x420]
    int v54;  // [bp-0x30c]
    char v55;  // [bp-0x2fc]
    char v56;  // [bp-0x2e9]
    char v57;  // [bp-0x2e8]
    unsigned long long v59;  // rax
    unsigned int v60;  // ecx
    int v61;  // xmm2
    int v62;  // xmm3
    char v63;  // al
    char v64;  // bl
    int v65;  // xmm0
    int v66;  // xmm2
    unsigned int v67;  // ebp

    v57.app();
    v20.try_get_matches_from(&v57, a0);
    v59 = *((long long *)&v20);
    if ((char)(((0 ^ v59) & (0 ^ -(v59))) >> 63))
    {
        just::run::run::{{closure}}(*((long long *)&v23));
        return 1;
    }
    v60 = *((int *)&v23);
    memcpy(&v18, &v24, 16);
    *((int128_t *)&v19) = *((int128_t *)&v29);
    memcpy(&v19, &v29, 16);
    v16 = v59;
    v17 = v60;
    v20.from_matches(&v16);
    if (*((long long *)&v20) == 0x8000000000000000)
    {
        v61 = (int128_t)v31;
        v62 = *((int128_t *)&v33);
        memcpy(&v10, &v23, 16);
        *((int128_t *)&v13) = *((int128_t *)&v28);
        v14 = v61;
        v15 = v62;
        v42 = 13;
        v43 = v9;
        memcpy(&v45, &v11, 16);
        *((int128_t *)&v47) = (int128_t)(&v13)[9];
        *((int128_t *)&v49) = (int128_t)(&v14)[9];
        v50 = (long long)(&v15)[8];
        v41 = 0x8000000000000000;
LABEL_5d6b2a:
        v23 = &v42;
        v63 = 1;
    }
    else
    {
        memcpy(&(char)v41, &v20, 424);
        if (v41 == 0x8000000000000000)
            goto LABEL_5d6b2a;
        v26 = *((short *)&v55);
        v22 = v54;
        v27 = v56;
    }
    v20 = v63;
    v9.unwrap_or_default(&v20);
    v1 = v11;
    memcpy(&v0, &v9, 16);
    v64 = (char)v12;
    v9.new();
    if (v41 == 0x8000000000000000)
    {
        v8 = v52;
        memcpy(&v7, &v51, 16);
        memcpy(&v6, &v50, 16);
        memcpy(&v5, &v48, 16);
        memcpy(&v4, &v46, 16);
        v3 = v44;
        memcpy(&v2, &v42, 16);
LABEL_5d6cb0:
        v38 = v8;
        memcpy(&v36, &v7, 16);
        v34 = v6;
        v32 = v5;
        v30 = v4;
        v25 = v3;
        v21 = v2;
        just::run::run::{{closure}}(v64, &v0, &(char)v21);
        v67 = 1;
    }
    else
    {
        v39 = v52;
        memcpy(&v37, &v51, 16);
        memcpy(&v35, &v50, 16);
        v65 = *((int128_t *)&v42);
        v66 = *((int128_t *)&v46);
        *((int128_t *)&v33) = *((int128_t *)&v48);
        v31 = v66;
        v28 = v44;
        v23 = v65;
        memcpy(&v40, &v53, 312);
        v21 = v41;
        just::run::run::{{closure}}(&v2, &v9, &v20);
        if (v2 != 56)
            goto LABEL_5d6cb0;
        v67 = 0;
    }
    core::ptr::drop_in_place<just::loader::Loader>(&v9);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v16);
    return v67;
}
