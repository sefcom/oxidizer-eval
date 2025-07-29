long long uu_paste::DelimiterState::reset_to_first_delimiter(struct_0 *a0)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    int v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long v6;  // rax

    if (a0->field_0 != 2)
        return v6;
    v2 = v4;
    v5 = v0.new(a0->field_18, a0->field_20 * 16 + a0->field_18);
    *((void*)((char *)&a0->field_28 + 8)) = v1;
    *((void*)&(&a0->field_20)[1]) = v0;
    return v5;
}
