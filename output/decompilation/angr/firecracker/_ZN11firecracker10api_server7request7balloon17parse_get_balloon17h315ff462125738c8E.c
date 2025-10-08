double firecracker::api_server::request::balloon::parse_get_balloon(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    char *v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    char v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    char *v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xaa]
    unsigned long long v10;  // [bp-0xa8]
    void* v11;  // [bp-0xa0]
    unsigned long v13;  // xmm0lq
    int v14;  // xmm0
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long v17;  // xmm0lq

    if (!a1)
    {
        v6 = 9;
        a0->field_8.new_sync(&v6);
        a0->field_0 = 0;
        return v17;
    }
    v0 = a1;
    v1 = a2;
    if (!(char)a1.equal(a2, "statisticsUnrecognized GET request path ``.Unrecognized PATCH request path `", 10))
    {
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v6 = &g_7a3810;
        v7 = 2;
        v11 = 0;
        v8 = &v2;
        v10 = 1;
        v4.map_or_else(0, a2, &v6);
        memcpy(&(char)v6, &v4, 16);
        v9 = v5;
        a0->field_8 = 769;
        v14 = *((int128_t *)&v6);
        v15 = *((long long *)((char *)&v7 + 6));
        v16 = v9;
        *((void*)&a0->field_a[0]) = v14;
        *((unsigned long long *)&a0->field_a[14]) = v15;
        a0->field_18 = v16;
        a0->field_0 = 1;
        return (unsigned long long)v14;
    }
    v6 = 10;
    a0->field_8.new_sync(&v6);
    a0->field_0 = 0;
    return v13;
}
