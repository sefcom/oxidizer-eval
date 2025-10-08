long long fish::proc::Job::is_constructed(void* a0)
{
    char *v1;  // rax
    unsigned long long v2;  // rdx

    v1 = a0.flags();
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v2);
    return *(v1);
}
