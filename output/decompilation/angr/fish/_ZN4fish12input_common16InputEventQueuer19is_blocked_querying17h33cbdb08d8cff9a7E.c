long long fish::input_common::InputEventQueuer::is_blocked_querying(unsigned long long a0)
{
    unsigned int *v1;  // rax
    unsigned long long v2;  // rdx
    unsigned int v3;  // ebx

    v1 = a0.blocking_query();
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v2);
    return v3 & 0xffffff00 | *(v1) != 3;
}
