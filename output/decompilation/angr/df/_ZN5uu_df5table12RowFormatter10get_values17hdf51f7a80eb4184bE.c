long long uu_df::table::RowFormatter::get_values(unsigned long a0, struct_3 *a1)
{
    char v0;  // [bp-0x119]
    struct_1 *v1;  // [bp-0x118]
    unsigned long v2;  // [bp-0x110]
    unsigned long v3;  // [bp-0x108]
    void* v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    void* v6;  // [bp-0xd8]
    struct_0 *v7;  // [bp-0xd0]
    unsigned long v8;  // [bp-0xc8]
    unsigned long v9;  // [bp-0xc0]
    unsigned long v10;  // [bp-0xb8]
    unsigned long v11;  // [bp-0xb0]
    unsigned long v12;  // [bp-0xa8]
    unsigned long v13;  // [bp-0xa0]
    unsigned long v14;  // [bp-0x98]
    unsigned long v15;  // [bp-0x90]
    unsigned long v16;  // [bp-0x88]
    unsigned long v17;  // [bp-0x80]
    char *v18;  // [bp-0x78]
    unsigned long v19;  // [bp-0x70]
    unsigned long long v21;  // r13

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v1 = a1->field_8;
    v19 = a1->field_8->field_10;
    if (!a1->field_8->field_10)
    {
        v7->field_10 = 0;
        v7->field_0 = 0;
        v7->field_8 = 8;
        return 8;
    }
    v18 = &v1->field_8->field_0;
    v21 = a1->field_0;
    v17 = v21 + 104;
    v3 = v21 + 152;
    v14 = v21 + 16;
    v13 = v21 + 24;
    v12 = v21 + 64;
    v11 = v21 + 48;
    v16 = v21 + 32;
    v0 = a1->field_10;
    v2 = v21 + 128;
    v15 = v21 + 8;
    v10 = v21 + 192;
    v9 = v21 + 184;
    v8 = v21 + 80;
    goto (long long)(g_41a880[*(v18)] + (char *)&g_41a880[0]);
}
