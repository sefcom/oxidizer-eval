long long fish::parse_execution::ExecutionContext::check_end_execution(unsigned int a0, void* a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rbx
    unsigned long long v4;  // rbx
    char v5[130];  // rax
    unsigned long long v6;  // rdx

    v0 = v2;
    v4 = v3 & 0xffffffffffffff00 | 2;
    if (!a0 && !(char)a1.check_cancel() && !(char)fish::reader::fish_is_unwinding_for_exit())
    {
        v5 = a1.parser().libdata();
        v4 = v4 & 0xffffffffffffff00 | 2;
        if (!v5[128])
        {
            v4 = v4 & 0xffffffffffffff00 | 1;
            if (!v5[127])
                v4 = (!v5[129]) * 3 + 1;
        }
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v6);
    }
    return v4 & 4294967295;
}
