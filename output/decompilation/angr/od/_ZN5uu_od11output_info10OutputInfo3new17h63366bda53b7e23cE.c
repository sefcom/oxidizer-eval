long long uu_od::output_info::OutputInfo::new(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rbp
    unsigned long long v4;  // rax

    v2 = a2 + a3 * 40;
    v3 = a2.fold(v2);
    v4 = a2.fold(v2, &v0);
    if (!v3)
        core::panicking::panic_const::panic_const_div_by_zero(&g_5963d0); /* do not return */
    a0.create_spaced_formatter_info(a2, a3, v3, v4);
    a0->field_18 = a1;
    a0->field_20 = v4 * (!(v3 | a1) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)a1) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a1) / (v3 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT a1) % v3) CONCAT (unsigned long long)((0 CONCAT a1) / v3));
    a0->field_28 = v0;
    a0->field_30 = a4;
    return a0;
}
