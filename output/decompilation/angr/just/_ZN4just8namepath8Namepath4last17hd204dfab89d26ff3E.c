long long just::namepath::Namepath::last(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (!a1)
    {
        v0 = v2;
        core::option::unwrap_failed(&g_8305f8); /* do not return */
    }
    return a0 + a1 * 72 - 72;
}
