long long uu_mktemp::make_temp_dir(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0x188]
    unsigned long long v1;  // [bp-0x178]
    char *v2;  // [bp-0x168], Other Possible Types: char
    int v3;  // [bp-0x168]
    unsigned long long v4;  // [bp-0x160]
    char *v5;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x150]
    char *v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x140]
    char v9;  // [bp-0x130]
    char v10;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x118]
    unsigned long long v12;  // [bp-0x110]
    unsigned long long v13;  // [bp-0x108]
    unsigned long long v14;  // [bp-0x100]
    unsigned long long v15;  // [bp-0xf8]
    unsigned long long v16;  // [bp-0xf0]
    char *v17;  // [bp-0xe8]
    unsigned long long v18;  // [bp-0xe0]
    void* v19;  // [bp-0xd8]
    char v20;  // [bp-0xc8]
    char v21;  // [bp-0xc0]
    unsigned long long v22;  // [bp-0xb0]
    unsigned long long v23;  // [bp-0xa8]
    unsigned long long v24;  // [bp-0xa0]
    unsigned long long v25;  // [bp-0x98]
    unsigned long long v26;  // [bp-0x90]
    unsigned long long v27;  // [bp-0x88]
    unsigned short v28;  // [bp-0x80]
    char v29;  // [bp-0x78]
    unsigned long long v30;  // [bp-0x68]
    int v31;  // [bp-0x60], Other Possible Types: char
    unsigned long v32;  // [bp-0x50]
    char v33;  // [bp-0x48]
    unsigned long long v34;  // rbx
    unsigned long v35;  // rdx

    v11 = a3;
    v12 = a4;
    v13 = a6;
    v14 = a7;
    v28 = 0;
    v23 = a3;
    v24 = a4;
    v27 = a5;
    v25 = a6;
    v26 = a7;
    v22 = 1924145348609;
    v9.tempdir_in(&v22, a1, a2);
    if (v10 != 2)
    {
        v30 = v10;
        memcpy(&v29, &v9, 16);
        v31.keep(&v29);
        *((unsigned long *)&a0[16]) = v32;
        *(a0) = v31;
        return v32;
    }
    v34 = *((long long *)&v9);
    if (!(char)v34.kind())
    {
        alloc::slice::<impl [T]>::repeat(&v2, a5);
        v1 = v5;
        memcpy(&v0, &v2, 16);
        v2 = &v11;
        v4 = <&T as core::fmt::Display>::fmt;
        v5 = &v0;
        v6 = <alloc::string::String as core::fmt::Display>::fmt;
        v7 = &v13;
        v8 = <&T as core::fmt::Display>::fmt;
        v15 = &g_41b658;
        v16 = 3;
        v19 = 0;
        v17 = &v2;
        v18 = 3;
        v33.map_or_else(&v15);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        v20.join(a1, a2, &v33);
        memcpy(&v2, &v21, 16);
        v0.spec_to_string(&v2);
        v15.to_vec("directorydry-runquietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 9);
        v5 = v17;
        *((int128_t *)&v3) = *((int128_t *)&v15);
        memcpy(&v6, &v0, 16);
        v8 = v1;
        *((double *)&a0[8]) = v2.new();
        *((char **)&a0[16]) = &g_4f9098;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<std::path::PathBuf>(&v20);
        return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(v34);
    }
    *((long long *)&a0[8]) = v34.from();
    *((unsigned long *)&a0[16]) = v35;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
