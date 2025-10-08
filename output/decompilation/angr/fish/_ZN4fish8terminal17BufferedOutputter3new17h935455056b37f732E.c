long long fish::terminal::BufferedOutputter::new(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if (*(a0))
        core::cell::panic_already_borrowed(&g_14e2b20); /* do not return */
    *(a0) = 18446744073709551615;
    a0 + 1.begin_buffering();
    return a0 + 1;
}
