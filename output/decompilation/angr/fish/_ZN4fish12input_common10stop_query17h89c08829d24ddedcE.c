long long fish::input_common::stop_query(unsigned long long *a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // ebx

    v1 = *(a0);
    *(a0) = 3;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(a1);
    return v2 & 0xffffff00 | v1 != 3;
}
