int uu_sort::ext_sort::reader_writer::hea8d60344d72eabc()
{
    char v0;  // [bp-0x1c0]
    unsigned long long v1;  // [sp-0x1b8]
    char v2;  // [bp-0x178]
    char v3;  // [bp-0x170]
    char v4;  // [bp-0x168]
    unsigned long long v5;  // [sp-0x100]
    unsigned long long v6;  // [sp-0xf8]
    unsigned long long v7;  // [sp-0xf0]
    unsigned long long v8;  // [sp-0x10]
    unsigned long long v9;  // [bp+0x8]
    unsigned long v10;  // r15
    unsigned long v11;  // r8
    unsigned long long v12;  // rdi
    struct_0 *v13;  // rsi
    unsigned long long v14;  // rdx
    unsigned long long v18;  // r9
    unsigned long long v19;  // rax

    v8 = v10;
    v1 = v11;
    uu_sort::ext_sort::read_write_loop::hb7505e9f57c3babe(&v2, v12, v9, v13->field_99, v13->field_68 / 10, v13, v14, *((int *)&v0));
    if (v5 == 9223372036854775811)
    {
        ::0x565ee0::core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(v18);
        return;
    }
    v5 = *((long long *)&v2);
    v6 = *((long long *)&v3);
    v19 = 0x8000000000000000 ^ v5;
    if (v19 >= 3)
        v19 = 3;
    v7 = *((long long *)&v4);
    goto *((int *)(4396760 + vvar_1{reg 24} * 4)) + 4396760;
}
