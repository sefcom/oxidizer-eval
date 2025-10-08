void fish::proc::Job::mark_constructed(void* a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    uint128_t v3;  // [bp-0x20]
    unsigned long long v5;  // rdx

    if ((char)a0.is_constructed())
    {
        v0 = &g_14df370;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14df380); /* do not return */
    }
    *((char *)a0.mut_flags()) = 1;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v5);
    return;
}
