long long just::compilation::Compilation::root_src(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax

    v0 = v2;
    v3 = a0 + 816.get_inner(a0 + 744);
    if (!v3)
        core::option::unwrap_failed(&g_82dcb8); /* do not return */
    return v3->field_18;
}
