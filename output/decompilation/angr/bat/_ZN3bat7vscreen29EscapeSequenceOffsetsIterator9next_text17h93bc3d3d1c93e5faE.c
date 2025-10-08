long long bat::vscreen::EscapeSequenceOffsetsIterator::next_text(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x20]
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax

    v0.chars_take_while(a1);
    v3 = 5;
    if (*((int *)&v0) == 1)
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        v3 = 0;
    }
    a0->field_0 = v3;
    return v3;
}
