long long uu_df::table::Header::get_headers(unsigned long a0, struct_1 *a1)
{
    unsigned int v0;  // [bp-0x98]
    unsigned int v1;  // [bp-0x94]
    void* v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    void* v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    unsigned long v6;  // [bp-0x60]
    struct_0 *v7;  // [bp-0x58]

    v2 = 0;
    v3 = 8;
    v4 = 0;
    if (!a1->field_10)
    {
        v7->field_10 = 0;
        v7->field_0 = 0;
        v7->field_8 = 8;
        return 8;
    }
    v5 = a1->field_48;
    v6 = &a1->field_48;
    v0 = a1->field_55;
    v1 = v0 | 2;
    goto (long long)(g_41a8b0[a1->field_8->field_0] + (char *)&g_41a8b0[0]);
}
