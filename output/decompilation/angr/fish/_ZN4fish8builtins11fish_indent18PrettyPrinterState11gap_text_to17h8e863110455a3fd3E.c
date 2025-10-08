long long fish::builtins::fish_indent::PrettyPrinterState::gap_text_to(unsigned int *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    v0 = v2;
    v0 = a2;
    if (((char)core::slice::<impl [T]>::binary_search_by(a0, a1, &v0) & 1))
    {
        return 0.new(0);
    }
    else if (v3 < a1)
    {
        return a0[2 * v3];
    }
    else
    {
        core::panicking::panic_bounds_check(v3, a1, &g_14c94e0); /* do not return */
    }
}
