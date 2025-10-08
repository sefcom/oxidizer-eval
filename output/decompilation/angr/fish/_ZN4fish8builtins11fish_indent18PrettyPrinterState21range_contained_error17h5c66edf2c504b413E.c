long long fish::builtins::fish_indent::PrettyPrinterState::range_contained_error(unsigned long long a0[3], unsigned int a1, unsigned int a2)
{
    char v0;  // [bp-0x11]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned long long v4;  // rax

    v1 = a1;
    v2 = a2;
    if (!a0)
    {
        core::option::unwrap_failed(&g_14c94f8); /* do not return */
    }
    else if (a0[1].is_sorted_by(a0[2]))
    {
        v4 = core::slice::<impl [T]>::partition_point(a0[1], a0[2], &v0, &v1);
        return v4 & 0xffffffffffffff00 | v4 != a0[2];
    }
    else
    {
        return 0;
    }
}
