char uu_fmt::parasplit::FileLines::match_prefix::h101d83996fdb25cf(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x8]

    if (a0->field_0 != 0x8000000000000000)
    {
        v0 = 0x8000000000000000;
        return uu_fmt::parasplit::FileLines::match_prefix_generic::h76346122f467dd36(a0->field_8, a0->field_10, a1, a2, a0->field_4c);
    }
    return 1;
}
