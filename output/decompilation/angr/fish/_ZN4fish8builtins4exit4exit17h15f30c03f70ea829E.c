long long fish::builtins::exit::exit(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    void* v4;  // rdx

    v1 = fish::builtins::return::parse_return_value(a2, a3, a0, a1);
    v2 = v1 & 4294967295;
    if (v2 == 2)
    {
        v1 = v1;
        *((char *)(a0.libdata_mut() + 128)) = 1;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v3);
        v2 = v1 >> 32;
        v4 = 0;
    }
    else
    {
        v4 = (unsigned int)v1 & 0xff00;
    }
    return v1 & 0xffffffffffff0000 | v4 | v2;
}
