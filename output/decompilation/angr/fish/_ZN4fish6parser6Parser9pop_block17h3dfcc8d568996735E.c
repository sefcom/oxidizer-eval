long long fish::parser::Parser::pop_block(unsigned long long a0[8], unsigned long a1)
{
    int v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x1b]
    char v2;  // [bp-0x14]
    char v3;  // [bp-0x13]
    unsigned short v4;  // [bp-0x12]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx

    if (a0[4])
        core::cell::panic_already_borrowed(&g_14de8c8); /* do not return */
    a0[4] = 18446744073709551615;
    if (!a0[7])
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14de898); /* do not return */
    }
    else if (a1 == a0[7] - 1)
    {
        a0[7] = a1;
        v6 = a0[6];
        v7 = a1 * 3;
        v1 = *((long long *)(v6 + v7 * 8 + 13));
        *((int128_t *)&v0) = *((int128_t *)(v6 + v7 * 8));
        v3 = *((char *)(v6 + v7 * 8 + 21));
        v4 = *((short *)(v6 + v7 * 8 + 22));
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0[4]);
        if (v2 == 8)
            return core::ptr::drop_in_place<fish::parser::Block>(&(char)v0);
        a0[7 + 3].pop();
        return core::ptr::drop_in_place<fish::parser::Block>(&(char)v0);
    }
    else
    {
        core::panicking::panic("assertion failed: expected.0 == block_list.len() - 1", 52, &g_14de8b0); /* do not return */
    }
}
