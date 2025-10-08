long long fish::proc::job_reap(unsigned long long *a0, char a1)
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // rdx

    v1 = a0.jobs();
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v2);
    if (!v1->field_10)
        return 0;
    fish::proc::process_mark_finished_children(a0, 0);
    return fish::proc::process_clean_after_marking(a0, a1);
}
