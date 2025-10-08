long long just::namepath::Namepath::split_last(unsigned long long a0[3], unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // rdx
    unsigned long long v3;  // rax

    if (!a2)
    {
        v0 = v3;
        core::option::unwrap_failed(&g_830610); /* do not return */
    }
    v2 = a2 - 1;
    a0[0] = a1 + v2 * 72;
    a0[1] = a1;
    a0[2] = v2;
    return a1 + v2 * 72;
}
