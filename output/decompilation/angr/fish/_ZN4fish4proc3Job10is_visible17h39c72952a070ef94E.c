long long fish::proc::Job::is_visible(void* a0)
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // rdx

    if (a0.is_completed())
    {
        return 0;
    }
    else if ((char)a0.is_constructed())
    {
        v1 = a0.flags();
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v2);
        return v1->field_3 ^ 1;
    }
    else
    {
        return 0;
    }
}
