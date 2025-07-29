long long uu_mktemp::make_temp_file(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0x190]
    char v1;  // [bp-0x188]
    unsigned long long v2;  // [bp-0x180]
    char *v3;  // [bp-0x178], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [bp-0x170]
    char *v5;  // [bp-0x168], Other Possible Types: unsigned long long
    int v6;  // [bp-0x160], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x158]
    unsigned long long v8;  // [bp-0x150]
    int v9;  // [bp-0x148]
    unsigned long long v10;  // [bp-0x140]
    unsigned long long v11;  // [bp-0x138]
    unsigned long long v12;  // [bp-0x128]
    unsigned long long v13;  // [bp-0x120]
    unsigned long long v14;  // [bp-0x118]
    char *v15;  // [bp-0x110]
    unsigned long long v16;  // [bp-0x108]
    void* v17;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long long v18;  // [bp-0xf8]
    unsigned long long v19;  // [bp-0xf0]
    unsigned long long v20;  // [bp-0xe8]
    unsigned long long v21;  // [bp-0xe0]
    unsigned long long v22;  // [bp-0xd8]
    int v23;  // [bp-0xd0], Other Possible Types: char
    char v24;  // [bp-0xc0]
    unsigned int v25;  // [bp-0xb0]
    unsigned long long v26;  // [bp-0xa8]
    unsigned long long v27;  // [bp-0xa0]
    unsigned long long v28;  // [bp-0x98]
    unsigned long long v29;  // [bp-0x90]
    unsigned long long v30;  // [bp-0x88]
    unsigned short v31;  // [bp-0x80]
    char v32;  // [bp-0x78]
    unsigned long long v33;  // [bp-0x68]
    int v34;  // [bp-0x58]
    char v35;  // [bp-0x48]
    unsigned long long v36;  // r14
    unsigned long v37;  // rdx

    v19 = a3;
    v20 = a4;
    v21 = a6;
    v22 = a7;
    v31 = 0;
    v25 = 0;
    v26 = a3;
    v27 = a4;
    v30 = a5;
    v28 = a6;
    v29 = a7;
    v23.tempfile_in(&v25, a1, a2);
    if (v24 == 2)
    {
        v36 = *((long long *)&v23);
        if (!(char)v36.kind())
        {
            alloc::slice::<impl [T]>::repeat(&v3, "X", 1, a5);
            v11 = v5;
            *((int128_t *)&v9) = *((int128_t *)&v3);
            v3 = &v19;
            v4 = <&T as core::fmt::Display>::fmt;
            v5 = &(char)v9;
            v6 = <alloc::string::String as core::fmt::Display>::fmt;
            v7 = &v21;
            v8 = <&T as core::fmt::Display>::fmt;
            v13 = &g_432158;
            v14 = 3;
            v17 = 0;
            v15 = &v3;
            v16 = 3;
            v0.map_or_else(&v13);
            ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(&(char)v9);
            memcpy(&v32, &v0, 16);
            v33 = v2;
            v0.join(a1, a2, &v32);
            memcpy(&v3, &v1, 16);
            (char)v9.spec_to_string(&v3);
            uucore::mods::locale::get_message(&v13, "mktemp-template-type-filetemplate_typemktemp-error-persist-filemktemp-error-must-end-in-xmktemp-error-too-few-xsmktemp-error-prefix-contains-separatormktemp-error-suffix-contains-separatormktemp-error-invalid-templatemktemp-error-too-many-templatesmktemp-e", 25);
            v8 = v11;
            *((int128_t *)&v6) = (int128_t)v9;
            memcpy(&v3, &v13, 16);
            v5 = v15;
            *((double *)&a0->padding_1[7]) = v3.new();
            a0->field_10 = &g_58ccc8;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            ::0x4a6560::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            return (unsigned long long)::0x4a6580::core::ptr::drop_in_place<std::io::error::Error>(v36);
        }
        *((long long *)&a0->padding_1[7]) = v36.from();
        a0->field_10 = v37;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    else
    {
        memcpy(&v35, &v24, 16);
        v34 = v23;
        (char)v13.keep(&v34);
        if (!((char)v13 & 1))
        {
            a0->field_10 = v17;
            *((int128_t *)&a0->field_0) = *((int128_t *)&v15);
            return ::0x4a6540::core::ptr::drop_in_place<std::fs::File>(v14);
        }
        v12 = v18;
        memcpy(&(char)v11, &(char)v16, 16);
        *((int128_t *)&v9) = *((int128_t *)&v14);
        std::sys::pal::unix::os::split_paths::bytes_to_path(&v0, v10, v11);
        v6 = v2;
        memcpy(&(char)v4, &v0, 16);
        v3 = 0x8000000000000000;
        *((double *)&a0->padding_1[7]) = v3.new();
        a0->field_10 = &g_58ccc8;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return core::ptr::drop_in_place<tempfile::file::PersistError>(&(char)v9);
    }
}
