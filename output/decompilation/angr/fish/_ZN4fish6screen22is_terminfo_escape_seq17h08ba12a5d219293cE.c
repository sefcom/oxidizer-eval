long long fish::screen::is_terminfo_escape_seq(unsigned long long a0, unsigned long long a1)
{
    struct_0 *v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx

    v0 = v2;
    if (!(char)fish::terminal::use_terminfo())
        return 0;
    v0 = fish::terminal::term();
    if (v0->field_30 && fish::screen::try_sequence(v0->field_30, v0->field_38 - 1, a0, a1) || v0->field_f0 && fish::screen::try_sequence(v0->field_f0, v0->field_f8 - 1, a0, a1) || v0->field_70 && fish::screen::try_sequence(v0->field_70, v0->field_78 - 1, a0, a1) || v0->field_80 && fish::screen::try_sequence(v0->field_80, v0->field_88 - 1, a0, a1) || v0->field_a0 && fish::screen::try_sequence(v0->field_a0, v0->field_a8 - 1, a0, a1) || v0->field_40 && fish::screen::try_sequence(v0->field_40, v0->field_48 - 1, a0, a1) || v0->field_50 && fish::screen::try_sequence(v0->field_50, v0->field_58 - 1, a0, a1) || v0->field_90 && fish::screen::try_sequence(v0->field_90, v0->field_98 - 1, a0, a1))
        v3 = 1;
    else
        v3 = (!v0->field_60 ? 0 : fish::screen::try_sequence(v0->field_60, v0->field_68 - 1, a0, a1));
    core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v0);
    return v3;
}
