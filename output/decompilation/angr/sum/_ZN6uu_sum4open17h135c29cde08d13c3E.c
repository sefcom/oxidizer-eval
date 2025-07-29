long long uu_sum::open(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x178], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0x170]
    unsigned long long v2;  // [bp-0x168]
    unsigned int v3;  // [bp-0x160]
    void* v4;  // [bp-0x158]
    unsigned long long v5;  // [bp-0x150]
    unsigned long long v6;  // [bp-0x148]
    char v7;  // [bp-0x140]
    unsigned long long v8;  // [bp-0x138]
    unsigned long long v9;  // [bp-0x130]
    char v10;  // [bp-0x128]
    unsigned long long v11;  // [bp-0x118]
    char v12;  // [bp-0x110]
    unsigned long long v13;  // [bp-0x100]
    char v14;  // [bp-0xf8]
    unsigned long long v15;  // [bp-0xe8]
    char v16;  // [bp-0xe0]
    unsigned long long v17;  // [bp-0xd0]
    char v18;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0xc0]
    char v20;  // [bp-0xb8]
    char *v23;  // r14
    unsigned long long v24;  // rsi
    unsigned long long v25;  // rdx

    if ((char)a1.equal(a2, "-sum-error-no-such-file-or-directorysum-error-is-directory(uutils coreutils) 0.1.0sum-usagesum-aboutsum-help-bsd-compatiblesum-help-sysv-compatible", 1))
    {
        a0->field_8 = std::io::stdio::stdin().new();
        a0->field_10 = &g_572778;
        a0->field_0 = 0;
        return a0;
    }
    v8 = a1;
    v9 = a2;
    if ((char)a1.is_dir(a2))
    {
        v0.to_vec();
        v4 = 0;
        v5 = a1;
        v6 = a2;
        v7 = 0;
        v18.spec_to_string(&v4);
        v11 = v2;
        memcpy(&v10, &v0, 16);
        memcpy(&v12, &v18, 16);
        v13 = *((long long *)&v20);
        v23 = &v18;
        v18.from_iter(&v10);
        v24 = "sum-error-is-directory(uutils coreutils) 0.1.0sum-usagesum-aboutsum-help-bsd-compatiblesum-help-sysv-compatible";
        v25 = 22;
        goto LABEL_49fd48;
    }
    else
    {
        std::fs::metadata(&v18, a1, a2);
        if (v18 == 2)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v19);
            v0.to_vec();
            v4 = 0;
            v5 = a1;
            v6 = a2;
            v7 = 0;
            v18.spec_to_string(&v4);
            v15 = v2;
            memcpy(&v14, &v0, 16);
            memcpy(&v16, &v18, 16);
            v17 = *((long long *)&v20);
            v23 = &v18;
            v18.from_iter(&v14);
            v24 = "sum-error-no-such-file-or-directorysum-error-is-directory(uutils coreutils) 0.1.0sum-usagesum-aboutsum-help-bsd-compatiblesum-help-sysv-compatible";
            v25 = 35;
LABEL_49fd48:
            uucore::mods::locale::get_message_with_args(&v0, v24, v25, v23);
            v3 = 2;
            *((double *)&a0->field_8) = v0.new();
            a0->field_10 = &g_572710;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v18, v19);
            v18.open(&v8);
            v0.map_err_context(&v18);
            if (!v0)
            {
                a0->field_8 = (unsigned int)v1.new();
                a0->field_10 = 5711512;
                a0->field_0 = 0;
                return a0;
            }
            a0->field_8 = v0;
            a0->field_10 = v1;
        }
        a0->field_0 = 1;
        return a0;
    }
}
