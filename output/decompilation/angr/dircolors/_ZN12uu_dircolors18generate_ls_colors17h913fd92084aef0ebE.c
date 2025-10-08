long long uu_dircolors::generate_ls_colors(unsigned long long a0, char *a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x1b0]
    void* v2;  // [bp-0x1a8], Other Possible Types: char *
    char *v3;  // [bp-0x1a0], Other Possible Types: unsigned int, unsigned long long
    char *v4;  // [bp-0x1a0]
    unsigned long long v5;  // [bp-0x198]
    char *v6;  // [bp-0x190]
    unsigned long long v7;  // [bp-0x188]
    void* v8;  // [bp-0x180], Other Possible Types: char *
    unsigned long long v9;  // [bp-0x178]
    char *v10;  // [bp-0x170]
    unsigned long long v11;  // [bp-0x168]
    char *v12;  // [bp-0x160]
    char *v13;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x150]
    char *v15;  // [bp-0x148]
    unsigned long long v16;  // [bp-0x140]
    void* v17;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x130]
    int v19;  // [bp-0x128]
    int v20;  // [bp-0x128]
    unsigned long v21;  // [bp-0x120]
    unsigned long long v22;  // [bp-0x118]
    int v23;  // [bp-0x108], Other Possible Types: unsigned long
    unsigned long v24;  // [bp-0x100]
    char *v25;  // [bp-0xf8]
    unsigned long v26;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long v27;  // [bp-0xe0]
    char *v28;  // [bp-0xd8]
    struct_0 *v29;  // [bp-0xd0]
    unsigned long v30;  // [bp-0xc8]
    int v31;  // [bp-0xc8]
    unsigned long v32;  // [bp-0xc0]
    char *v33;  // [bp-0xb8]
    void* v34;  // [bp-0xb0]
    unsigned long long v35;  // [bp-0xa8]
    void* v36;  // [bp-0xa0]
    char *v37;  // [bp-0x88]
    unsigned long v38;  // [bp-0x80]
    char v39;  // [bp-0x78]
    int v40;  // [bp-0x60]
    char v41;  // [bp-0x48]
    unsigned long long v43;  // r13
    unsigned long long v45;  // rbx
    char *v46;  // rdi
    unsigned long long v47;  // r13
    char *v48;  // rbx
    unsigned long v49;  // rax
    unsigned long v51;  // [bp-0x128], Other Possible Types: unsigned long long
    int v52;  // [bp-0x108]

    if (*(a1) == 2)
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        uu_dircolors::generate_type_output(&v39, a1);
        v0.push(&v39, &g_4f5d40);
        v43 = 24;
        v12 = &v0;
        do
        {
            v51 = *((long long *)(_ZN6uucore8features6colors11FILE_COLORS17hdd97ea8c4a21de4aE + v43 - 24));
            v21 = *((long long *)(_ZN6uucore8features6colors11FILE_COLORS17hdd97ea8c4a21de4aE + v43 - 16));
            *((int128_t *)&v23) = *((int128_t *)(_ZN6uucore8features6colors11FILE_COLORS17hdd97ea8c4a21de4aE + v43 - 8));
            v3 = 0;
            *((int *)&v26) = ((char)core::slice::<impl [T]>::starts_with(v51, v21, ::0x465e50::core::char::methods::encode_utf8_raw(42, &v3)) ? 1 : "*");
            v27 = (char)core::slice::<impl [T]>::starts_with(v51, v21, ::0x465e50::core::char::methods::encode_utf8_raw(42, &v3)) ^ 1;
            v4 = &(unsigned long long)v23;
            v5 = <&T as core::fmt::Display>::fmt;
            v6 = &v26;
            v7 = <&T as core::fmt::Display>::fmt;
            v8 = &v51;
            v9 = <&T as core::fmt::Display>::fmt;
            v13 = &g_4f5d58;
            v14 = 5;
            v17 = &g_41c328;
            v18 = 4;
            v15 = &v4;
            v16 = 3;
            v40.map_or_else(&v13);
            v0.push(&v40, &g_4f5da8);
            v43 += 32;
        } while (v43 != 4184);
        alloc::str::join_generic_copy(&v4, 8, 0, "\n:", 1);
        v45 = a0;
        v29->field_10 = v6;
        v29->field_0 = *((int128_t *)&v4);
        v46 = &v0;
    }
    else
    {
        v34 = 0;
        v35 = 8;
        v36 = 0;
        v38 = _ZN6uucore8features6colors11FILE_COLORS17hdd97ea8c4a21de4aE;
        v47 = 24;
        v48 = &(char)v3;
        v12 = &v34;
        do
        {
            v49 = v38;
            v30 = *((long long *)(v49 + v47 - 24));
            v32 = *((long long *)(v49 + v47 - 16));
            *((int128_t *)&v19) = *((int128_t *)(v49 + v47 - 8));
            v3 = 0;
            *((int *)&v23) = ((char)core::slice::<impl [T]>::starts_with(v30, v32, ::0x465e50::core::char::methods::encode_utf8_raw(42, v48)) ? 1 : "*");
            v24 = (char)core::slice::<impl [T]>::starts_with(v30, v32, ::0x465e50::core::char::methods::encode_utf8_raw(42, v48)) ^ 1;
            v13 = &v23;
            v14 = <&T as core::fmt::Display>::fmt;
            v15 = &v30;
            v16 = <&T as core::fmt::Display>::fmt;
            v3 = &g_41c1c0;
            v5 = 2;
            v8 = 0;
            v6 = &v13;
            v7 = 2;
            v0.map_or_else(v48);
            memcpy(&v26, &v0, 16);
            v28 = v2;
            v13 = &v26;
            v14 = <alloc::string::String as core::fmt::Display>::fmt;
            v15 = &v51;
            v16 = <&T as core::fmt::Display>::fmt;
            v3 = &g_4f5ce0;
            v5 = 2;
            v8 = 0;
            v6 = &v13;
            v7 = 2;
            v41.map_or_else(v48);
            v34.push(&v41, &g_4f5dc0);
            core::ptr::drop_in_place<alloc::string::String>(&v26);
            v47 += 32;
        } while (v47 != 4184);
        uu_dircolors::get_colors_format_strings(&v3, v37);
        v33 = v6;
        *((int128_t *)&v31) = *((int128_t *)&v3);
        v22 = v9;
        *((int128_t *)&v20) = *((int128_t *)&v7);
        alloc::str::join_generic_copy(&v3, 8, 0, a2, a3);
        v25 = v6;
        *((int128_t *)&v52) = *((int128_t *)&v3);
        uu_dircolors::generate_type_output(&v0, v37);
        v3 = &v30;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &v0;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v8 = &v23;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v10 = &v51;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v13 = &g_4f5d00;
        v14 = 4;
        v17 = 0;
        v15 = &v3;
        v16 = 4;
        v26.map_or_else(&v13);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        v45 = a0;
        v29->field_10 = v28;
        v29->field_0 = *((int128_t *)&v26);
        core::ptr::drop_in_place<alloc::string::String>(&v23);
        core::ptr::drop_in_place<alloc::string::String>(&v51);
        core::ptr::drop_in_place<alloc::string::String>(&v30);
        v46 = &v34;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v46);
    return v45;
}
