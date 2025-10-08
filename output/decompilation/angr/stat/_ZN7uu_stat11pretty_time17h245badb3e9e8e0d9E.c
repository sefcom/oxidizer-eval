void uu_stat::pretty_time(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    void* v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    char v7;  // [bp-0x80], Other Possible Types: unsigned long long
    char v8;  // [bp-0x78]
    char v9;  // [bp-0x28]

    v7.from_timestamp(a1, a2);
    if (*((int *)&v7))
    {
        v1 = *((int *)&v8);
        v0 = v7;
    }
    else
    {
        (char)v0.default();
    }
    v9.from(&v0);
    v2 = "%Y-%m-%d %H:%M:%S.%f %z";
    v3 = 23;
    v4 = 8;
    v5 = 0;
    v6 = 0;
    v7.format_with_items(&v9, &v2);
    a0.spec_to_string(&v7);
    core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v7);
    return;
}
