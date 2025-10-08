long long uu_sort::ext_sort::reader_writer(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x108]
    char v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    unsigned long long v8;  // r12
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rax

    v7 = v8;
    v6 = v9;
    uu_sort::ext_sort::read_write_loop(&v0, a0, a7, a1->field_99, a1->field_68 / 10, a1, a2, a3, a4, a5);
    if (v0 == 9223372036854775811)
    {
        core::ptr::drop_in_place<uu_sort::Output>(a6);
        return v1;
    }
    v3 = v0;
    v4 = v1;
    v10 = 0x8000000000000000 ^ v3;
    if (v10 >= 3)
        v10 = 3;
    v5 = *((long long *)&v2);
    goto (long long)(g_428930[v10] + (char *)&g_428930[0]);
}
