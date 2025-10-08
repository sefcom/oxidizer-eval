long long fish::proc::Job::posts_job_exit_events(void* a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    v3 = a0.flags();
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v4);
    if (v3->field_4 != 1)
        return 0;
    return a0.has_external_proc();
}
