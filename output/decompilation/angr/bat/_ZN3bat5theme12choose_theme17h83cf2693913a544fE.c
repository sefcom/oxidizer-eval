void bat::theme::choose_theme(struct_0 *a0, struct_1 *a1, unsigned int a2)
{
    if (a2)
    {
        a0->field_10 = *((long long *)((char *)&a1->field_18 + 8));
        a0->field_0 = *((int128_t *)&(&a1->field_10)[1]);
        core::ptr::drop_in_place<bat::theme::ThemePreference>(&a1->field_28);
        core::ptr::drop_in_place<nu_ansi_term::display::OSControl<str>>(a1);
    }
    else
    {
        a0->field_10 = a1->field_10;
        a0->field_0 = a1->field_0;
        core::ptr::drop_in_place<bat::theme::ThemePreference>(&a1->field_28);
        core::ptr::drop_in_place<nu_ansi_term::display::OSControl<str>>(&(&a1->field_10)[1]);
    }
    return;
}
