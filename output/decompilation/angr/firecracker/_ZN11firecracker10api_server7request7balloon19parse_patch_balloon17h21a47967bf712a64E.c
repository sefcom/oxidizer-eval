long long firecracker::api_server::request::balloon::parse_patch_balloon(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x120]
    unsigned short v1;  // [bp-0x11e]
    unsigned int v2;  // [bp-0x11c]
    unsigned long v3;  // [bp-0x118]
    char *v4;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x108]
    void* v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xf0]
    char v9;  // [bp-0xe8]
    unsigned long long v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    unsigned int v12;  // [bp-0xc8], Other Possible Types: unsigned long long, unsigned short
    char *v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xba]
    unsigned long long v15;  // [bp-0xb8]
    void* v16;  // [bp-0xb0]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rax

    if (a3)
    {
        v7 = a3;
        v8 = a4;
        if (!(char)a3.equal(a4, "statisticsUnrecognized GET request path ``.Unrecognized PATCH request path `", 10))
        {
            v4 = &v7;
            v5 = <&T as core::fmt::Display>::fmt;
            v11 = &g_7a3830;
            v12 = 2;
            v16 = 0;
            v13 = &v4;
            v15 = 1;
            v9.map_or_else(0, a2, &v11);
            memcpy(&(char)v11, &v9, 16);
            v14 = v10;
            *((unsigned short *)&a0[8]) = 769;
            v18 = *((long long *)((char *)&v12 + 6));
            v19 = v14;
            *((int128_t *)&a0[10]) = *((int128_t *)&v11);
            *((unsigned long long *)&a0[24]) = v18;
            *((unsigned long long *)&a0[32]) = v19;
            *((unsigned long long *)a0) = 1;
            return v18;
        }
        v4 = a1;
        v5 = a2;
        v6 = 0;
        serde_json::de::from_trait(&v0, &v4, a2);
        if ((v0 & 1))
        {
            *((char *)&a0[8]) = 4;
            *((unsigned long *)&a0[16]) = v3;
            *((unsigned long long *)a0) = 1;
            return v3;
        }
        v12 = v1;
        v11 = 32;
    }
    else
    {
        v4 = a1;
        v5 = a2;
        v6 = 0;
        serde_json::de::from_trait(&v0, &v4, a2);
        if (*((int *)&v0) == 1)
        {
            *((char *)&a0[8]) = 4;
            *((unsigned long *)&a0[16]) = v3;
            *((unsigned long long *)a0) = 1;
            return v3;
        }
        v12 = v2;
        v11 = 31;
    }
    v20 = a0 + 8.new_sync(&v11);
    *((unsigned long long *)a0) = 0;
    return v20;
}
