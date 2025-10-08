long long fish::wait_handle::WaitHandleStore::add(unsigned long long a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    v0 = a0.put(a1->field_38, a1);
    core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<fish::wait_handle::WaitHandle>>>(&v0);
    return v0;
}
