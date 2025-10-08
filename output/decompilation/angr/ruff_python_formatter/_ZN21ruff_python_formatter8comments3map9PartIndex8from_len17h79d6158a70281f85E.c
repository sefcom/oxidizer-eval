long long ruff_python_formatter::comments::map::PartIndex::from_len(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x8]

    if (a0 >= 4294967295)
    {
        v0 = 4294967295;
        core::panicking::panic("assertion failed: value < u32::MAX as usizecrates/ruff_python_formatter/src/comments/placement.rs", 43, &g_97d090); /* do not return */
    }
    return (unsigned int)a0 + 1;
}
