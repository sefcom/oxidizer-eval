long long uu_dd::Alarm::with_interval(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x88]
    void* v1;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x78]
    char v3;  // [bp-0x70], Other Possible Types: unsigned long long
    char v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned int v7;  // [bp-0x40]
    char v8;  // [bp-0x38]

    v1 = 1;
    v2 = 1;
    v3 = 0;
    *((double *)&v0) = v1.new();
    v5 = v0.downgrade();
    v6 = a1;
    v7 = a2;
    v3 = 0x8000000000000000;
    v1 = 0;
    v4 = 0;
    v8.spawn_unchecked(&v1, &v5);
    v1.expect(&v8);
    ::0x4cc470::core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v1);
    a0->field_8 = a1;
    a0->field_10 = a2;
    a0->field_0 = v0;
    return a0;
}
