void uu_ls::TimeStyler::format(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x4c]
    struct_0 *v4;  // rcx
    struct_0 *v5;  // rax
    char v6;  // al

    if ((char)(((0 ^ a1->field_18) & (0 ^ -(a1->field_18))) >> 63))
    {
        v4 = 16;
        v5 = 8;
    }
    else if (a1->field_30)
    {
        v0 = a1->field_30;
        v1 = *((long long *)&(&a1->field_30)[1]);
        v2 = *((int *)((char *)&a1->field_34 + 4));
        v6 = a2.partial_cmp(&v0);
        v5 = (v6 <= 0 ? 8 : 32);
        if (v6 <= 0)
            v4 = 16;
        else
            v4 = 40;
    }
    else
    {
        core::option::unwrap_failed(&g_686758); /* do not return */
    }
    v0.format_with_items(a2, *((long long *)(a1 + v5)), *((long long *)(a1 + v5)) + *((long long *)(a1 + v4)) * 24);
    a0.spec_to_string(&v0);
    core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<core::slice::iter::Iter<chrono::format::Item>>>(&v0);
    return;
}
