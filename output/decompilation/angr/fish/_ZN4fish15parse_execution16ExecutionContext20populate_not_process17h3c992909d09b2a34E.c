void fish::parse_execution::ExecutionContext::populate_not_process(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long a4)
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // rdx

    v1 = a2.mut_flags();
    v1->field_2 = v1->field_2 ^ 1;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v2);
    a0.populate_job_process(a1, a2, a3, a4 + 32, a4 + 80);
    return;
}
