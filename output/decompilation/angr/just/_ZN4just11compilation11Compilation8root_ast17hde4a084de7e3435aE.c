long long just::compilation::Compilation::root_ast(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a0 + 0x300.get_inner(a0 + 744);
    if (!v3)
        core::option::unwrap_failed(&g_82dca0); /* do not return */
    return v3 + 24;
}
