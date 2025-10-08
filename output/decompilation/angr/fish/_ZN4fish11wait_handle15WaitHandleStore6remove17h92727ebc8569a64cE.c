long long fish::wait_handle::WaitHandleStore::remove(unsigned long long a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v2;  // r14
    unsigned long long *v3;  // rax

    v2 = *(a1) + 56;
    v3 = a0.peek(v2);
    if (!v3)
    {
        return v3;
    }
    else if (*(v3) == *(a1))
    {
        v0 = a0.pop(v2);
        return core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<fish::wait_handle::WaitHandle>>>(&v0);
    }
    else
    {
        return v3;
    }
}
