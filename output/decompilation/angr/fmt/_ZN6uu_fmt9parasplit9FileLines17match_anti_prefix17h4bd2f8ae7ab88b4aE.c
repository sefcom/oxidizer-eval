char uu_fmt::parasplit::FileLines::match_anti_prefix(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    char v2;  // al
    unsigned long v3;  // rax

    v2 = 1;
    if (!((char)(((0 ^ a0->field_18) & (0 ^ -(a0->field_18))) >> 63)))
    {
        v0 = v3 & 0xffffffffffffff00 | 1;
        v2 = (char)a0->field_20.match_prefix_generic(a0->field_28, a1, a2, a0->field_4d) ^ 1;
    }
    return v2 & 1;
}
