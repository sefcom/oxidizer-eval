long long uu_sort::ext_sort::reader_writer(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned int a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0x158]
    char v1;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x110]
    char v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v8;  // r15
    unsigned long long v9;  // rax

    v7 = v8;
    v0 = a4;
    uu_sort::ext_sort::read_write_loop(&v1, a0, a6, a1->field_99, a1->field_68 / 10, a1, a2, a3);
    if (v1 == 9223372036854775811)
    {
        ::0x54e700::core::ptr::drop_in_place<uu_sort::Output>(a5);
        return v2;
    }
    v4 = v1;
    v5 = v2;
    v9 = 0x8000000000000000 ^ v4;
    if (v9 >= 3)
        v9 = 3;
    v6 = *((long long *)&v3);
    goto (long long)(g_4480ac[v9] + (char *)&g_4480ac[0]);
}
