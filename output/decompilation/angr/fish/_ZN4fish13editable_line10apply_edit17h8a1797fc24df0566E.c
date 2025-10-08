long long fish::editable_line::apply_edit(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[13])
{
    unsigned long v0;  // [bp-0x78]
    unsigned int v1;  // [bp-0x70]
    char v2;  // [bp-0x68]
    unsigned long long v4;  // r12
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned int v7;  // eax

    v4 = a2[11];
    v5 = v4.clone(a2[12]);
    v2.splice(a0, v5, v6, a2[8], a2[8] + a2[9] * 4);
    core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u32>>>>(&v2);
    if (!v4)
    {
        v7 = 0;
    }
    else if (v4 - 1 < a1[2])
    {
        v7 = *((int *)(a1[1] + v4 * 4 - 4));
    }
    else
    {
        core::panicking::panic_bounds_check(v4 - 1, a1[2], &g_14d64b8); /* do not return */
    }
    v1 = v7;
    v0 = a2[9];
    v2.splice(a1, v5, v6, &v0);
    return core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::take::Take<core::iter::sources::repeat::Repeat<fish::highlight::highlight::HighlightSpec>>>>(&v2);
}
