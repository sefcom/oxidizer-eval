long long fish::screen::allow_soft_wrap()
{
    struct_0 *v0;  // [bp-0x10]
    unsigned int v2;  // ebx

    if (!(char)fish::terminal::use_terminfo())
        return v2 & 0xffffff00 | 1;
    v0 = fish::terminal::term();
    core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v0);
    return v0->field_191;
}
