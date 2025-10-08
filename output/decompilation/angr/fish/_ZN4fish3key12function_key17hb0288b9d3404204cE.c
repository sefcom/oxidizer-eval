long long fish::key::function_key(unsigned int a0)
{
    unsigned int v1;  // ebx

    if (!(char)g_a1b97c.contains(a0))
    {
        core::panicking::panic("assertion failed: (1..=MAX_FUNCTION_KEY).contains(&n)src/key.rs", 53, &g_14dbb18); /* do not return */
    }
    else if (a0)
    {
        v1 = a0 - 1;
        if ((char)__CFADD__(v1, 62963))
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14dbb48); /* do not return */
        }
        else if ((v1 + 62963 ^ 0xd800) - 0x110000 >= -0x10f800)
        {
            return v1 + 62963;
        }
        else
        {
            core::option::unwrap_failed(&g_14dbb60); /* do not return */
        }
    }
    else
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14dbb30); /* do not return */
    }
}
