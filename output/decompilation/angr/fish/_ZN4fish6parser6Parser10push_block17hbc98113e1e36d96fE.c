long long fish::parser::Parser::push_block(unsigned long long a0[8], struct_0 *a1)
{
    unsigned long long v1;  // rax
    char v2;  // al
    unsigned long v3;  // rcx

    a1->field_10 = a0.get_lineno();
    v1 = a0.current_filename();
    core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<widestring::utfstring::Utf32String>>>(&a1->field_8);
    a1->field_8 = v1;
    v2 = a1->field_14;
    v3 = (v2 - 2 < 12 ? v2 - 2 : 3);
    if ((char)v3 != 3)
    {
        if ((unsigned int)v3 == 6)
            goto LABEL_13ebcc4;
        v2 = 0;
    }
    a0[7 + 3].push(v2 & 1);
LABEL_13ebcc4:
    if (a0[4])
        core::cell::panic_already_borrowed(&g_14de880); /* do not return */
    a0[4] = 18446744073709551615;
    a0[5].push(a1);
    if (!a0[7])
        core::panicking::panic_const::panic_const_sub_overflow(&g_14de868); /* do not return */
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0[4]);
    return a0[7] - 1;
}
