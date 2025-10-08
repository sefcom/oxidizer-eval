long long fish::kill::kill_yank(void* a0)
{
    char v0;  // [bp-0x30]
    unsigned long long v3;  // rax
    char v4;  // dl

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v3 = v0.unwrap(&g_14dbef0);
    a0.yank(v3 + 8);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v4 & 1);
    return a0;
}
