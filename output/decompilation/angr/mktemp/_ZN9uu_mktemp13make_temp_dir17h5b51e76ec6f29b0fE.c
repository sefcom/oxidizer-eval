long long uu_mktemp::make_temp_dir(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    int v0;  // [bp-0x198], Other Possible Types: char
    unsigned long long v1;  // [bp-0x188]
    char *v2;  // [bp-0x178], Other Possible Types: char
    unsigned long long v3;  // [bp-0x170]
    char *v4;  // [bp-0x168], Other Possible Types: unsigned long long
    int v5;  // [bp-0x160], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x158]
    unsigned long long v7;  // [bp-0x150]
    char v8;  // [bp-0x140]
    char v9;  // [bp-0x138]
    unsigned long long v10;  // [bp-0x130]
    char v11;  // [bp-0x128]
    char v12;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x110]
    unsigned long long v14;  // [bp-0x108]
    unsigned long long v15;  // [bp-0x100]
    unsigned long long v16;  // [bp-0xf8]
    unsigned long long v17;  // [bp-0xf0]
    unsigned long long v18;  // [bp-0xe8]
    char *v19;  // [bp-0xe0]
    unsigned long long v20;  // [bp-0xd8]
    void* v21;  // [bp-0xd0]
    unsigned long long v22;  // [bp-0xc0]
    unsigned long long v23;  // [bp-0xb8]
    unsigned long long v24;  // [bp-0xb0]
    unsigned long long v25;  // [bp-0xa8]
    unsigned long long v26;  // [bp-0xa0]
    unsigned long long v27;  // [bp-0x98]
    unsigned short v28;  // [bp-0x90]
    char v29;  // [bp-0x88]
    unsigned long long v30;  // [bp-0x78]
    char v31;  // [bp-0x68]
    unsigned long long v32;  // [bp-0x58]
    int v33;  // [bp-0x48], Other Possible Types: char
    char v34;  // [bp-0x38]
    unsigned long long v35;  // rbx
    unsigned long v36;  // rdx
    unsigned long long v37;  // rax

    v13 = a3;
    v14 = a4;
    v15 = a6;
    v16 = a7;
    v28 = 0;
    v23 = a3;
    v24 = a4;
    v27 = a5;
    v25 = a6;
    v26 = a7;
    v22 = 1924145348609;
    v11.tempdir_in(&v22, a1, a2);
    if (v12 != 2)
    {
        v30 = v12;
        memcpy(&v29, &v11, 16);
        v33.keep(&v29);
        v37 = *((long long *)&v34);
        a0->field_10 = v37;
        *((void*)&a0->field_0) = v33;
        return v37;
    }
    v35 = *((long long *)&v11);
    if (!(char)v35.kind())
    {
        alloc::slice::<impl [T]>::repeat(&v2, "X", 1, a5);
        v1 = v4;
        memcpy(&v0, &v2, 16);
        v2 = &v13;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v0;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &v15;
        v7 = <&T as core::fmt::Display>::fmt;
        v17 = &g_432158;
        v18 = 3;
        v21 = 0;
        v19 = &v2;
        v20 = 3;
        v8.map_or_else(&v17);
        ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(&v0);
        memcpy(&v31, &v8, 16);
        v32 = v10;
        v8.join(a1, a2, &v31);
        memcpy(&v2, &v9, 16);
        v0.spec_to_string(&v2);
        uucore::mods::locale::get_message(&v17, "mktemp-template-type-directorymktemp-template-type-filetemplate_typemktemp-error-persist-filemktemp-error-must-end-in-xmktemp-error-too-few-xsmktemp-error-prefix-contains-separatormktemp-error-suffix-contains-separatormktemp-error-invalid-templatemktemp-er", 30);
        v7 = v1;
        v5 = v0;
        memcpy(&v2, &v17, 16);
        v4 = v19;
        *((double *)&a0->padding_1[7]) = v2.new();
        a0->field_10 = &g_58ccc8;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        ::0x4a6560::core::ptr::drop_in_place<std::path::PathBuf>(&v8);
        return (unsigned long long)::0x4a6580::core::ptr::drop_in_place<std::io::error::Error>(v35);
    }
    *((long long *)&a0->padding_1[7]) = v35.from();
    a0->field_10 = v36;
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    return 0x8000000000000000;
}
