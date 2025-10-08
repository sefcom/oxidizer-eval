long long uu_join::State::print_first_line(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (!a0[2])
    {
        v0 = v2;
        core::panicking::panic_bounds_check(0, 0, &g_4fd348); /* do not return */
    }
    return a0.print_line(a1, a0[1], a2);
}
