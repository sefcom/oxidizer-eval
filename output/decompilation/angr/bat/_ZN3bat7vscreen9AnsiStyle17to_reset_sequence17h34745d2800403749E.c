long long bat::vscreen::AnsiStyle::to_reset_sequence(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v1;  // rax

    if (!((char)(((0 ^ a1) & (0 ^ -(a1))) >> 63)))
        return a0.to_reset_sequence(a2);
    a0->field_0 = 0;
    a0->field_8 = 1;
    a0->field_10 = 0;
    return v1;
}
