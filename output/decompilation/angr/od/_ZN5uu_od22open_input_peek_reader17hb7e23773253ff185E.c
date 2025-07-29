long long uu_od::open_input_peek_reader(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    char v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]

    v4.from_iter(a1, a1 + a2 * 24, &g_595578);
    v2.new(&v4);
    v3 = a3;
    v0 = a4;
    v1 = a5;
    a0.with_capacity(0x2000, &v0);
    a0->field_70 = 0;
    a0->field_78 = 1;
    a0->field_80 = 0;
    return a0;
}
