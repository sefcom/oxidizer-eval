long long fish::editable_line::EditableLine::set_colors(void* a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    unsigned long v4;  // rax

    v0 = a1->field_10;
    v1 = (long long)a0[48];
    if (a1->field_10 != (long long)a0[48])
    {
        v2 = 0;
        core::panicking::assert_failed(0, &v0, &v1, &v2, &g_14d64d0); /* do not return */
    }
    core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>((long long)a0[56], (long long)a0[64]);
    v4 = a1->field_10;
    *((unsigned long *)&a0[72]) = v4;
    *((uint128_t *)&a0[56]) = a1->field_0;
    return v4;
}
