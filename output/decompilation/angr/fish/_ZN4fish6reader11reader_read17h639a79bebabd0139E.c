long long fish::reader::reader_read(void* a0, unsigned int a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    unsigned long long v3;  // r15
    unsigned int v4;  // r12d
    unsigned int v5;  // ebp
    unsigned long long v6;  // rdx

    v3 = (!a1 ? fish::nix::isatty(0) : 0);
    v4 = v3;
    v0.scoped_mod(a0 + 64, v4);
    fish::signal::signal_set_handlers_once(v4);
    if ((char)v3)
    {
        v5 = 0;
        fish::reader::read_i(a0);
    }
    else
    {
        v5 = fish::reader::read_ni(a0, a1, a2);
    }
    *((char *)(a0.libdata_mut() + 128)) = 0;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v6);
    core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v0);
    return v5;
}
