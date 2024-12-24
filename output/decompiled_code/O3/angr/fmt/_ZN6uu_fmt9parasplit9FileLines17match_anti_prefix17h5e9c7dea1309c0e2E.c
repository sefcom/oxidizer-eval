long long uu_fmt::parasplit::FileLines::match_anti_prefix::h5e9c7dea1309c0e2(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v3 = v2 | -0x100 | 1;
    if (a0->field_18 != 0x8000000000000000)
    {
        v0 = v3;
        v4 = uu_fmt::parasplit::FileLines::match_prefix_generic::h0dd42c8a25661cf2(a0->field_20, a0->field_28, a1, a2, a0->field_4d);
        v3 = v4 | -0x100 | (char)v4 ^ 1;
    }
    return v3 | -0x100 | 1;
}
