long long fish::parser::Parser::blocks_size(unsigned long long a0[8])
{
    if (a0[4] >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14de7a8); /* do not return */
    a0[4] = a0[4] + 1;
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0[4]);
    return a0[7];
}
