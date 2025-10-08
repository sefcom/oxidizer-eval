long long starship::context::Context::exec_cmds_return_first(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]

    v0 = a2;
    v1 = a2 + a3 * 24;
    a0.find_map(&v0, a1);
    return a0;
}
