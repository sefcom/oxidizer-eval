long long uu_numfmt::format::format_and_print(unsigned long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    if ((char)(((0 ^ a3->field_70) & (0 ^ -(a3->field_70))) >> 63))
        uu_numfmt::format::format_and_print_whitespace(a0, a1, a2);
    else
        uu_numfmt::format::format_and_print_delimited(a0, a1, a2);
    return a0;
}
