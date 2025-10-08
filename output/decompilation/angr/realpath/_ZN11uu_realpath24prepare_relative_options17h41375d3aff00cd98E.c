long long uu_realpath::prepare_relative_options(unsigned long a0, unsigned long long a1, unsigned int a2, char a3)
{
    void* v0;  // [bp-0x98], Other Possible Types: unsigned int
    void* v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    char v4;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x80]
    unsigned long long v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13[6];  // [bp-0x58]
    char v14;  // [bp-0x50], Other Possible Types: unsigned long long
    void* v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x40]
    unsigned long long v17;  // [bp-0x38]
    unsigned long long v19;  // rbp
    unsigned long long v20;  // r15
    unsigned long long v21[3];  // rax
    unsigned long long v22[3];  // rax
    char v23;  // r12b
    void* v25;  // rdx
    void* v26;  // rdx
    void* v28;  // rdi

    v0 = a2;
    v19 = 0x8000000000000000;
    v20 = "relative-toDIRprint the resolved path relative to DIRrelative-baseprint absolute paths unless paths below DIR";
    v4.try_get_one(a1, "relative-toDIRprint the resolved path relative to DIRrelative-baseprint absolute paths unless paths below DIR", 11);
    v21 = "relative-toDIRprint the resolved path relative to DIRrelative-baseprint absolute paths unless paths below DIR".unwrap(11, &v4);
    if (v21)
    {
        v4.to_vec(v21[1], v21[2]);
        v6 = v5;
        v8 = v7;
        v10 = v11;
        v9 = v7;
    }
    else
    {
        v5 = 0x8000000000000000;
        v9 = v20;
    }
    v7 = v8;
    v3 = v6;
    v4.try_get_one(a1, "relative-baseprint absolute paths unless paths below DIR", 13);
    v22 = "relative-baseprint absolute paths unless paths below DIR".unwrap(13, &v4);
    if (v22)
    {
        v4.to_vec(v22[1], v22[2]);
        v2 = v7;
        v17 = v10;
    }
    else
    {
        v3 = v19;
    }
    v4 = v5;
    v7 = v9;
    v10 = v11;
    v23 = a3;
    uu_realpath::canonicalize_relative_option(&v14, &v4, v0, v23);
    if (v14 == 9223372036854775809)
    {
        v13[1] = v15;
        v13[2] = v16;
        v13[0] = 9223372036854775809;
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v3, v2);
        return v13;
    }
    v12 = v16;
    v1 = v15;
    v7 = v2;
    v10 = v17;
    uu_realpath::canonicalize_relative_option(&v14, &v3, v0, v23);
    if (v14 == 9223372036854775809)
    {
        v13[1] = v15;
        v13[2] = v16;
        v13[0] = 9223372036854775809;
        goto LABEL_462adf;
    }
    else
    {
        if (v14 == 0x8000000000000000)
            v25 = 0;
        else
            v25 = v15;
        v26 = v25;
        if (v14 != 0x8000000000000000)
            v0 = v1;
        else
            v0 = 0;
        v28 = v0;
        if (!v28 || !v26 || v28.starts_with(v12, v26, v16))
        {
            v13[0] = v14;
            v13[1] = v1;
            v13[2] = v12;
            v13[3] = v14;
            v13[4] = v15;
            v13[5] = v16;
        }
        else
        {
            v13[0] = 0x8000000000000000;
            v13[3] = 0x8000000000000000;
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v14, v15);
LABEL_462adf:
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v14, v1);
        }
    }
    return v13;
}
