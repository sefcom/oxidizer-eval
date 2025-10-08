long long uu_kill::kill(unsigned int a0, unsigned int *a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned int v1;  // [bp-0x94]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    char *v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    char *v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    char *v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    void* v12;  // [bp-0x40]
    unsigned int *v14;  // r13
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long v17;  // rax

    if (!a2)
        return v17;
    v14 = 0;
    do
    {
        v1 = *((int *)(a1 + v14));
        v15 = nix::sys::signal::kill(*((int *)(a1 + v14)), a0);
        if ((unsigned int)v15 != 134)
        {
            v0 = v15 * 0x100000000 | 2.map_err_context(&v1);
            uucore::mods::error::set_exit_code(1);
            v2 = uucore::util_name();
            v3 = v16;
            v4 = &v2;
            v5 = <&T as core::fmt::Display>::fmt;
            v6 = &v0;
            v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v8 = &g_4e7718;
            v9 = 3;
            v12 = 0;
            v10 = &v4;
            v11 = 2;
            std::io::stdio::_eprint(&v8);
            v15 = (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v0);
        }
        v14 += 1;
    } while (a2 * 4 != v14);
    return v15;
}
