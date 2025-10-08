long long fish::parser::Parser::create_profile_item(unsigned long long a0[16])
{
    void* v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    char v4;  // [bp-0x18]

    if (!_ZN4fish6common16PROFILING_ACTIVE17h17c91187298e4d56E.load())
    {
        return 0;
    }
    else if (!a0[12])
    {
        a0[12] = 18446744073709551615;
        v0 = 0;
        v3 = 0;
        v4 = 0;
        v1 = 4;
        v2 = 0;
        a0[13].push(&v0);
        if (!a0[15])
            core::panicking::panic_const::panic_const_sub_overflow(&g_14de940); /* do not return */
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0[12]);
        return 1;
    }
    else
    {
        core::cell::panic_already_borrowed(&g_14de958); /* do not return */
    }
}
