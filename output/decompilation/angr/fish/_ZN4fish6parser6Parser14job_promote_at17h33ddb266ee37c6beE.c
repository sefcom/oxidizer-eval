void fish::parser::Parser::job_promote_at(unsigned long long *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3[3];  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    v3 = a0.jobs_mut();
    core::slice::<impl [T]>::rotate_left(v3[1], v3[2], a1);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v4);
    return;
}
