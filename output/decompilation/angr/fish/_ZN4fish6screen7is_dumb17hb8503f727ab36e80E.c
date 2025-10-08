long long fish::screen::is_dumb()
{
    unsigned long long v0[41];  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned long long v3;  // rbx

    if (!(char)fish::terminal::use_terminfo())
        return _ZN4fish6screen7IS_DUMB17h6e20799dfa2aab0eE.load();
    v0[0] = fish::terminal::term();
    v3 = v2 & 0xffffffffffffff00 | 1;
    if (v0[34] && v0[36] && v0[38])
        v3 = v3 & 0xffffffffffffff00 | !v0[40];
    core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v0);
    return v3 & 4294967295;
}
