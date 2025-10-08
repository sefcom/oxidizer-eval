long long fish::common::ScopedRefCell<T>::scoped_set(unsigned long long *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x20]

    v0 = a1;
    if (*(a0))
        core::cell::panic_already_borrowed(&g_149a7f0); /* do not return */
    *(a0) = 18446744073709551615;
    *((unsigned long long *)fish::throwing_main::{{closure}}(a0 + 1)) = a1;
    core::ptr::drop_in_place<core::cell::RefMut<fish::parser::LibraryData>>(a0);
    return a0;
}
