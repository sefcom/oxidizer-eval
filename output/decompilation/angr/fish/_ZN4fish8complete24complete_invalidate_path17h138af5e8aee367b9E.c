void fish::complete::complete_invalidate_path()
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x40]
    unsigned long long v5;  // rax
    char v6;  // dl

    v1.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v5 = v1.expect(&g_14d6410);
    v2.get_autoloaded_commands(v5 + 8);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, v6 & 1);
    v1.into_iter(&v2);
    v0.next(&v1);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        do
        {
            fish::complete::complete_remove_all(&v0, 0, 0);
            v0.next(&v1);
        } while (*((long long *)&v0) != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v1);
    return;
}
