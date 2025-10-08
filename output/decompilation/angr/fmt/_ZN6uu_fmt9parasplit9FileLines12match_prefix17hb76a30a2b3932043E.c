long long uu_fmt::parasplit::FileLines::match_prefix(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    if ((char)(((0 ^ a0->field_0) & (0 ^ -(a0->field_0))) >> 63))
        return v2 & 0xffffffffffffff00 | 1;
    v0 = v2 & 0xffffffffffffff00 | 1;
    return a0->field_8.match_prefix_generic(a0->field_10, a1, a2, a0->field_4c);
}
