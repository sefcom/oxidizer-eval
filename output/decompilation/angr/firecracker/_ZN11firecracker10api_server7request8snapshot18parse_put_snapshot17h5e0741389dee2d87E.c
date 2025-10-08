long long firecracker::api_server::request::snapshot::parse_put_snapshot(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    unsigned short v2;  // [bp-0x8a]
    char *v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x82], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78]
    char *v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x30]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx

    if (a3)
    {
        v10 = a3;
        v11 = a4;
        if ((char)a3.equal(a4, "create/snapshot/", 6))
            return firecracker::api_server::request::snapshot::parse_put_snapshot_create(a0, a1, a2);
        if ((char)a3.equal(a4, "load", 4))
            return firecracker::api_server::request::snapshot::parse_put_snapshot_load(a0, a1, a2);
        v7 = &v10;
        v8 = <&T as core::fmt::Display>::fmt;
        v0 = &g_7a38a0;
        v1 = 1;
        v6 = 0;
        v3 = &v7;
        v5 = 1;
        v12.map_or_else(0, a2, &v0);
        memcpy(&(char)v0, &v12, 16);
        v4 = *((long long *)&v13);
        a0->field_8 = 259;
    }
    else
    {
        (char)v7.to_vec("Missing snapshot operation type.Error accessing VMGenID memory: library/alloc/src/raw_vec/mod.rslibrary/std/src/thread/scoped.rs'load snapshot' VMM action took struct MmdsState with 2 elementsCannot create the rate limiter: index out of bounds: the len is Error resetting serial console: ", 32);
        v4 = v9;
        memcpy(&(char)v0, &(char)v7, 16);
        a0->field_8 = 769;
    }
    v15 = *((long long *)&v2);
    v16 = v4;
    *((int128_t *)&a0->field_a[0]) = *((int128_t *)&v0);
    *((unsigned long long *)&a0->field_a[14]) = v15;
    a0->field_18 = v16;
    a0->field_0 = 1;
    return v15;
}
