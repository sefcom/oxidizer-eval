long long zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query(char a0[75], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    int v2;  // [bp-0xf8]
    int v3;  // [bp-0xe8]
    int v4;  // [bp-0xd8]
    char v5;  // [bp-0xc8]
    int v6;  // [bp-0xb8]
    char v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0x98]
    char v9;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x88]
    int v11;  // [bp-0x80]
    int v12;  // [bp-0x70]
    int v13;  // [bp-0x60]
    char v14;  // [bp-0x50]
    int v15;  // [bp-0x40]
    char v16;  // [bp-0x30]
    char v17;  // [bp-0x20]
    unsigned long v20;  // rdx

    if (((char)zoxide::util::current_time() & 1))
        return v20;
    v9.get_stream(a0, a1, v20);
    if (!((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63)))
    {
        v8 = *((long long *)&v17);
        memcpy(&v7, &v16, 16);
        v6 = v15;
        memcpy(&v5, &v14, 16);
        v4 = v13;
        v3 = v12;
        v2 = v11;
        v0 = v9;
        v1 = v10;
        v1 = (!a0[73] ? (!a0[74] ? a0.query_first(&v0, v20) : a0.query_list(&v0, v20)) : a0.query_interactive(&v0, v20));
        core::ptr::drop_in_place<zoxide::db::stream::Stream>(&v0);
    }
    return v1;
}
