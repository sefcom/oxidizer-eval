long long fish::screen::Screen::write_char(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v1;  // r14
    unsigned long long *v2;  // r15
    struct_0 *v3;  // rcx
    void* v4;  // rax

    v1 = a2 + a0->field_60;
    a0->field_60 = v1;
    v2 = a0->field_c0;
    if (*(v2))
        core::cell::panic_already_borrowed(&g_14e1be8); /* do not return */
    *(v2) = 18446744073709551615;
    v2 + 1.writech(a1);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v2);
    v3 = 112;
    v4 = 0;
    if (a0->field_38 == 1 && v1 == a0->field_40)
    {
        v4 = a0->field_68 + 1;
        if ((char)_ccall(4, 24, a0->field_68 + 1, 0, (unsigned long long)(char)(v1 < a0->field_40)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e1bd0); /* do not return */
        a0->field_70 = 1;
        a0->field_78 = 0;
        v3 = 128;
    }
    *((void* *)(a0 + v3)) = v4;
    return v4;
}
