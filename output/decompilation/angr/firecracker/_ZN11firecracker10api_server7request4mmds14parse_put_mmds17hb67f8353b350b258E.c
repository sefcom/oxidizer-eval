long long firecracker::api_server::request::mmds::parse_put_mmds(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x150]
    char v1;  // [bp-0x14f]
    unsigned int v2;  // [bp-0x14c]
    unsigned long long v3;  // [bp-0x148], Other Possible Types: unsigned long
    char v4;  // [bp-0x140]
    unsigned long long v5;  // [bp-0x130]
    unsigned long long v6;  // [bp-0x128]
    void* v7;  // [bp-0x120]
    char *v8;  // [bp-0x118]
    unsigned long long v9;  // [bp-0x110]
    char v10;  // [bp-0xf8]
    unsigned long long v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xe0]
    char v13;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned int v14;  // [bp-0xd7]
    unsigned int v15;  // [bp-0xd4]
    char *v16;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned long long v17;  // [bp-0xca]
    unsigned long long v18;  // [bp-0xc8]
    void* v19;  // [bp-0xc0]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rcx
    char v23;  // al
    unsigned int v24;  // ecx
    unsigned long long v25;  // rax

    g_7c4830.add(1);
    if (!a3)
    {
        v5 = a1;
        v6 = a2;
        v7 = 0;
        serde_json::de::from_trait(&(char)v8, &v5, a2);
        (char)v0.inspect_err(&(char)v8);
        v23 = v0;
        if (v23 != 6)
        {
            v24 = *((int *)&v1);
            v15 = v2;
            v14 = v24;
            memcpy(&(char)v18, &v4, 16);
            v13 = v23;
            v16 = v3;
            v12 = 22;
            v25 = a0 + 8.new_sync(&v12);
            *((unsigned long long *)a0) = 0;
            return v25;
        }
        *((char *)&a0[8]) = 4;
        *((unsigned long *)&a0[16]) = v3;
        *((unsigned long long *)a0) = 1;
        return v3;
    }
    else if ((char)a3.equal(a4, "configThe request was executed successfully. Status code: 200 OK.", 6))
    {
        return firecracker::api_server::request::mmds::parse_put_mmds_config(a0, a1, a2);
    }
    else
    {
        v0 = a3;
        v3 = a4;
        g_7c4840.add(1);
        v8 = &(char)v0;
        v9 = <&T as core::fmt::Display>::fmt;
        v12 = &g_7a3850;
        v13 = 2;
        v19 = 0;
        v16 = &v8;
        v18 = 1;
        v10.map_or_else(0, a2, &v12);
        memcpy(&(char)v12, &v10, 16);
        v17 = v11;
        *((unsigned short *)&a0[8]) = 769;
        v21 = *((long long *)((char *)&v13 + 6));
        v22 = v17;
        *((int128_t *)&a0[10]) = *((int128_t *)&v12);
        *((unsigned long long *)&a0[24]) = v21;
        *((unsigned long long *)&a0[32]) = v22;
        *((unsigned long long *)a0) = 1;
        return v21;
    }
}
