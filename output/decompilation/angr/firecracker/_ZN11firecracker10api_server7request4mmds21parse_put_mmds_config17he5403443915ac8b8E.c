long long firecracker::api_server::request::mmds::parse_put_mmds_config(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    char v3;  // [bp-0x110]
    char v4;  // [bp-0x10f]
    unsigned int v5;  // [bp-0x10c]
    unsigned long long v6;  // [bp-0x108]
    unsigned long long v7;  // [bp-0x100]
    void* v8;  // [bp-0xf8]
    int v9;  // [bp-0xf0], Other Possible Types: char
    int v10;  // [bp-0xe0]
    char v11;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xc8]
    unsigned long long v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    char v15;  // [bp-0xb0]
    unsigned int v16;  // [bp-0xaf]
    unsigned int v17;  // [bp-0xac]
    unsigned long long v19;  // rax

    v6 = a1;
    v7 = a2;
    v8 = 0;
    serde_json::de::from_trait(&v11, &v6, a2);
    v0.inspect_err(&v11);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        *((char *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = v1;
        v19 = 1;
    }
    else
    {
        v17 = v5;
        v16 = *((int *)&v4);
        v12 = v0;
        v13 = v1;
        v14 = v2;
        v15 = v3;
        v11 = 26;
        v9.new_sync(&v11);
        if (!(v3 & 1))
        {
            g_7c4980.add(1);
            v9.append_deprecation_message("PUT /mmds/config: V1 is deprecated. Use V2 instead.Unrecognized PUT request path `The id from the path [] does not match the id from the body []!", 51);
        }
        a0[24] = v10;
        a0[8] = v9;
        v19 = 0;
    }
    *((unsigned long long *)a0) = v19;
    return v19;
}
