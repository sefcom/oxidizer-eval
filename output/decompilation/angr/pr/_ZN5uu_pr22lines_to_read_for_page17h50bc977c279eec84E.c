long long uu_pr::lines_to_read_for_page(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = uu_pr::get_columns(a0);
    return (a0->field_138 >> (a0->field_140 & 63)) * v3;
}
