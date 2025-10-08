long long fish::reader::Reader::is_at_line_with_autosuggestion(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx

    if (((a0->field_160 & 1) || a0->field_478) && a0->field_271)
        return 0;
    if (!a0->field_510)
        return 0;
    v0 = v2;
    v3 = fish::editable_line::range_of_line_at_cursor(a0->field_28, a0->field_30, *((long long *)&a0->field_78));
    if (v3 != a0->field_518)
        return 0;
    return v3 & 0xffffffffffffff00 | v4 == a0->field_520;
}
