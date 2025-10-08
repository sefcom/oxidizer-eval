long long fish::expand::expand_tilde(unsigned long long a0[3], unsigned long long a1, struct_0 *a2)
{
    unsigned long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v3;  // rax
    unsigned int v4;  // edx
    unsigned long long v5;  // rax

    v0 = a0[1];
    v1 = a0[1] + a0[2] * 4;
    v3 = v0.next();
    if ((unsigned int)v3 == 2)
        return v3;
    v5 = v3.unwrap(v4, &g_14bd1b0);
    if (v4 != 126)
        return v5;
    v0.splice(a0, 0, 1, &g_550f40, "kprvkclokopttest");
    core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u32>>>>(&v0);
    return fish::expand::expand_home_directory(a0, a1, a2->field_38);
}
