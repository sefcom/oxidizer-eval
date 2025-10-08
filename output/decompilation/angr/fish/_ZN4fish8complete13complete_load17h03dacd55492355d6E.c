long long fish::complete::complete_load(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x90]
    int v1;  // [bp-0x88], Other Possible Types: char
    char v2;  // [bp-0x78]
    int v3;  // [bp-0x68], Other Possible Types: char
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x48]
    unsigned long long v7[3];  // rax
    unsigned int v8;  // edx
    unsigned long v9;  // rbp
    char v10;  // bpl
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned int v13;  // ebp
    unsigned long long v15;  // r13
    unsigned long long v18;  // rax

    v3.lock();
    v7 = v3.unwrap(&g_14d6398);
    v9 = v8;
    v10 = (char)v9 & 1;
    v11 = v7[1].get(v7[2], a0, a1);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v7, v10);
    if (v11)
        return 0;
    if ((char)fish::function::load(a0, a1, a2))
    {
        v12 = fish::complete::complete_wrap_map();
        v13 = ((unsigned int)v9 & 0xffffff00 | v10) & 0xffffff00 | v12 + 8.get_inner(a0, a1);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v12, (char)v8 & 1);
    }
    else
    {
        v13 = 0;
    }
    v3.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v0 = &v3;
    v15 = v3.expect(&g_14d63b0);
    v1.resolve_command(v15 + 8, a0, a1, fish::env::environment::EnvStack::globals(), &g_14c7518);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v15, (char)v8 & 1);
    if (*((int *)&v1) == 2)
        return v13;
    memcpy(&v4, &v2, 16);
    v3 = v1;
    v1.perform_autoload(a2);
    v5.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v18 = v5.expect(&g_14d63c8);
    v18 + 8.mark_autoload_finished(a0, a1);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v18, (char)v8 & 1);
    core::ptr::drop_in_place<fish::autoload::AutoloadPath>(&v3);
    return ((char)v8 & 0xffffff00 | (char)v8 & 1) & 0xffffff00 | 1;
}
