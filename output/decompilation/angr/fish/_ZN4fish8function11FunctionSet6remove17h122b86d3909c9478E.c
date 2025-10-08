long long fish::function::FunctionSet::remove(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v2;  // rax

    v0 = a0.remove(a1, a2);
    v2 = core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::function::FunctionProperties>>>(&v0);
    if (!v0)
        return v2;
    return fish::event::remove_function_handlers(a1, a2);
}
