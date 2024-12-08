long long uu_fmt::parasplit::FileLines::match_prefix::h6e84b376e4883099(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long long v2;  // rdx

    if (a0->field_0 != 0x8000000000000000)
    {
        v0 = 0x8000000000000000;
        return uu_fmt::parasplit::FileLines::match_prefix_generic::h0dd42c8a25661cf2(a0->field_8, a0->field_10, a1, v2, a0->field_4c);
    }
    return -255;
}
