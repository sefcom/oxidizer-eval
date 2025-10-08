long long uu_cat::cat_files(unsigned long a0, unsigned long a1, char a2[5])
{
    unsigned long long v0;  // [bp-0x248]
    int v1;  // [bp-0x248]
    unsigned long long v2;  // [bp-0x240]
    char *v3;  // [bp-0x238], Other Possible Types: unsigned long long
    int v4;  // [bp-0x230], Other Possible Types: unsigned int, unsigned long long
    void* v5;  // [bp-0x228]
    void* v6;  // [bp-0x210]
    unsigned long long v7;  // [bp-0x208]
    void* v8;  // [bp-0x200]
    void* v9;  // [bp-0x1f8]
    unsigned long long v10;  // [bp-0x1f0]
    unsigned long long v11;  // [bp-0x1e8]
    char v12;  // [bp-0x1e0]
    int v13;  // [bp-0x1d8]
    unsigned long long v14;  // [bp-0x1d0]
    unsigned long long v15;  // [bp-0x1c8]
    char *v16;  // [bp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x1a8]
    char *v18;  // [bp-0x1a0]
    unsigned long long v19;  // [bp-0x198]
    int v20;  // [bp-0x190]
    unsigned long long v21;  // [bp-0x180]
    char v22;  // [bp-0x178]
    char v23;  // [bp-0x170]
    unsigned short v24;  // [bp-0x140]
    char v25;  // [bp-0x13f]
    char v26;  // [bp-0x13e]
    int v27;  // [bp-0xe0]
    unsigned long long v28;  // [bp-0xc8]
    char v29;  // [bp-0xc0]
    void* v31;  // rbx
    unsigned long long v32;  // r15
    unsigned long long v33;  // r13
    unsigned long long v34;  // rdx
    void* v35;  // r15
    char *v36;  // [bp-0x1d8], Other Possible Types: unsigned long long

    std::io::stdio::stdout();
    v22.from_file();
    if ((v22 & 1))
    {
        v28 = 0;
        core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(&v22);
    }
    else
    {
        memcpy(&v29, &v23, 144);
        v28 = 1;
    }
    v22.new();
    v24 = 1;
    v26 = 0;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    if (a1)
    {
        v31 = 0;
        do
        {
            v32 = *((long long *)(8 + a0 + (char *)v31));
            v33 = *((long long *)(16 + a0 + (char *)v31));
            uu_cat::cat_path(&v20, v32, v33, a2, &v22, ((char)v28 ? &v29 : 0));
            if ((long long)v20 == 9223372036854775814)
            {
                v20.drop_in_place<core::result::Result<(),uu_cat::CatError>>();
            }
            else
            {
                v15 = v21;
                v13 = v20;
                v9 = 0;
                v10 = v32;
                v11 = v33;
                v12 = 0;
                v16 = &v9;
                v17 = <os_display::Quoted as core::fmt::Display>::fmt;
                v18 = &v36;
                v19 = <uu_cat::CatError as core::fmt::Display>::fmt;
                v0 = &g_4eab28;
                v2 = 2;
                v5 = 0;
                v3 = &v16;
                v4 = 2;
                v27.map_or_else(&v0);
                v6.push(&v27);
                core::ptr::drop_in_place<uu_cat::CatError>(&v36);
            }
            v31 += 24;
        } while (a1 * 24 != v31);
        if ((v25 & 1))
        {
            v0 = &g_4eab48;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v4) = 0;
            std::io::stdio::_print(&v0);
        }
        if (!v8)
            goto LABEL_45e6e3;
        v16 = uucore::util_name();
        v17 = v34;
        v36 = &v16;
        v14 = <&T as core::fmt::Display>::fmt;
        *((unsigned long long **)&v1) = &g_4eab58;
        v2 = 2;
        v5 = 0;
        v3 = &v36;
        v4 = 1;
        v9.map_or_else(&(unsigned long long)v1);
        alloc::str::join_generic_copy(&v9, 8, v8, v10, v11);
        v3 = v11;
        *((int128_t *)&v1) = *((int128_t *)&v9);
        v4 = (unsigned int)v8;
        v35 = (unsigned long long)v1.new();
        core::ptr::drop_in_place<alloc::string::String>(v9, v10);
    }
    else
    {
LABEL_45e6e3:
        v35 = 0;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
    return v35;
}
