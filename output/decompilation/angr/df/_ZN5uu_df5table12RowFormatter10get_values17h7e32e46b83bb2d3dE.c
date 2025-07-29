long long uu_df::table::RowFormatter::get_values(unsigned long a0, struct_1 *a1)
{
    char v0;  // [bp-0xf9]
    unsigned long v1;  // [bp-0xe0]
    unsigned long v2;  // [bp-0xd8]
    void* v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    void* v5;  // [bp-0x88]
    struct_0 *v6;  // [bp-0x80]
    unsigned long v7;  // [bp-0x78]
    unsigned long v8;  // [bp-0x70]
    unsigned long v9;  // [bp-0x68]
    unsigned long v10;  // [bp-0x60]
    unsigned long v11;  // [bp-0x58]
    unsigned long v12;  // [bp-0x50]
    unsigned long v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x38]
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long v19;  // rcx

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v14 = a1->field_8.into_iter();
    v15 = v17;
    v18 = v14.next();
    if (!v14.next())
    {
        v6->field_10 = 0;
        v6->field_0 = *((int128_t *)&v3);
        return 0;
    }
    v19 = a1->field_0;
    v2 = v19 + 152;
    v12 = v19 + 64;
    v11 = v19 + 48;
    v0 = a1->field_10;
    v1 = v19 + 128;
    v10 = v19 + 8;
    v9 = v19 + 192;
    v8 = v19 + 184;
    v13 = v19;
    v7 = v19 + 80;
    goto (long long)(g_417558[*((char *)v14.next())] + (char *)&g_417558[0]);
}
