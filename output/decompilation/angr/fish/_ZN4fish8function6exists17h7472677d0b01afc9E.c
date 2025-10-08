long long fish::function::exists(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x20]

    if (!(char)fish::common::valid_func_name(a0, a1))
        return 0;
    v0 = fish::function::get_props_autoload(a0, a1, a2);
    core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::function::FunctionProperties>>>(&v0);
    return (unsigned int)a2 & 0xffffff00 | v0;
}
