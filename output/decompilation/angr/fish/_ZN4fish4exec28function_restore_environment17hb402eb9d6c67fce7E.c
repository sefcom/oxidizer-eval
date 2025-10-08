void fish::exec::function_restore_environment(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v1;  // rdx

    a0.pop_block(a1);
    *((char *)(a0.libdata_mut() + 127)) = 0;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v1);
    return;
}
