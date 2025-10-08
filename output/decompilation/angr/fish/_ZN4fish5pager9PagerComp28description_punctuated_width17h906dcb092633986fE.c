long long fish::pager::PagerComp::description_punctuated_width(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rcx
    unsigned long v3;  // rax

    v2 = a0->field_88;
    v3 = (v2) * 4;
    if ((char)__CFADD__(v3, v2))
    {
        v0 = v3 + v2;
        core::panicking::panic_const::panic_const_add_overflow(&g_14dc6b0); /* do not return */
    }
    return v3 + v2;
}
