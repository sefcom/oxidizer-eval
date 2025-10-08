long long fish::terminal::maybe_terminfo(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_0 **a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3[2];  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    if ((char)fish::terminal::use_terminfo())
    {
        v0 = fish::terminal::term();
        v3 = a3(v0 + 16);
        if (!v3[0])
        {
            core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v0);
            return 0;
        }
        a0.write_bytes(v3[0], v3[1] - 1);
        v4 = core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v0);
    }
    else
    {
        v4 = (unsigned long long)a0.write_bytes(a1, a2);
    }
    return v4 & 0xffffffffffffff00 | 1;
}
