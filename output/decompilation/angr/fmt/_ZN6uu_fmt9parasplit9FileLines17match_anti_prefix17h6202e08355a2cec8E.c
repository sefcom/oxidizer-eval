char uu_fmt::parasplit::FileLines::match_anti_prefix::h6202e08355a2cec8(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax

    if (a0->field_18 != 0x8000000000000000)
    {
        v0 = v2 & 0xffffffffffffff00 | 1;
        uu_fmt::parasplit::FileLines::match_prefix_generic::h76346122f467dd36(a0->field_20, a0->field_28, a1, a2, a0->field_4d);
        return 1;
    }
    return 1;
}
