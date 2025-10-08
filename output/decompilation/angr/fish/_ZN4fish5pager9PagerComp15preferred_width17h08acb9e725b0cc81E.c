long long fish::pager::PagerComp::preferred_width(struct_0 *a0)
{
    unsigned long long v1;  // rax

    v1 = a0.description_punctuated_width();
    if ((char)__CFADD__(v1, a0->field_80))
        core::panicking::panic_const::panic_const_add_overflow(&g_14dc6c8); /* do not return */
    return v1 + a0->field_80;
}
