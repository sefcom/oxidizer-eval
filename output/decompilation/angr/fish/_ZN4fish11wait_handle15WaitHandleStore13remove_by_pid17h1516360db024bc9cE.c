long long fish::wait_handle::WaitHandleStore::remove_by_pid(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]
    unsigned long long v1;  // [bp-0x8]

    v0 = a1;
    v1 = a0.pop(&v0);
    return core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<fish::wait_handle::WaitHandle>>>(&v1);
}
