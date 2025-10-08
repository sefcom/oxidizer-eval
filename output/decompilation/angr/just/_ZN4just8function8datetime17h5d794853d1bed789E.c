long long just::function::datetime(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98]
    char v4;  // [bp-0x90]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x78]

    v5.now();
    v0 = a2;
    v1 = a3;
    v2 = 8;
    v3 = 0;
    v4 = 0;
    v6.format_with_items(&v5, &v0);
    v0.spec_to_string(&v6);
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = 8;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v0);
    a0->field_0 = 0;
    core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v6);
    return a0;
}
