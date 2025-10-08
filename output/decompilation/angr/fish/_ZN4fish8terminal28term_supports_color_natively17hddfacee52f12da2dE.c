long long fish::terminal::term_supports_color_natively(struct_0 *a0, char a1)
{
    return a1 & 0xffffffffffffff00 | (a0->field_8 <= a1 ^ 1) & a0->field_0;
}
