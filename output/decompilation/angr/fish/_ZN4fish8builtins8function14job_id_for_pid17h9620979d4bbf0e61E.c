long long fish::builtins::function::job_id_for_pid(unsigned int a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // r15
    unsigned long long v6;  // rdx

    v0 = v2;
    v3 = a1.job_get_from_pid(a0);
    if (v3)
    {
        v0 = v3;
        core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v0);
        return 1;
    }
    v4 = a1.get_wait_handles().get_by_pid(a0);
    if (v4)
    {
        v0 = v4;
        core::ptr::drop_in_place<alloc::rc::Rc<fish::wait_handle::WaitHandle>>(&v0);
        v5 = 1;
    }
    else
    {
        v5 = 0;
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v6);
    return v5;
}
