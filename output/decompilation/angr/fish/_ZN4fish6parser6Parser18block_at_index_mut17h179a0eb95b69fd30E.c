long long fish::parser::Parser::block_at_index_mut(unsigned long long a0[8], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    if (a0[4])
        core::cell::panic_already_borrowed(&g_14de730); /* do not return */
    a0[4] = 18446744073709551615;
    if (a1 >= a0[7])
    {
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0[4]);
        return 0;
    }
    return a0[5].map(&a0[4], a0[7], a1);
}
