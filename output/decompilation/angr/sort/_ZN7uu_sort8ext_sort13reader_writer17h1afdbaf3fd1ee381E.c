long long uu_sort::ext_sort::reader_writer::h1afdbaf3fd1ee381(unsigned long long a0, struct_0 *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0x1c8]
    unsigned long long v1;  // [sp-0x1c0]
    unsigned long long v2;  // [sp-0x1b8]
    char v3;  // [bp-0x178]
    char v4;  // [bp-0x170]
    char v5;  // [bp-0x168]
    unsigned long long v6;  // [sp-0x100]
    unsigned long long v7;  // [sp-0xf8]
    unsigned long long v8;  // [sp-0xf0]
    unsigned long long v9;  // [sp-0x10]
    unsigned long v10;  // r15
    unsigned long v14;  // rcx
    unsigned long long v15;  // rcx

    v9 = v10;
    v2 = a4;
    v1 = a3;
    uu_sort::ext_sort::read_write_loop::h289e20b2b60c2e20(&v3, a0, a6, a1->field_99, a1->field_68 / 10, a1, *((int *)&v0));
    if (v6 == 9223372036854775811)
    {
        ::0x565ee0::core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(a5);
        return v7;
    }
    v6 = *((long long *)&v3);
    v7 = *((long long *)&v4);
    v15 = (v14 < 3 ? 0x8000000000000000 ^ v6 : 3);
    v8 = *((long long *)&v5);
    goto *((int *)(4396744 + vvar_8{reg 24} * 4)) + 4396744;
}
