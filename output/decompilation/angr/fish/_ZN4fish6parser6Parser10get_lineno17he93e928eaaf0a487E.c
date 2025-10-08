long long fish::parser::Parser::get_lineno(struct_0 *a0)
{
    char v1;  // al
    unsigned int v2;  // ebp
    unsigned int v3;  // edx
    unsigned long v4;  // cc_ndep

    if (a0->field_110)
        core::cell::panic_already_borrowed(&g_14de688); /* do not return */
    a0->field_110 = 18446744073709551615;
    v1 = a0 + 1.line_offset_of_node();
    v2 = 0;
    if ((v1 & 1))
        v2 = ((char)_ccall(5, 23, (unsigned long long)(v3 + 1), 0, _ccall(17, (unsigned long long)(v1 & 1), 0, v4)) ? v3 + 1 : 4294967295);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0->field_110);
    return v2;
}
