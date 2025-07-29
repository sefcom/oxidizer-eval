long long uu_test::files(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0x450], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x448]
    unsigned long long v2;  // [bp-0x440]
    char v3;  // [bp-0x438]
    char v4;  // [bp-0x3a0]
    char v5;  // [bp-0x2f0]
    unsigned long long v6;  // [bp-0x2d0]
    char v7;  // [bp-0x2c8]
    char v8;  // [bp-0x240]
    unsigned long v9;  // [bp-0x220]
    char v10;  // [bp-0x218]
    char v11;  // [bp-0x190]
    char v12;  // [bp-0xe0]
    unsigned long long v13;  // rax
    char v14;  // cl
    unsigned long long v15;  // r14
    char v17;  // cl
    unsigned int v18;  // edx
    unsigned long long v19;  // rax
    unsigned long long v20;  // r14

    std::fs::metadata(&v11, a1, a2);
    std::fs::metadata(&v12, a3, a4);
    memcpy(&v0, &v11, 176);
    memcpy(&v4, &v12, 176);
    if (*((int *)&v0) != 2 && *((long long *)&v4) != 2)
    {
        memcpy(&v5, &v0, 176);
        memcpy(&v8, &v4, 176);
        core::ptr::drop_in_place<(core::result::Result<std::fs::Metadata,std::io::error::Error>,core::result::Result<std::fs::Metadata,std::io::error::Error>)>(&v0);
        v0.try_from(a5, a6);
        if ((v0 & 1))
        {
            v0 = 1;
            v1 = a5;
            v2 = a6;
            v3 = 1;
            v19 = a0->field_8.spec_to_string(&v0);
            a0->field_0 = 4;
            return v19;
        }
        if ((char)v1.equal(v2, "-ef-nt-ot", 3))
        {
            v13 = *((long long *)&v7);
            if (*((long long *)&v7) == *((long long *)&v10))
            {
                v13 = v6;
                v14 = v13 == v9;
            }
        }
        else if ((char)v1.equal(v2, "-nt-ot", 3))
        {
            v0.modified(&v5);
            v15 = v0.unwrap(&g_56eb38);
            v0.modified(&v8);
            v13 = 255;
            v17 = (v15 < v0.unwrap(&g_56eb50) ? 255 : v15 != v0.unwrap(&g_56eb50));
            v14 = (v17 ? v17 : (v18 < v18 ? 255 : v18 != v18)) == 1;
        }
        else
        {
            if (!(char)v1.equal(v2, "-ot", 3))
            {
                v0 = 1;
                v1 = a5;
                v2 = a6;
                v3 = 1;
                v19 = a0->field_8.spec_to_string(&v0);
                a0->field_0 = 4;
                return v19;
            }
            v0.modified(&v5);
            v20 = v0.unwrap(&g_56eb08);
            v0.modified(&v8);
            v13 = v0.unwrap(&g_56eb20);
            v14 = v20 < v13;
        }
LABEL_49a3b9:
        a0->field_8 = v14;
        goto LABEL_49a3b9;
    }
    else
    {
        v13 = (unsigned long long)core::ptr::drop_in_place<(core::result::Result<std::fs::Metadata,std::io::error::Error>,core::result::Result<std::fs::Metadata,std::io::error::Error>)>(&v0);
        a0->field_8 = 0;
    }
    a0->field_0 = 7;
    return v13;
}
