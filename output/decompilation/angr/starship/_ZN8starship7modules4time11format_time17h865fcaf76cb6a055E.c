void starship::modules::time::format_time(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    void* v3;  // [bp-0x78]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x68]

    v0 = a1;
    v1 = a2;
    v2 = 8;
    v3 = 0;
    v4 = 0;
    v5.format_with_items(a3, &v0);
    a0.spec_to_string(&v5);
    core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v5);
    return;
}
