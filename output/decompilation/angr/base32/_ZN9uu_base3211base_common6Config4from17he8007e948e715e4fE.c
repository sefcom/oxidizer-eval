long long uu_base32::base_common::Config::from(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x1c8]
    char *v1;  // [bp-0x1c0]
    unsigned long long v2;  // [bp-0x1b8]
    void* v3;  // [bp-0x1b0], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0x1a0]
    char v6;  // [bp-0x198]
    unsigned long long v7;  // [bp-0x190]
    char v8;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x188]
    unsigned long long v10;  // [bp-0x188]
    unsigned long long v11;  // [bp-0x180]
    char *v12;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x170]
    void* v14;  // [bp-0x168]
    char v15;  // [bp-0xd8]
    unsigned int v16;  // [bp-0xc0]
    int v17;  // [bp-0xb8]
    int v18;  // [bp-0xa8]
    int v19;  // [bp-0x98]
    char v20;  // [bp-0x88]
    int v21;  // [bp-0x70], Other Possible Types: char
    int v22;  // [bp-0x60]
    int v23;  // [bp-0x50]
    char v24;  // [bp-0x40]
    unsigned long long v27;  // r15
    unsigned long long v28[3];  // rax
    unsigned long long v29[3];  // r12
    unsigned long long v30[3];  // rax
    unsigned long long v31;  // rax
    unsigned long long v33;  // r13
    unsigned long v34;  // r12
    unsigned long long v35[3];  // rax
    unsigned long long v36;  // r12
    char v37;  // al
    char v38;  // al

    v8.try_get_many(a1);
    v21.unwrap(&v8);
    v27 = 0x8000000000000000;
    if (*((long long *)&v21))
    {
        memcpy(&v20, &v24, 16);
        v19 = v23;
        v18 = v22;
        v17 = v21;
        v28 = v17.next();
        if (!v28)
            core::option::unwrap_failed(&g_50dd48); /* do not return */
        v29 = v28;
        v30 = v17.next();
        if (v30)
        {
            v3 = 0;
            v4 = v30[1];
            v5 = v30[2];
            v6 = 1;
            v1 = &v3;
            v2 = <os_display::Quoted as core::fmt::Display>::fmt;
            v8 = &g_50dd18;
            v11 = 1;
            v14 = 0;
            v12 = &v1;
            v13 = 1;
            v15.map_or_else(&v8);
            v16 = 1;
            *((double *)&a0->field_8) = v15.new();
            a0->field_10 = &g_50dd80;
            a0->field_0 = 2;
            return a0;
        }
        v33 = v29[1];
        v34 = v29[2];
        v27 = 0x8000000000000000;
        if (!(char)v33.equal(v34, "-invalid wrap size: wrap encoded lines after COLS character (default , 0 to disable wrapping)", 1))
        {
            std::fs::metadata(&v8, v33, v34);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v8, v11);
            if (v8 == 2)
            {
                v3 = 1;
                v4 = v33;
                v5 = v34;
                v6 = 0;
                v1 = &v3;
                v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                v8 = &g_50dd28;
                v11 = 2;
                v14 = 0;
                v12 = &v1;
                v13 = 1;
                v15.map_or_else(&v8);
                v16 = 1;
                v31 = v15.new();
                a0->field_8 = v31;
                a0->field_10 = &g_50de08;
                a0->field_0 = 2;
                return a0;
            }
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v8, v33, v34);
            v0 = v11;
            v7 = v12;
            v9 = v8;
            v27 = v8;
        }
    }
    v10 = v9;
    v8.try_get_one(a1);
    v35 = v8.unwrap();
    if (v35)
    {
        uu_base32::base_common::Config::from::{{closure}}(&v8, v35[1], v35[2]);
        if (v10)
        {
            a0->field_8 = v10;
            a0->field_10 = v11;
            a0->field_0 = 2;
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v27, v0);
            return a0;
        }
        v36 = 1;
    }
    else
    {
        v36 = 0;
        v11 = v33;
    }
    v37 = a1.get_flag("decodeignore-garbageextra operand : No such file or directory", 6);
    v38 = a1.get_flag("ignore-garbageextra operand : No such file or directory", 14);
    a0->field_0 = v36;
    a0->field_8 = v11;
    a0->field_10 = v27;
    a0->field_18 = v0;
    a0->field_20 = v7;
    a0->field_28 = v37;
    a0->field_29 = v38;
    return a0;
}
