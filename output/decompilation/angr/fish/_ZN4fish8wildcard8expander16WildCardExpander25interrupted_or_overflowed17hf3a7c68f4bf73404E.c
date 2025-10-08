long long fish::wildcard::expander::WildCardExpander::interrupted_or_overflowed(struct_2 *a0)
{
    unsigned long long v1;  // rax
    char v2;  // 4097

    v1 = a0->field_68->field_20(a0->field_60);
    v2 = a0->field_8a;
    a0->field_8a = (char)v1 | a0->field_8a;
    if ((char)v1 || v2)
        return v1 & 0xffffffffffffff00 | 1;
    return a0->field_8b;
}
