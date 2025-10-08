long long fish::function::load(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x88]
    int v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x88]
    char v3;  // [bp-0x78]
    char v4;  // [bp-0x60]
    int v5;  // [bp-0x48], Other Possible Types: char
    char v6;  // [bp-0x38]
    unsigned long long v9;  // r12
    char v11;  // dl
    unsigned int v12;  // ebx
    unsigned long long v14;  // rax

    v0 = 2;
    v4.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v9 = v4.unwrap(&g_14d8e30);
    if ((char)v9 + 8.allow_autoload(a0, a1))
    {
        v5.resolve_command(v9 + 104, a0, a1, fish::env::environment::EnvStack::globals(), &g_14c7518);
        if (*((int *)&v5) != 2)
        {
            core::ptr::drop_in_place<core::option::Option<fish::autoload::AutoloadPath>>(&v0);
            memcpy(&v3, &v6, 16);
            v1 = v5;
        }
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v9, v11 & 1);
    if ((int)v1 == 2)
    {
        v12 = 0;
    }
    else
    {
        v1.perform_autoload(a2);
        v4.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
        v14 = v4.unwrap(&g_14d8e48);
        v14 + 104.mark_autoload_finished(a0, a1);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v14, v11 & 1);
        v12 = (unsigned int)a1 & 0xffffff00 | v2 != 2;
    }
    core::ptr::drop_in_place<core::option::Option<fish::autoload::AutoloadPath>>(&v1);
    return v12;
}
