long long fish::reader::reader_readline(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    v3 = fish::reader::current_data();
    if (!v3)
        core::option::unwrap_failed(&g_14dfd00); /* do not return */
    v0 = v3;
    v1 = a1;
    a0.readline(&v0, a2);
    return a0;
}
