long long uu_mktemp::make_temp_file(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0x168], Other Possible Types: unsigned long long
    int v1;  // [bp-0x168]
    unsigned long long v2;  // [bp-0x160]
    char *v3;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x150]
    char *v5;  // [bp-0x148]
    unsigned long long v6;  // [bp-0x140]
    int v7;  // [bp-0x138]
    unsigned long long v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x128]
    unsigned long long v10;  // [bp-0x118]
    unsigned long long v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0x100]
    char *v13;  // [bp-0xf8]
    unsigned long long v14;  // [bp-0xf0]
    void* v15;  // [bp-0xe8], Other Possible Types: unsigned long
    unsigned long long v16;  // [bp-0xe0]
    char v17;  // [bp-0xd8]
    char v18;  // [bp-0xd0]
    unsigned long long v19;  // [bp-0xc8]
    unsigned long long v20;  // [bp-0xc0]
    unsigned long long v21;  // [bp-0xb8]
    unsigned long long v22;  // [bp-0xb0]
    unsigned long long v23;  // [bp-0xa8]
    unsigned int v24;  // [bp-0xa0]
    unsigned long long v25;  // [bp-0x98]
    unsigned long long v26;  // [bp-0x90]
    unsigned long long v27;  // [bp-0x88]
    unsigned long long v28;  // [bp-0x80]
    unsigned long long v29;  // [bp-0x78]
    unsigned short v30;  // [bp-0x70]
    char v31;  // [bp-0x68]
    char v32;  // [bp-0x58]
    char v33;  // [bp-0x48]
    unsigned long long v34;  // r14
    unsigned long v35;  // rdx

    v20 = a3;
    v21 = a4;
    v22 = a6;
    v23 = a7;
    v30 = 0;
    v24 = 0;
    v25 = a3;
    v26 = a4;
    v29 = a5;
    v27 = a6;
    v28 = a7;
    v31.tempfile_in(&v24, a1, a2);
    if (v32 == 2)
    {
        v34 = *((long long *)&v31);
        if (!(char)v34.kind())
        {
            alloc::slice::<impl [T]>::repeat(&v0, a5);
            v9 = v3;
            *((int128_t *)&v7) = *((int128_t *)&v0);
            *((unsigned long long **)&v1) = &v20;
            v2 = <&T as core::fmt::Display>::fmt;
            v3 = &(char)v7;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v5 = &v22;
            v6 = <&T as core::fmt::Display>::fmt;
            v11 = &g_41b658;
            v12 = 3;
            v15 = 0;
            v13 = &(unsigned long long)v1;
            v14 = 3;
            v33.map_or_else(&v11);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v7);
            v17.join(a1, a2, &v33);
            memcpy(&(unsigned long long)v1, &v18, 16);
            (char)v7.spec_to_string(&(unsigned long long)v1);
            v11.to_vec("filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVE", 4);
            v3 = v13;
            *((int128_t *)&v1) = *((int128_t *)&v11);
            memcpy(&v4, &(char)v7, 16);
            v6 = v9;
            *((double *)&a0[8]) = (unsigned long long)v1.new();
            *((char **)&a0[16]) = &g_4f9098;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<std::path::PathBuf>(&v17);
            return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(v34);
        }
        *((long long *)&a0[8]) = v34.from();
        *((unsigned long *)&a0[16]) = v35;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    else
    {
        (char)v11.keep(&v31);
        if ((int)v11 != 1)
        {
            *((unsigned long *)&a0[16]) = v15;
            *((int128_t *)a0) = *((int128_t *)&v13);
            return core::ptr::drop_in_place<std::fs::File>(v12);
        }
        v10 = v16;
        memcpy(&(char)v9, &(char)v14, 16);
        *((int128_t *)&v7) = *((int128_t *)&v12);
        std::sys::pal::unix::os::split_paths::bytes_to_path(&v17, v8, v9);
        v4 = v19;
        memcpy(&(char)v2, &v17, 16);
        v0 = 0x8000000000000000;
        *((double *)&a0[8]) = v0.new();
        *((char **)&a0[16]) = &g_4f9098;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return core::ptr::drop_in_place<tempfile::file::PersistError>(&(char)v7);
    }
}
