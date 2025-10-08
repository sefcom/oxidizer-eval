long long fish::complete::complete_get_wrap_targets(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x40], Other Possible Types: char
    char v1;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5[6];  // rax
    char v6;  // dl

    if (!a2)
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 8;
        *((unsigned long long *)&a0[16]) = 0;
        return a0;
    }
    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v4 = v0.expect(&g_14d64a0);
    v5 = v4 + 8.get_inner(a1, a2);
    if (v5)
    {
        v0.clone(v5[4], v5[5]);
        *((int128_t *)&a0[8]) = *((int128_t *)&v1);
        *((void* *)a0) = v0;
    }
    else
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 8;
        *((unsigned long long *)&a0[16]) = 0;
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v4, v6 & 1);
    return a0;
}
