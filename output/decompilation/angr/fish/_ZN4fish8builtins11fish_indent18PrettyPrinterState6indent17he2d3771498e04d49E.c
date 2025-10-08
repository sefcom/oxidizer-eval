long long fish::builtins::fish_indent::PrettyPrinterState::indent(unsigned int *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v1;  // rbx

    if (a2 >= a1)
        core::panicking::panic_bounds_check(a2, a1, &g_14c9378); /* do not return */
    v1 = a0[a2];
    if (v1 >= 0)
    {
        0.unwrap(&g_14c9390);
        return v1;
    }
    1.unwrap(&g_14c9390);
    [D] Unsupported jumpkind Ijk_NoDecode at address 20237087()
}
