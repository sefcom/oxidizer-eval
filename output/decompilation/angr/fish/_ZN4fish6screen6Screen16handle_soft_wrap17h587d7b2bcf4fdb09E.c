long long fish::screen::Screen::handle_soft_wrap(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    struct_1 *v1;  // rax
    unsigned long v2;  // rax

    if (a0->field_70 != 1)
    {
        return v2;
    }
    else if (a1 != a0->field_78)
    {
        return v2;
    }
    else if (a2 != a0->field_80)
    {
        return v2;
    }
    else if (a2)
    {
        v1 = a0.line(a2 - 1);
        if (!v1->field_20)
            return v1;
        a0->field_60 = a1;
        a0->field_68 = a2;
        return v1;
    }
    else
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e1c30); /* do not return */
    }
}
