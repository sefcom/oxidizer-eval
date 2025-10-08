long long ruff_python_formatter::comments::map::PartIndex::incremented(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // cc_op
    unsigned long v3;  // cc_dep1
    unsigned long v4;  // cc_dep2
    unsigned long v5;  // cc_ndep
    unsigned long long v6;  // rax

    if ((char)_ccall(4, 23, (unsigned long long)(a0 + 1), 0, _ccall(v2, v3, v4, v5)))
    {
        v0 = v6;
        core::option::unwrap_failed(&g_97d0a8); /* do not return */
    }
    return a0 + 1;
}
