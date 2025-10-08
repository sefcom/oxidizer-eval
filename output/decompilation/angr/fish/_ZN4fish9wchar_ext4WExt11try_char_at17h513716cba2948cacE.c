long long fish::wchar_ext::WExt::try_char_at(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int *v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long v3;  // cc_ndep

    v1 = a0.as_ref(a1);
    if (a2 == v2)
    {
        return 0;
    }
    else if (!((char)_ccall(6, 8, a2, v2, v3)))
    {
        return 0x110000;
    }
    else if ((char)_ccall(2, 8, a2, v2, v3))
    {
        return v1[a2];
    }
    else
    {
        core::panicking::panic_bounds_check(a2, v2, &g_14e46a8); /* do not return */
    }
}
