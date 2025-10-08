long long fish::reader::Reader::expand_for_execute(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int v3;  // ebx
    char v4;  // dl

    v0 = v2;
    if (a0->field_4f6)
    {
        v3 = fish::reader::reader_shell_test(a1, a0->field_28, a0->field_30);
        if ((char)v3 & 1.is_err_and(v4))
            return v3;
    }
    else
    {
        v3 = 0;
    }
    if (!(char)a0.expand_abbreviation_at_cursor(a1, 0))
        return v3;
    a0.super_highlight_me_plenty(a1);
    if (a0->field_4f6 != 1)
        return v3;
    return (unsigned int)fish::reader::reader_shell_test(a1, a0->field_28, a0->field_30);
}
