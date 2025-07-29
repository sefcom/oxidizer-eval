long long uu_dircolors::generate_ls_colors(unsigned long long a0, char *a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x270], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x268], Other Possible Types: unsigned long long
    int v3;  // [bp-0x25f]
    unsigned int v4;  // [bp-0x25c]
    unsigned long v5;  // [bp-0x258]
    int v6;  // [bp-0x258]
    unsigned long v7;  // [bp-0x250], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x248]
    void* v9;  // [sp-0x240], Other Possible Types: unsigned long
    unsigned long long v10;  // [sp-0x238]
    void* v11;  // [bp-0x230]
    char *v12;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x220]
    char *v14;  // [bp-0x218]
    unsigned long long v15;  // [bp-0x210]
    void* v16;  // [bp-0x208], Other Possible Types: char *
    unsigned long long v17;  // [bp-0x200]
    int v18;  // [bp-0x1f8], Other Possible Types: unsigned long
    unsigned long v19;  // [bp-0x1f0]
    unsigned long long v20;  // [bp-0x1e8]
    unsigned long v21;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v22;  // [bp-0x1d8]
    unsigned long v23;  // [bp-0x1d0]
    char *v24;  // [bp-0x1c8]
    struct_0 *v25;  // [bp-0x1c0]
    int v26;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x1b8]
    unsigned long long v28;  // [bp-0x1b0]
    char *v29;  // [sp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0x1a0]
    char *v31;  // [bp-0x198]
    unsigned long long v32;  // [bp-0x190]
    char *v33;  // [bp-0x178]
    char *v34;  // [bp-0x170], Other Possible Types: unsigned int
    unsigned long long v35;  // [bp-0x170]
    unsigned long long v36;  // [bp-0x168]
    char *v37;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v38;  // [bp-0x158]
    char *v39;  // [bp-0x150], Other Possible Types: void*
    unsigned long long v40;  // [bp-0x148]
    char *v41;  // [bp-0x140], Other Possible Types: char
    unsigned int v42;  // [bp-0x13f]
    unsigned int v43;  // [bp-0x13c]
    unsigned long long v44;  // [bp-0x138]
    unsigned long long v45;  // [bp-0x128]
    unsigned long long v46;  // [bp-0x118]
    unsigned long long v47;  // [bp-0x110]
    char v48;  // [bp-0x108]
    unsigned long long v49;  // [bp-0x100]
    unsigned long long v50;  // [bp-0xf0]
    unsigned long long v51;  // [bp-0xe0]
    unsigned long long v52;  // [bp-0xd8]
    char v53;  // [bp-0xd0]
    unsigned long long v54;  // [bp-0xc8]
    unsigned long long v55;  // [bp-0xb8]
    void* v56;  // [bp-0xa8]
    unsigned long long v57;  // [bp-0xa0]
    char v58;  // [bp-0x98]
    unsigned int v59;  // [bp-0x97]
    unsigned int v60;  // [bp-0x94]
    int v61;  // [bp-0x90]
    unsigned long long v62;  // [bp-0x80]
    char v63;  // [bp-0x78]
    int v64;  // [bp-0x60]
    char v65;  // [bp-0x48]
    struct_1 *v67;  // rax
    unsigned long long v68;  // rdx
    unsigned long long v70;  // r15
    char *v71;  // rdi
    struct_1 *v72;  // rax
    char *v73;  // rbx
    char *v74;  // r14
    unsigned long long v75;  // rdx
    int v78;  // [bp-0x1f8]

    if (*(a1) == 2)
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        uu_dircolors::generate_type_output(&v63, a1);
        v0.push(&v63, &g_589e60);
        v9 = _ZN6uucore8features6colors11FILE_COLORS17h1d992387421d4282E;
        v10 = g_58cb80 * 32 + _ZN6uucore8features6colors11FILE_COLORS17h1d992387421d4282E;
        if (v9.next())
        {
            do
            {
                v5 = v67->field_0;
                v7 = v67->field_8;
                *((uint128_t *)&v18) = v67->field_10;
                v34 = 0;
                *((int *)&v21) = ((char)core::slice::<impl [T]>::starts_with(v5, v7, ::0x4ae1d0::core::char::methods::encode_utf8_raw(42, &v34), v68) ? 1 : "*");
                v23 = (char)core::slice::<impl [T]>::starts_with(v5, v7, ::0x4ae1d0::core::char::methods::encode_utf8_raw(42, &v34), v68) ^ 1;
                v12 = &(unsigned long long)v18;
                v13 = <&T as core::fmt::Display>::fmt;
                v14 = &v21;
                v15 = <&T as core::fmt::Display>::fmt;
                v16 = &v5;
                v17 = <&T as core::fmt::Display>::fmt;
                v35 = 2;
                v37 = 2;
                v39 = 0;
                v40 = 32;
                v41 = 3;
                v43 = v4;
                v42 = (int)v3;
                v44 = 2;
                v45 = 2;
                v46 = 1;
                v47 = 32;
                v48 = 3;
                v49 = 2;
                v50 = 2;
                v51 = 2;
                v52 = 32;
                v53 = 3;
                v54 = 2;
                v55 = 2;
                v56 = 0;
                v57 = 32;
                v58 = 3;
                v60 = v4;
                v59 = (int)v3;
                v26 = &g_589e78;
                v28 = 5;
                v31 = &v35;
                v32 = 4;
                v29 = &v12;
                v30 = 3;
                v64.map_or_else(&v26);
                v0.push(&v64, &g_589ec8);
                v67 = v9.next();
            } while (v67);
        }
        alloc::str::join_generic_copy(&v35, 8, 0, "\n:/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
        v70 = a0;
        v25->field_10 = v37;
        v25->field_0 = *((int128_t *)&v35);
        v71 = &v0;
    }
    else
    {
        v9 = 0;
        v10 = 8;
        v11 = 0;
        v5 = _ZN6uucore8features6colors11FILE_COLORS17h1d992387421d4282E;
        v7 = g_58cb80 * 32 + _ZN6uucore8features6colors11FILE_COLORS17h1d992387421d4282E;
        if (v5.next())
        {
            v73 = &(char)v12;
            v74 = &(char)v26;
            do
            {
                v18 = v72->field_0;
                v19 = v72->field_8;
                *((uint128_t *)&v22) = v72->field_10;
                v34 = 0;
                v73 = v73;
                v74 = v74;
                *((int *)&v0) = ((char)core::slice::<impl [T]>::starts_with(v18, v19, ::0x4ae1d0::core::char::methods::encode_utf8_raw(42, &v34), v75) ? 1 : "*");
                v1 = (char)core::slice::<impl [T]>::starts_with(v18, v19, ::0x4ae1d0::core::char::methods::encode_utf8_raw(42, &v34), v75) ^ 1;
                v12 = &v0;
                v13 = <&T as core::fmt::Display>::fmt;
                v14 = &v18;
                v15 = <&T as core::fmt::Display>::fmt;
                v35 = &g_433348;
                v36 = 2;
                v39 = 0;
                v37 = v73;
                v38 = 2;
                v61.map_or_else(&v35);
                v26 = v61;
                v29 = v62;
                v12 = v74;
                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                v14 = &v21;
                v15 = <&T as core::fmt::Display>::fmt;
                v35 = &g_589e00;
                v36 = 2;
                v39 = 0;
                v37 = v73;
                v38 = 2;
                v65.map_or_else(&v35);
                v9.push(&v65, &g_589ee0);
                ::0x4ad480::core::ptr::drop_in_place<alloc::string::String>(v74);
                v72 = v5.next();
            } while (v72);
        }
        uu_dircolors::get_colors_format_strings(&v35, v33);
        v70 = a0;
        v8 = v37;
        *((int128_t *)&v6) = *((int128_t *)&v35);
        v20 = v40;
        *((int128_t *)&v78) = *((int128_t *)&v38);
        alloc::str::join_generic_copy(&v35, 8, 0, a2, a3);
        v24 = v37;
        *((int128_t *)&v22) = *((int128_t *)&v35);
        uu_dircolors::generate_type_output(&v27, v33);
        v34 = &v5;
        v36 = <alloc::string::String as core::fmt::Display>::fmt;
        v37 = &v27;
        v38 = <alloc::string::String as core::fmt::Display>::fmt;
        v39 = &v21;
        v40 = <alloc::string::String as core::fmt::Display>::fmt;
        v41 = &v18;
        v44 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = &g_589e20;
        v13 = 4;
        v16 = 0;
        v14 = &v34;
        v15 = 4;
        v0.map_or_else(&v12);
        ::0x4ad480::core::ptr::drop_in_place<alloc::string::String>(&v27);
        v25->field_10 = v2;
        v25->field_0 = *((int128_t *)&v0);
        ::0x4ad480::core::ptr::drop_in_place<alloc::string::String>(&v21);
        ::0x4ad480::core::ptr::drop_in_place<alloc::string::String>(&v18);
        ::0x4ad480::core::ptr::drop_in_place<alloc::string::String>(&v5);
        v71 = &v9;
    }
    ::0x4ada80::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v71);
    return v70;
}
